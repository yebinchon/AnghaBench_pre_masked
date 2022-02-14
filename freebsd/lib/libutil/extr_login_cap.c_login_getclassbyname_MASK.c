
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uid_t ;
struct passwd {char* pw_dir; int pw_gid; int pw_uid; } ;
struct TYPE_6__ {int * lc_class; int * lc_cap; int * lc_style; } ;
typedef TYPE_1__ login_cap_t ;
typedef int gid_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int **,char**,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_7 ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (char*,int) ;
 char* VAR_8 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int * FUNC_13 (char const*) ;
 int FUNC_14 (int ,char const*,char const*,...) ;

login_cap_t *
FUNC_15(char const *VAR_9, const struct passwd *VAR_10)
{
    login_cap_t *VAR_11;

    if ((VAR_11 = FUNC_6(sizeof(login_cap_t))) != ((void*)0)) {
 int VAR_12, VAR_13, VAR_14 = 0;
 uid_t VAR_15 = 0;
 gid_t VAR_16 = 0;
 const char *VAR_17 = ((void*)0);
 const char *VAR_18;
 char VAR_19[VAR_3];

 static char *VAR_20[] = { ((void*)0), ((void*)0), ((void*)0) };

 VAR_13 = (VAR_9 != ((void*)0) && FUNC_12(VAR_9, VAR_1) == 0);
 VAR_18 = (!VAR_13 || VAR_10 == ((void*)0)) ? ((void*)0) : VAR_10->pw_dir;






 if (VAR_18) {
     VAR_15 = FUNC_5();
     VAR_16 = FUNC_4();
     (void)FUNC_9(VAR_10->pw_gid);
     (void)FUNC_10(VAR_10->pw_uid);
 }

 if (VAR_18 && FUNC_11(VAR_19, VAR_3, "%s/%s", VAR_18,
       VAR_6) < VAR_3) {
     if (FUNC_0(VAR_19, VAR_10->pw_uid, VAR_10->pw_gid) != -1)
  VAR_20[VAR_14++] = VAR_19;
 }



 if (FUNC_0(VAR_8, 0, 0) != -1)
     VAR_20[VAR_14++] = VAR_8;
 VAR_20[VAR_14] = ((void*)0);

 FUNC_7(VAR_11, 0, sizeof(login_cap_t));
 VAR_11->lc_cap = VAR_11->lc_class = VAR_11->lc_style = ((void*)0);

 if (VAR_9 == ((void*)0) || *VAR_9 == '\0')
     VAR_9 = VAR_0;

 switch (FUNC_1(&VAR_11->lc_cap, VAR_20, VAR_9)) {
 case -1:
     if (VAR_13)
  break;
     if (VAR_14 == 0)
         VAR_12 = -1;
     else if ((VAR_12 = FUNC_8(VAR_20[0], VAR_5 | VAR_4)) >= 0)
         FUNC_2(VAR_12);





     if (VAR_12 >= 0 || FUNC_12(VAR_9, VAR_0) != 0)
  FUNC_14(VAR_2, "login_getclass: unknown class '%s'", VAR_9);

     VAR_9 = VAR_0;
     VAR_17 = "%s: no default/fallback class '%s'";
     if (FUNC_1(&VAR_11->lc_cap, VAR_20, VAR_9) != 0 && VAR_12 >= 0)
  break;

 case 0:
     if ((VAR_11->lc_class = FUNC_13(VAR_9)) != ((void*)0)) {
  if (VAR_18) {
      (void)FUNC_10(VAR_15);
      (void)FUNC_9(VAR_16);
  }
  ++VAR_7;
  return VAR_11;
     }
     VAR_17 = "%s: strdup: %m";
     break;
 case -2:
     VAR_17 = "%s: retrieving class information: %m";
     break;
 case -3:
     VAR_17 = "%s: 'tc=' reference loop '%s'";
     break;
 case 1:
     VAR_17 = "couldn't resolve 'tc=' reference in '%s'";
     break;
 default:
     VAR_17 = "%s: unexpected cgetent() error '%s': %m";
     break;
 }
 if (VAR_18) {
     (void)FUNC_10(VAR_15);
     (void)FUNC_9(VAR_16);
 }
 if (VAR_17 != ((void*)0))
     FUNC_14(VAR_2, VAR_17, "login_getclass", VAR_9);
 FUNC_3(VAR_11);
    }

    return ((void*)0);
}
