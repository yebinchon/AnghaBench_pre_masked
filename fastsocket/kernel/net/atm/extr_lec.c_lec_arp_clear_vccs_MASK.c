
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lec_vcc_priv {scalar_t__ xoff; int old_pop; } ;
struct lec_arp_table {struct atm_vcc* recv_vcc; int old_recv_push; struct atm_vcc* vcc; int old_push; } ;
struct atm_vcc {int push; int * user_back; int pop; scalar_t__ proto_data; } ;


 int VAR_0 ;
 struct lec_vcc_priv* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (struct lec_vcc_priv*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct atm_vcc*,int ) ;

__attribute__((used)) static void FUNC_4(struct lec_arp_table *VAR_1)
{
 if (VAR_1->vcc) {
  struct atm_vcc *VAR_2 = VAR_1->vcc;
  struct lec_vcc_priv *VAR_3 = FUNC_0(VAR_2);
  struct net_device *VAR_4 = (struct net_device *)VAR_2->proto_data;

  VAR_2->pop = VAR_3->old_pop;
  if (VAR_3->xoff)
   FUNC_2(VAR_4);
  FUNC_1(VAR_3);
  VAR_2->user_back = ((void*)0);
  VAR_2->push = VAR_1->old_push;
  FUNC_3(VAR_2, -VAR_0);
  VAR_1->vcc = ((void*)0);
 }
 if (VAR_1->recv_vcc) {
  VAR_1->recv_vcc->push = VAR_1->old_recv_push;
  FUNC_3(VAR_1->recv_vcc, -VAR_0);
  VAR_1->recv_vcc = ((void*)0);
 }
}
