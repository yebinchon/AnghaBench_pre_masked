
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {int (* et_stop ) (struct eventtimer*) ;int et_active; } ;


 int VAR_0 ;
 int FUNC_0 (struct eventtimer*) ;

int
FUNC_1(struct eventtimer *VAR_1)
{

 if (!VAR_1->et_active)
  return (VAR_0);
 if (VAR_1->et_stop)
  return (VAR_1->et_stop(VAR_1));
 return (0);
}
