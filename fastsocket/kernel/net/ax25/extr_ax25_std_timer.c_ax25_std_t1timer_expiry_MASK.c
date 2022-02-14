
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int state; int n2count; int n2; int modulus; TYPE_1__* ax25_dev; int window; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_9__ {int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(ax25_cb *VAR_10)
{
 switch (VAR_10->state) {
 case 131:
  if (VAR_10->n2count == VAR_10->n2) {
   if (VAR_10->modulus == VAR_3) {
    FUNC_1(VAR_10, VAR_9);
    return;
   } else {
    VAR_10->modulus = VAR_3;
    VAR_10->window = VAR_10->ax25_dev->values[VAR_8];
    VAR_10->n2count = 0;
    FUNC_2(VAR_10, VAR_6, VAR_4, VAR_0);
   }
  } else {
   VAR_10->n2count++;
   if (VAR_10->modulus == VAR_3)
    FUNC_2(VAR_10, VAR_6, VAR_4, VAR_0);
   else
    FUNC_2(VAR_10, VAR_7, VAR_4, VAR_0);
  }
  break;

 case 130:
  if (VAR_10->n2count == VAR_10->n2) {
   FUNC_2(VAR_10, VAR_1, VAR_4, VAR_0);
   FUNC_1(VAR_10, VAR_9);
   return;
  } else {
   VAR_10->n2count++;
   FUNC_2(VAR_10, VAR_1, VAR_4, VAR_0);
  }
  break;

 case 129:
  VAR_10->n2count = 1;
  FUNC_4(VAR_10);
  VAR_10->state = 128;
  break;

 case 128:
  if (VAR_10->n2count == VAR_10->n2) {
   FUNC_2(VAR_10, VAR_2, VAR_4, VAR_5);
   FUNC_1(VAR_10, VAR_9);
   return;
  } else {
   VAR_10->n2count++;
   FUNC_4(VAR_10);
  }
  break;
 }

 FUNC_0(VAR_10);
 FUNC_3(VAR_10);
}
