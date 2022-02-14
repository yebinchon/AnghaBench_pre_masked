
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int st_flags; } ;
struct TYPE_5__ {int fts_info; scalar_t__ fts_errno; char* fts_path; int fts_accpath; TYPE_4__* fts_statp; int fts_number; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;


 scalar_t__ VAR_0 ;





 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,int ,TYPE_4__*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,char*,char*,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char**,int,int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_18 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_19 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*,int ) ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void
FUNC_15(char **VAR_21)
{
 FTS *VAR_22;
 FTSENT *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;





 VAR_24 = !VAR_18 || (!VAR_14 && !VAR_15 && VAR_17);







 VAR_25 = VAR_2;
 if (!VAR_24)
  VAR_25 |= VAR_1;
 if (VAR_11)
  VAR_25 |= VAR_4;
 if (VAR_20)
  VAR_25 |= VAR_5;
 if (!(VAR_22 = FUNC_4(VAR_21, VAR_25, ((void*)0)))) {
  if (VAR_14 && VAR_12 == VAR_0)
   return;
  FUNC_1(1, "fts_open");
 }
 while ((VAR_23 = FUNC_5(VAR_22)) != ((void*)0)) {
  switch (VAR_23->fts_info) {
  case 134:
   if (!VAR_14 || VAR_23->fts_errno != VAR_0) {
    FUNC_14("%s: %s",
        VAR_23->fts_path, FUNC_10(VAR_23->fts_errno));
    VAR_13 = 1;
   }
   continue;
  case 132:
   FUNC_2(1, "%s: %s", VAR_23->fts_path, FUNC_10(VAR_23->fts_errno));
  case 130:




   if (!VAR_24)
    break;
   if (!VAR_14 || VAR_23->fts_errno != VAR_0) {
    FUNC_14("%s: %s",
        VAR_23->fts_path, FUNC_10(VAR_23->fts_errno));
    VAR_13 = 1;
   }
   continue;
  case 135:

   if (!VAR_14 && !FUNC_0(VAR_23->fts_path, VAR_23->fts_accpath,
       VAR_23->fts_statp)) {
    (void)FUNC_6(VAR_22, VAR_23, VAR_3);
    VAR_23->fts_number = 1;
   }
   else if (!VAR_18 &&
     (VAR_23->fts_statp->st_flags & (VAR_9|VAR_10)) &&
     !(VAR_23->fts_statp->st_flags & (VAR_6|VAR_7)) &&
     FUNC_7(VAR_23->fts_accpath,
      VAR_23->fts_statp->st_flags &= ~(VAR_9|VAR_10)) < 0)
    goto err;
   continue;
  case 133:

   if (VAR_23->fts_number == 1)
    continue;
   break;
  default:
   if (!VAR_14 &&
       !FUNC_0(VAR_23->fts_path, VAR_23->fts_accpath, VAR_23->fts_statp))
    continue;
  }

  VAR_26 = 0;
  if (!VAR_18 &&
      (VAR_23->fts_statp->st_flags & (VAR_9|VAR_10)) &&
      !(VAR_23->fts_statp->st_flags & (VAR_6|VAR_7)))
   VAR_26 = FUNC_7(VAR_23->fts_accpath,
           VAR_23->fts_statp->st_flags &= ~(VAR_9|VAR_10));
  if (VAR_26 == 0) {





   switch (VAR_23->fts_info) {
   case 133:
   case 134:
    VAR_26 = FUNC_9(VAR_23->fts_accpath);
    if (VAR_26 == 0 || (VAR_14 && VAR_12 == VAR_0)) {
     if (VAR_26 == 0 && VAR_19)
      (void)FUNC_8("%s\n",
          VAR_23->fts_path);
     if (VAR_26 == 0 && VAR_16) {
      VAR_16 = 0;
      (void)FUNC_8("%s\n",
          VAR_23->fts_path);
     }
     continue;
    }
    break;

   case 128:
    VAR_26 = FUNC_11(VAR_23->fts_accpath);
    if (VAR_26 == 0 && (VAR_14 && VAR_12 == VAR_0)) {
     if (VAR_19)
      (void)FUNC_8("%s\n",
          VAR_23->fts_path);
     if (VAR_16) {
      VAR_16 = 0;
      (void)FUNC_8("%s\n",
          VAR_23->fts_path);
     }
     continue;
    }
    break;

   case 130:




    if (VAR_14)
     continue;


   case 131:
   case 129:
   default:
    VAR_26 = FUNC_12(VAR_23->fts_accpath);
    if (VAR_26 == 0 || (VAR_14 && VAR_12 == VAR_0)) {
     if (VAR_26 == 0 && VAR_19)
      (void)FUNC_8("%s\n",
          VAR_23->fts_path);
     if (VAR_26 == 0 && VAR_16) {
      VAR_16 = 0;
      (void)FUNC_8("%s\n",
          VAR_23->fts_path);
     }
     continue;
    }
   }
  }
err:
  FUNC_13("%s", VAR_23->fts_path);
  VAR_13 = 1;
 }
 if (!VAR_14 && VAR_12)
  FUNC_1(1, "fts_read");
 FUNC_3(VAR_22);
}
