
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moduledir {char const* d_path; } ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(struct moduledir *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(FUNC_3(VAR_0->d_path) + FUNC_3(VAR_1) + 2);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_2, VAR_0->d_path);
 FUNC_1(VAR_2, "/");
 FUNC_1(VAR_2, VAR_1);
 return (VAR_2);
}
