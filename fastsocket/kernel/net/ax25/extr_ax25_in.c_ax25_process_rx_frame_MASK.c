
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_9__ {scalar_t__ state; TYPE_2__* ax25_dev; } ;
typedef TYPE_3__ ax25_cb ;
struct TYPE_7__ {int slave; } ;
struct TYPE_8__ {int* values; TYPE_1__ dama; } ;





 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct sk_buff*,int) ;
 int FUNC_1 (TYPE_3__*,struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(ax25_cb *VAR_2, struct sk_buff *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if (VAR_2->state == VAR_0)
  return 0;

 switch (VAR_2->ax25_dev->values[VAR_1]) {
 case 128:
 case 129:
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
  break;
 }

 return VAR_6;
}
