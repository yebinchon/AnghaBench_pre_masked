
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_class; char* pw_name; int pw_gid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,size_t*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 struct group* FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,scalar_t__*,int*) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,char*,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,char*,char*,char*,...) ;

__attribute__((used)) static int
FUNC_14(struct passwd *VAR_7)
{
 char *VAR_8,*VAR_9;
 int VAR_10;
 size_t VAR_11;
 FILE *VAR_12;

 if ((VAR_12 = FUNC_3(VAR_4, "r")) == ((void*)0)) {
  if (VAR_5 == VAR_0) {




   return (1);
  }






  FUNC_13(VAR_1, "cannot open allowed users file %s (%s)",
      VAR_4, FUNC_12(VAR_5));
  return (0);
 } else {







  int VAR_13 = 0, VAR_14 = VAR_3 + 1;
  gid_t VAR_15[VAR_3 + 1];

  VAR_9 = ((void*)0);
  VAR_10 = 0;

  while ((VAR_8 = FUNC_2(VAR_12, &VAR_11))) {

   if (VAR_8[VAR_11 - 1] == '\n')
    VAR_8[VAR_11 - 1] = '\0';
   else {
    if ((VAR_9 = (char *)FUNC_8(VAR_11 + 1)) == ((void*)0))
     FUNC_0(1, ((void*)0));
    FUNC_9(VAR_9, VAR_8, VAR_11);
    VAR_9[VAR_11] = '\0';
    VAR_8 = VAR_9;
   }

   if (VAR_8[0] == '@') {

    if (FUNC_11(VAR_7->pw_class, VAR_8 + 1) == 0)
     VAR_10++;
   } else if (VAR_8[0] == '%') {

    int VAR_16;
    struct group *VAR_17;

    if ((VAR_17 = FUNC_6(VAR_8 + 1)) == ((void*)0)) {
     FUNC_13(VAR_1,
         "invalid group '%s' in %s (%s)",
         VAR_8 + 1, VAR_4,
          FUNC_12(VAR_5));
     return (0);
    }

    if (!VAR_13) {
     (void) FUNC_7(VAR_7->pw_name,
         VAR_7->pw_gid, VAR_15, &VAR_14);
     VAR_13++;
    }

    for ( VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
     if (VAR_17->gr_gid == VAR_15[VAR_16]) {
      VAR_10++;
      break;
     }
    }
   } else {

    VAR_10 = FUNC_11(VAR_7->pw_name, VAR_8) == 0 ||
        FUNC_11("*", VAR_8) == 0;
   }

   if (VAR_9 != ((void*)0)) {
    FUNC_5(VAR_9);
    VAR_9 = ((void*)0);
   }

   if (VAR_10)
    return (1);
  }
  FUNC_13(VAR_2, "denied access to %s: not listed in %s",
      VAR_7->pw_name, VAR_4);


  FUNC_10(VAR_8, "%s", "\n\nSorry, you are not allowed to use this facility!\n");
  FUNC_4(VAR_8, VAR_6);
 }
 FUNC_1(VAR_6);
 return (0);
}
