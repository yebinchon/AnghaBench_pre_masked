
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {scalar_t__ fts_level; int fts_info; char* fts_path; TYPE_1__* fts_statp; int fts_accpath; int fts_errno; } ;
struct TYPE_5__ {int st_flags; } ;
typedef TYPE_2__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (char**,int,int ) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char**,int*,int*) ;
 long FUNC_12 (char*,char**,int) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,int ) ;

int
FUNC_16(int VAR_14, char *VAR_15[])
{
 FTS *VAR_16;
 FTSENT *VAR_17;
 u_long VAR_18, VAR_19, VAR_20;
 long VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32;
 char *VAR_33, *VAR_34;

 VAR_22 = VAR_23 = VAR_24 = VAR_25 = VAR_26 = VAR_27 = VAR_28 = 0;
 while ((VAR_29 = FUNC_7(VAR_14, VAR_15, "HLPRfhvx")) != -1)
  switch (VAR_29) {
  case 'H':
   VAR_22 = 1;
   VAR_23 = 0;
   break;
  case 'L':
   VAR_23 = 1;
   VAR_22 = 0;
   break;
  case 'P':
   VAR_22 = VAR_23 = 0;
   break;
  case 'R':
   VAR_24 = 1;
   break;
  case 'f':
   VAR_25 = 1;
   break;
  case 'h':
   VAR_26 = 1;
   break;
  case 'v':
   VAR_27++;
   break;
  case 'x':
   VAR_28 = 1;
   break;
  case '?':
  default:
   FUNC_13();
  }
 VAR_15 += VAR_11;
 VAR_14 -= VAR_11;

 if (VAR_14 < 2)
  FUNC_13();

 (void)FUNC_9(VAR_9, VAR_13);

 if (VAR_24) {
  if (VAR_26)
   FUNC_2(1, "the -R and -h options may not be "
       "specified together.");
  if (VAR_23) {
   VAR_30 = VAR_4;
  } else {
   VAR_30 = VAR_5;

   if (VAR_22) {
    VAR_30 |= VAR_3;
   }
  }
 } else if (VAR_26) {
  VAR_30 = VAR_5;
 } else {
  VAR_30 = VAR_4;
 }
 if (VAR_28)
  VAR_30 |= VAR_8;

 VAR_33 = *VAR_15;
 if (*VAR_33 >= '0' && *VAR_33 <= '7') {
  VAR_10 = 0;
  VAR_21 = FUNC_12(VAR_33, &VAR_34, 8);
  if (VAR_21 < 0)
   VAR_10 = VAR_2;
  if (VAR_10)
                        FUNC_1(1, "invalid flags: %s", VAR_33);
                if (*VAR_34)
                        FUNC_2(1, "invalid flags: %s", VAR_33);
  VAR_20 = VAR_21;
                VAR_31 = 1;
 } else {
  if (FUNC_11(&VAR_33, &VAR_20, &VAR_18))
                        FUNC_2(1, "invalid flag: %s", VAR_33);
  VAR_18 = ~VAR_18;
  VAR_31 = 0;
 }

 if ((VAR_16 = FUNC_4(++VAR_15, VAR_30 , 0)) == ((void*)0))
  FUNC_1(1, ((void*)0));

 for (VAR_32 = 0; (VAR_17 = FUNC_5(VAR_16)) != ((void*)0);) {
  int VAR_35;

  if ((VAR_30 & VAR_4) ||
      ((VAR_30 & VAR_3) &&
      VAR_17->fts_level == VAR_6))
   VAR_35 = 0;
  else
   VAR_35 = VAR_1;

  switch (VAR_17->fts_info) {
  case 131:
   if (!VAR_24)
    FUNC_6(VAR_16, VAR_17, VAR_7);
   continue;
  case 130:
   FUNC_15("%s: %s", VAR_17->fts_path, FUNC_10(VAR_17->fts_errno));
   VAR_32 = 1;
   break;
  case 129:
  case 128:
   FUNC_15("%s: %s", VAR_17->fts_path, FUNC_10(VAR_17->fts_errno));
   VAR_32 = 1;
   continue;
  default:
   break;
  }
  if (VAR_31)
   VAR_19 = VAR_20;
  else
   VAR_19 = (VAR_17->fts_statp->st_flags | VAR_20) & VAR_18;
  if (VAR_19 == VAR_17->fts_statp->st_flags)
   continue;
  if (FUNC_0(VAR_0, VAR_17->fts_accpath, VAR_19,
      VAR_35) == -1 && !VAR_25) {
   FUNC_14("%s", VAR_17->fts_path);
   VAR_32 = 1;
  } else if (VAR_27 || VAR_12) {
   (void)FUNC_8("%s", VAR_17->fts_path);
   if (VAR_27 > 1 || VAR_12)
    (void)FUNC_8(": 0%lo -> 0%lo",
        (u_long)VAR_17->fts_statp->st_flags,
        VAR_19);
   (void)FUNC_8("\n");
   VAR_12 = 0;
  }
 }
 if (VAR_10)
  FUNC_1(1, "fts_read");
 FUNC_3(VAR_32);
}
