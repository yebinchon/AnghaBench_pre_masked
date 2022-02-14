
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev_entered {int is_local; } ;


 struct cuse_dev_entered* FUNC_0 () ;

int
FUNC_1(void)
{
 struct cuse_dev_entered *VAR_0;

 VAR_0 = FUNC_0();
 if (VAR_0 == ((void*)0))
  return (0);

 return (VAR_0->is_local);
}
