
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_gpio {int active_val; int addr; } ;


 int FUNC_0 (struct pmac_gpio*) ;

__attribute__((used)) static int FUNC_1(struct pmac_gpio *VAR_0)
{
 int VAR_1;

 if (! VAR_0->addr)
  return 0;

 VAR_1 = FUNC_0(VAR_0);

 return (VAR_1 & 0x1) == (VAR_0->active_val & 0x1);
}
