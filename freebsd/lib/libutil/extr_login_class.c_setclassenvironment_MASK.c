
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; char* pw_name; } ;
struct login_vars {char const* var; int overwrite; char* def; int * tag; } ;
typedef int login_cap_t ;


 struct login_vars* VAR_0 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (int *,char*,char*) ;
 char* FUNC_2 (int *,int *,int *,int *) ;
 char* FUNC_3 (int *,int *,int *) ;
 struct login_vars* VAR_1 ;
 int FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,struct passwd const*,int,char,int) ;

void
FUNC_8(login_cap_t *VAR_2, const struct passwd * VAR_3, int VAR_4)
{
    struct login_vars *VAR_5 = VAR_4 ? VAR_1 : VAR_0;
    int VAR_6 = VAR_3 ? FUNC_6(VAR_3->pw_dir) : 0;
    int VAR_7 = VAR_3 ? FUNC_6(VAR_3->pw_name) : 0;
    char VAR_8 = 0;

    if (VAR_6 && VAR_3->pw_dir[VAR_6-1] != '/')
 ++VAR_8;

    while (VAR_5->tag != ((void*)0)) {
 const char * VAR_9 = VAR_4 ? FUNC_3(VAR_2, VAR_5->tag, ((void*)0))
     : FUNC_2(VAR_2, VAR_5->tag, ((void*)0), ((void*)0));

 char * VAR_10 = FUNC_7(VAR_9, VAR_3, VAR_6, VAR_8, VAR_7);

 if (VAR_10 != ((void*)0)) {
     FUNC_4(VAR_5->var, VAR_10, VAR_5->overwrite);
     FUNC_0(VAR_10);
 } else if (VAR_5->def != ((void*)0)) {
     FUNC_4(VAR_5->var, VAR_5->def, 0);
 }
 ++VAR_5;
    }





    if (!VAR_4) {
 const char **VAR_11 = FUNC_1(VAR_2, "setenv", ",");

 if (VAR_11 != ((void*)0)) {
     while (*VAR_11 != ((void*)0)) {
  char *VAR_12 = FUNC_5(*VAR_11, '=');

  if (VAR_12 != ((void*)0)) {
      char *VAR_13;

      *VAR_12++ = '\0';
      if ((VAR_13 = FUNC_7(VAR_12, VAR_3, VAR_6, VAR_8, VAR_7)) != ((void*)0)) {
   FUNC_4(*VAR_11, VAR_13, 1);
   FUNC_0(VAR_13);
      }
  }
  ++VAR_11;
     }
 }
    }
}
