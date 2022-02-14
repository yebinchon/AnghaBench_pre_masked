
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode {int dummy; } ;
struct clkdom {int dummy; } ;
typedef int phandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct clknode* FUNC_0 (struct clkdom*,int) ;

__attribute__((used)) static int
FUNC_1(struct clkdom *VAR_2, uint32_t VAR_3,
    phandle_t *VAR_4, struct clknode **VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3 != 2)
  return (VAR_1);

 VAR_6 = VAR_4[1];
 if (VAR_4[0] == 1)
  VAR_6 += VAR_0;

 *VAR_5 = FUNC_0(VAR_2, VAR_6);

 return (0);
}
