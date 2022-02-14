
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev_entered {int is_local; } ;


 struct cuse_dev_entered* FUNC_0 () ;

void
FUNC_1(int VAR_0)
{
 struct cuse_dev_entered *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 == ((void*)0))
  return;

 VAR_1->is_local = VAR_0;
}
