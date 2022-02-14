
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* ax25_dev; } ;
typedef TYPE_3__ ax25_cb ;
struct TYPE_6__ {int slave; } ;
struct TYPE_7__ {int* values; TYPE_1__ dama; } ;





 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 ax25_cb *VAR_2 = (ax25_cb *)VAR_1;

 switch (VAR_2->ax25_dev->values[VAR_0]) {
 case 128:
 case 129:
  FUNC_1(VAR_2);
  break;
 }
}
