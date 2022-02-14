
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fusefs_dot ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 const static char VAR_2[] = "fusefs";
 const static char VAR_3[] = "fusefs.";

 return (FUNC_1(VAR_0, VAR_3, sizeof(VAR_3) - 1) == 0 &&
     FUNC_0(VAR_2, VAR_1) == 0);
}
