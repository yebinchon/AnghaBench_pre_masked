
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {scalar_t__ et_active; } ;


 int VAR_0 ;

int
FUNC_0(struct eventtimer *VAR_1)
{

 if (!VAR_1->et_active)
  return (VAR_0);

 VAR_1->et_active = 0;
 return (0);
}
