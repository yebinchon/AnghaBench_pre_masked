
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_uid; scalar_t__ pw_gid; scalar_t__ pw_change; scalar_t__ pw_expire; scalar_t__ pw_fields; int * pw_shell; int * pw_dir; int * pw_gecos; int * pw_class; int * pw_passwd; int * pw_name; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(const struct passwd *VAR_0, const struct passwd *VAR_1)
{

 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
  return (1);
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if (FUNC_0(VAR_0->pw_name, VAR_1->pw_name) != 0)
  return (0);

 if (VAR_0->pw_passwd != ((void*)0) || VAR_1->pw_passwd != ((void*)0)) {
  if (VAR_0->pw_passwd == ((void*)0) || VAR_1->pw_passwd == ((void*)0))
   return (0);
  if (FUNC_0(VAR_0->pw_passwd, VAR_1->pw_passwd) != 0)
   return (0);
 }

 if (VAR_0->pw_uid != VAR_1->pw_uid)
  return (0);

 if (VAR_0->pw_gid != VAR_1->pw_gid)
  return (0);

 if (VAR_0->pw_change != VAR_1->pw_change)
  return (0);

 if (VAR_0->pw_class != ((void*)0) || VAR_1->pw_class != ((void*)0)) {
  if (VAR_0->pw_class == ((void*)0) || VAR_1->pw_class == ((void*)0))
   return (0);
  if (FUNC_0(VAR_0->pw_class, VAR_1->pw_class) != 0)
   return (0);
 }

 if (VAR_0->pw_gecos != ((void*)0) || VAR_1->pw_gecos != ((void*)0)) {
  if (VAR_0->pw_gecos == ((void*)0) || VAR_1->pw_gecos == ((void*)0))
   return (0);
  if (FUNC_0(VAR_0->pw_gecos, VAR_1->pw_gecos) != 0)
   return (0);
 }

 if (VAR_0->pw_dir != ((void*)0) || VAR_1->pw_dir != ((void*)0)) {
  if (VAR_0->pw_dir == ((void*)0) || VAR_1->pw_dir == ((void*)0))
   return (0);
  if (FUNC_0(VAR_0->pw_dir, VAR_1->pw_dir) != 0)
   return (0);
 }

 if (VAR_0->pw_shell != ((void*)0) || VAR_1->pw_shell != ((void*)0)) {
  if (VAR_0->pw_shell == ((void*)0) || VAR_1->pw_shell == ((void*)0))
   return (0);
  if (FUNC_0(VAR_0->pw_shell, VAR_1->pw_shell) != 0)
   return (0);
 }

 if (VAR_0->pw_expire != VAR_1->pw_expire)
  return (0);

 if (VAR_0->pw_fields != VAR_1->pw_fields)
  return (0);

 return (1);
}
