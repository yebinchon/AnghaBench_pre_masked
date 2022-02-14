
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_7__ {scalar_t__ fts_level; int fts_info; char* fts_path; TYPE_1__* fts_statp; int fts_accpath; int fts_errno; } ;
struct TYPE_6__ {int st_mode; } ;
typedef TYPE_2__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;

 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int * FUNC_4 (char**,int,int ) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;
 size_t VAR_11 ;
 int FUNC_10 (char*,...) ;
 int* FUNC_11 (char*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*,int ) ;

int
FUNC_18(int VAR_14, char *VAR_15[])
{
 FTS *VAR_16;
 FTSENT *VAR_17;
 mode_t *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27;
 char *VAR_28;
 mode_t VAR_29;

 VAR_18 = ((void*)0);
 VAR_19 = VAR_20 = VAR_21 = VAR_23 = VAR_25 = VAR_27 = 0;
 while ((VAR_22 = FUNC_8(VAR_14, VAR_15, "HLPRXfghorstuvwx")) != -1)
  switch (VAR_22) {
  case 'H':
   VAR_19 = 1;
   VAR_20 = 0;
   break;
  case 'L':
   VAR_20 = 1;
   VAR_19 = 0;
   break;
  case 'P':
   VAR_19 = VAR_20 = 0;
   break;
  case 'R':
   VAR_21 = 1;
   break;
  case 'f':
   VAR_23 = 1;
   break;
  case 'h':







   VAR_25 = 1;
   break;






  case 'g': case 'o': case 'r': case 's':
  case 't': case 'u': case 'w': case 'X': case 'x':
   if (VAR_15[VAR_11 - 1][0] == '-' &&
       VAR_15[VAR_11 - 1][1] == VAR_22 &&
       VAR_15[VAR_11 - 1][2] == '\0')
    --VAR_11;
   goto done;
  case 'v':
   VAR_27++;
   break;
  case '?':
  default:
   FUNC_15();
  }
done: VAR_15 += VAR_11;
 VAR_14 -= VAR_11;

 if (VAR_14 < 2)
  FUNC_15();

 (void)FUNC_12(VAR_8, VAR_13);

 if (VAR_21) {
  if (VAR_25)
   FUNC_1(1, "the -R and -h options may not be "
       "specified together.");
  if (VAR_20) {
   VAR_24 = VAR_4;
  } else {
   VAR_24 = VAR_5;

   if (VAR_19) {
    VAR_24 |= VAR_3;
   }
  }
 } else if (VAR_25) {
  VAR_24 = VAR_5;
 } else {
  VAR_24 = VAR_4;
 }

 VAR_28 = *VAR_15;
 if ((VAR_18 = FUNC_11(VAR_28)) == ((void*)0))
  FUNC_1(1, "invalid file mode: %s", VAR_28);

 if ((VAR_16 = FUNC_4(++VAR_15, VAR_24, 0)) == ((void*)0))
  FUNC_0(1, "fts_open");
 for (VAR_26 = 0; (VAR_17 = FUNC_5(VAR_16)) != ((void*)0);) {
  int VAR_30;

  if ((VAR_24 & VAR_4) ||
      ((VAR_24 & VAR_3) &&
      VAR_17->fts_level == VAR_6))
   VAR_30 = 0;
  else
   VAR_30 = VAR_2;

  switch (VAR_17->fts_info) {
  case 132:
   if (!VAR_21)
    FUNC_6(VAR_16, VAR_17, VAR_7);
   break;
  case 131:
   FUNC_17("%s: %s", VAR_17->fts_path, FUNC_13(VAR_17->fts_errno));
   VAR_26 = 1;
   break;
  case 130:
   continue;
  case 129:
  case 128:
   FUNC_17("%s: %s", VAR_17->fts_path, FUNC_13(VAR_17->fts_errno));
   VAR_26 = 1;
   continue;
  default:
   break;
  }
  VAR_29 = FUNC_7(VAR_18, VAR_17->fts_statp->st_mode);





  if (FUNC_9(VAR_17, VAR_25) == 0 &&
      (VAR_29 & VAR_0) == (VAR_17->fts_statp->st_mode & VAR_0))
    continue;
  if (FUNC_3(VAR_1, VAR_17->fts_accpath, VAR_29, VAR_30) == -1
      && !VAR_23) {
   FUNC_16("%s", VAR_17->fts_path);
   VAR_26 = 1;
  } else if (VAR_27 || VAR_12) {
   (void)FUNC_10("%s", VAR_17->fts_path);

   if (VAR_27 > 1 || VAR_12) {
    char VAR_31[12], VAR_32[12];

    FUNC_14(VAR_17->fts_statp->st_mode, VAR_31);
    FUNC_14((VAR_17->fts_statp->st_mode &
        VAR_9) | VAR_29, VAR_32);
    (void)FUNC_10(": 0%o [%s] -> 0%o [%s]",
        VAR_17->fts_statp->st_mode, VAR_31,
        (VAR_17->fts_statp->st_mode & VAR_9) |
        VAR_29, VAR_32);
   }
   (void)FUNC_10("\n");
   VAR_12 = 0;
  }
 }
 if (VAR_10)
  FUNC_0(1, "fts_read");
 FUNC_2(VAR_26);
}
