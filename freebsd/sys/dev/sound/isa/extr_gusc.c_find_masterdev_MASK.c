
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int * device_t ;
typedef int devclass_t ;
struct TYPE_3__ {int * dev; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static device_t
FUNC_6(sc_p VAR_1)
{
 int VAR_2, VAR_3;
 devclass_t VAR_4;
 device_t VAR_5;

 VAR_4 = FUNC_2(VAR_1->dev);
 VAR_3 = FUNC_1(VAR_4);
 VAR_5 = ((void*)0);
 for (VAR_2 = 0 ; VAR_2 < VAR_3 ; VAR_2++) {
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  if (FUNC_5(VAR_5) == FUNC_5(VAR_1->dev)
      && FUNC_3(VAR_5) == VAR_0
      && FUNC_4(VAR_5) == FUNC_4(VAR_1->dev))
   break;
 }
 if (VAR_2 == VAR_3)
  return (((void*)0));

 return (VAR_5);
}
