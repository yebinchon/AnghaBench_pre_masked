
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct if_clone *VAR_0, const char *VAR_1)
{

 if (FUNC_0(VAR_1, "t4nex", 5) != 0 &&
     FUNC_0(VAR_1, "t5nex", 5) != 0 &&
     FUNC_0(VAR_1, "t6nex", 5) != 0)
  return (0);
 if (VAR_1[5] < '0' || VAR_1[5] > '9')
  return (0);
 return (1);
}
