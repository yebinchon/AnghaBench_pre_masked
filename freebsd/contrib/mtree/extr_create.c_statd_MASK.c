
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uid_t ;
typedef scalar_t__ u_short ;
typedef int u_long ;
typedef int u ;
typedef int mode_t ;
typedef int m ;
typedef int gid_t ;
typedef int g ;
typedef int f ;
struct TYPE_7__ {TYPE_1__* fts_statp; struct TYPE_7__* fts_link; } ;
struct TYPE_6__ {int st_mode; int st_gid; int st_uid; int st_flags; } ;
typedef TYPE_2__ FTSENT ;
typedef int FTS ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 char* FUNC_3 (int,char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 char* FUNC_7 (int,int) ;
 int VAR_16 ;
 int FUNC_8 (scalar_t__*,int ,int) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 char* FUNC_11 (int,int) ;

__attribute__((used)) static int
FUNC_12(FILE *VAR_17, FTS *VAR_18, FTSENT *VAR_19, uid_t *VAR_20, gid_t *VAR_21, mode_t *VAR_22,
    u_long *VAR_23)
{
 FTSENT *VAR_24;
 gid_t VAR_25;
 uid_t VAR_26;
 mode_t VAR_27;
 u_long VAR_28 = 0;
 const char *VAR_29 = ((void*)0);
 gid_t VAR_30;
 uid_t VAR_31;
 mode_t VAR_32;
 u_long VAR_33;
 u_short VAR_34, VAR_35, VAR_36, VAR_37;
 u_short VAR_38[VAR_10], VAR_39[VAR_12],
  VAR_40[VAR_11], VAR_41[VAR_9];
 static int VAR_42 = 1;

 VAR_30 = *VAR_21;
 VAR_31 = *VAR_20;
 VAR_32 = *VAR_22;
 VAR_33 = *VAR_23;
 if ((VAR_24 = FUNC_6(VAR_18, 0)) == ((void*)0)) {
  if (VAR_14)
   FUNC_9("%s: %s", FUNC_1(VAR_19), FUNC_10(VAR_14));
  return (1);
 }

 FUNC_8(VAR_38, 0, sizeof(VAR_38));
 FUNC_8(VAR_39, 0, sizeof(VAR_39));
 FUNC_8(VAR_40, 0, sizeof(VAR_40));
 FUNC_8(VAR_41, 0, sizeof(VAR_41));

 VAR_35 = VAR_34 = VAR_36 = VAR_37 = 0;
 for (; VAR_24; VAR_24 = VAR_24->fts_link) {
  if (VAR_15 == VAR_4 || !VAR_13 ||
      (VAR_13 && FUNC_2(VAR_24->fts_statp->st_mode))) {
   VAR_27 = VAR_24->fts_statp->st_mode & VAR_8;
   if (VAR_27 < VAR_11 && ++VAR_40[VAR_27] > VAR_36) {
    VAR_32 = VAR_27;
    VAR_36 = VAR_40[VAR_27];
   }
   VAR_25 = VAR_24->fts_statp->st_gid;
   if (VAR_25 < VAR_10 && ++VAR_38[VAR_25] > VAR_34) {
    VAR_30 = VAR_25;
    VAR_34 = VAR_38[VAR_25];
   }
   VAR_26 = VAR_24->fts_statp->st_uid;
   if (VAR_26 < VAR_12 && ++VAR_39[VAR_26] > VAR_35) {
    VAR_31 = VAR_26;
    VAR_35 = VAR_39[VAR_26];
   }
  }
 }





 if (((VAR_16 & (VAR_7 | VAR_6)) && (*VAR_20 != VAR_31)) ||
     ((VAR_16 & (VAR_2 | VAR_1)) && (*VAR_21 != VAR_30)) ||
     ((VAR_16 & VAR_3) && (*VAR_22 != VAR_32)) ||
     ((VAR_16 & VAR_0) && (*VAR_23 != VAR_33)) ||
     VAR_42) {
  VAR_42 = 0;
  if (VAR_15 != VAR_4 && VAR_13)
   FUNC_4(VAR_17, "/set type=dir");
  else
   FUNC_4(VAR_17, "/set type=file");
  if (VAR_16 & (VAR_6 | VAR_7)) {
   if (VAR_16 & VAR_7 &&
       (VAR_29 = FUNC_11(VAR_31, 1)) != ((void*)0))
    FUNC_4(VAR_17, " uname=%s", VAR_29);
   if (VAR_16 & VAR_6 || (VAR_16 & VAR_7 && VAR_29 == ((void*)0)))
    FUNC_4(VAR_17, " uid=%lu", (u_long)VAR_31);
  }
  if (VAR_16 & (VAR_1 | VAR_2)) {
   if (VAR_16 & VAR_2 &&
       (VAR_29 = FUNC_7(VAR_30, 1)) != ((void*)0))
    FUNC_4(VAR_17, " gname=%s", VAR_29);
   if (VAR_16 & VAR_1 || (VAR_16 & VAR_2 && VAR_29 == ((void*)0)))
    FUNC_4(VAR_17, " gid=%lu", (u_long)VAR_30);
  }
  if (VAR_16 & VAR_3)
   FUNC_4(VAR_17, " mode=%#lo", (u_long)VAR_32);
  if (VAR_16 & VAR_5)
   FUNC_4(VAR_17, " nlink=1");
  if (VAR_16 & VAR_0) {
   char *VAR_43 = FUNC_3(VAR_33, "none");
   FUNC_4(VAR_17, " flags=%s", VAR_43);
   FUNC_5(VAR_43);
  }
  FUNC_4(VAR_17, "\n");
  *VAR_20 = VAR_31;
  *VAR_21 = VAR_30;
  *VAR_22 = VAR_32;
  *VAR_23 = VAR_33;
 }
 return (0);
}
