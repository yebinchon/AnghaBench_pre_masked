
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int instance; int (* data_indication ) (int ,struct lsap_cb*,struct sk_buff*) ;} ;
struct lsap_cb {TYPE_1__ notify; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,struct lsap_cb*,struct sk_buff*) ;

void FUNC_3(struct lsap_cb *VAR_1, struct sk_buff *VAR_2)
{

 FUNC_1(VAR_2, VAR_0);

 if (VAR_1->notify.data_indication) {

  FUNC_0(VAR_2);
  VAR_1->notify.data_indication(VAR_1->notify.instance, VAR_1, VAR_2);
 }
}
