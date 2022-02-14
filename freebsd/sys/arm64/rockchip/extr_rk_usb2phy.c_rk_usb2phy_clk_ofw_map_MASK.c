
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct clknode* FUNC_0 (struct clkdom*,int ) ;

__attribute__((used)) static int
FUNC_1(struct clkdom *VAR_2, uint32_t VAR_3,
    phandle_t *VAR_4, struct clknode **VAR_5)
{

 if (VAR_3 != 0)
  return (VAR_1);

 *VAR_5 = FUNC_0(VAR_2, 0);

 if (*VAR_5 == ((void*)0))
  return (VAR_0);
 return (0);
}
