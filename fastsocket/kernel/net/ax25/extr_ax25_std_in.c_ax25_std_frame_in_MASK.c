
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_9__ {int state; } ;
typedef TYPE_1__ ax25_cb ;






 int FUNC_0 (TYPE_1__*,struct sk_buff*,int*,int*,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*,int,int,int) ;
 int FUNC_4 (TYPE_1__*,struct sk_buff*,int,int,int,int,int) ;
 int FUNC_5 (TYPE_1__*,struct sk_buff*,int,int,int,int,int) ;

int FUNC_6(ax25_cb *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5, &VAR_6, &VAR_7);

 switch (VAR_0->state) {
 case 131:
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_7, VAR_2);
  break;
 case 130:
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_4, VAR_7, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_2);
  break;
 }

 FUNC_1(VAR_0);

 return VAR_3;
}
