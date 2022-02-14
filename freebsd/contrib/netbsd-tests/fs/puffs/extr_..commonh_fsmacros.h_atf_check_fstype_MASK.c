
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 char* FUNC_0 (int const*,char*) ;
 int FUNC_1 (int const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static __inline bool
FUNC_3(const atf_tc_t *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 if (!FUNC_1(VAR_0, "fstype"))
  return 1;

 VAR_2 = FUNC_0(VAR_0, "fstype");
 if (FUNC_2(VAR_2, VAR_1) == 0)
  return 1;
 return 0;
}
