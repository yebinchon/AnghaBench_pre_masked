
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; char* pw_passwd; char* pw_class; char* pw_gecos; char* pw_dir; char* pw_shell; } ;
typedef int ssize_t ;


 struct passwd* FUNC_0 (size_t) ;
 int FUNC_1 (struct passwd*,struct passwd const*,int) ;
 char* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

struct passwd *
FUNC_4(const struct passwd *VAR_0)
{
 char *VAR_1;
 struct passwd *VAR_2;
 ssize_t VAR_3;

 VAR_3 = sizeof(*VAR_2);
 if (VAR_0->pw_name != ((void*)0))
  VAR_3 += FUNC_3(VAR_0->pw_name) + 1;
 if (VAR_0->pw_passwd != ((void*)0))
  VAR_3 += FUNC_3(VAR_0->pw_passwd) + 1;
 if (VAR_0->pw_class != ((void*)0))
  VAR_3 += FUNC_3(VAR_0->pw_class) + 1;
 if (VAR_0->pw_gecos != ((void*)0))
  VAR_3 += FUNC_3(VAR_0->pw_gecos) + 1;
 if (VAR_0->pw_dir != ((void*)0))
  VAR_3 += FUNC_3(VAR_0->pw_dir) + 1;
 if (VAR_0->pw_shell != ((void*)0))
  VAR_3 += FUNC_3(VAR_0->pw_shell) + 1;
 if ((VAR_2 = FUNC_0((size_t)VAR_3)) == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_2, VAR_0, sizeof(*VAR_2));
 VAR_1 = (char *)VAR_2 + sizeof(*VAR_2);
 if (VAR_0->pw_name != ((void*)0)) {
  VAR_2->pw_name = VAR_1;
  VAR_1 = FUNC_2(VAR_2->pw_name, VAR_0->pw_name) + 1;
 }
 if (VAR_0->pw_passwd != ((void*)0)) {
  VAR_2->pw_passwd = VAR_1;
  VAR_1 = FUNC_2(VAR_2->pw_passwd, VAR_0->pw_passwd) + 1;
 }
 if (VAR_0->pw_class != ((void*)0)) {
  VAR_2->pw_class = VAR_1;
  VAR_1 = FUNC_2(VAR_2->pw_class, VAR_0->pw_class) + 1;
 }
 if (VAR_0->pw_gecos != ((void*)0)) {
  VAR_2->pw_gecos = VAR_1;
  VAR_1 = FUNC_2(VAR_2->pw_gecos, VAR_0->pw_gecos) + 1;
 }
 if (VAR_0->pw_dir != ((void*)0)) {
  VAR_2->pw_dir = VAR_1;
  VAR_1 = FUNC_2(VAR_2->pw_dir, VAR_0->pw_dir) + 1;
 }
 if (VAR_0->pw_shell != ((void*)0)) {
  VAR_2->pw_shell = VAR_1;
  VAR_1 = FUNC_2(VAR_2->pw_shell, VAR_0->pw_shell) + 1;
 }
 return (VAR_2);
}
