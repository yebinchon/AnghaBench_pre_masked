
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_uid; char const* pw_name; } ;


 char* FUNC_0 () ;
 struct passwd* FUNC_1 (char const*) ;
 struct passwd* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static const char *
FUNC_4(void)
{
 const struct passwd *VAR_0;
 const char *VAR_1;
 uid_t VAR_2;







 VAR_2 = FUNC_3();
 if ((VAR_1 = FUNC_0()) != ((void*)0) && (VAR_0 = FUNC_1(VAR_1)) != ((void*)0) &&
     VAR_0->pw_uid == VAR_2)
  return (VAR_1);
 if ((VAR_0 = FUNC_2(VAR_2)) != ((void*)0))
  return (VAR_0->pw_name);
 return (((void*)0));
}
