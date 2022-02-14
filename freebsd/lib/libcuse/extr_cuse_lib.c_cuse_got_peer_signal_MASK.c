
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev_entered {scalar_t__ got_signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cuse_dev_entered* FUNC_0 () ;

int
FUNC_1(void)
{
 struct cuse_dev_entered *VAR_2;

 VAR_2 = FUNC_0();
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 if (VAR_2->got_signal)
  return (0);

 return (VAR_1);
}
