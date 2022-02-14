
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int * pw_shell; int * pw_dir; int * pw_gecos; int * pw_class; int * pw_passwd; int * pw_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct passwd*,struct passwd const*,int) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct passwd *VAR_0, struct passwd const *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 FUNC_1(VAR_0, VAR_1, sizeof(struct passwd));
 if (VAR_1->pw_name != ((void*)0))
  VAR_0->pw_name = FUNC_2(VAR_1->pw_name);
 if (VAR_1->pw_passwd != ((void*)0))
  VAR_0->pw_passwd = FUNC_2(VAR_1->pw_passwd);
 if (VAR_1->pw_class != ((void*)0))
  VAR_0->pw_class = FUNC_2(VAR_1->pw_class);
 if (VAR_1->pw_gecos != ((void*)0))
  VAR_0->pw_gecos = FUNC_2(VAR_1->pw_gecos);
 if (VAR_1->pw_dir != ((void*)0))
  VAR_0->pw_dir = FUNC_2(VAR_1->pw_dir);
 if (VAR_1->pw_shell != ((void*)0))
  VAR_0->pw_shell = FUNC_2(VAR_0->pw_shell);
}
