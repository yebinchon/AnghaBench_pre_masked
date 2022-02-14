
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lec_priv {int lec_arp_lock; } ;
struct lec_arp_table {int next; TYPE_1__* recv_vcc; scalar_t__ vcc; int timer; scalar_t__ priv; } ;
struct TYPE_2__ {int vci; int vpi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lec_arp_table*) ;
 int FUNC_3 (struct lec_arp_table*) ;
 int FUNC_4 (char*,struct lec_arp_table*,struct lec_priv*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_0)
{
 unsigned long VAR_1;
 struct lec_arp_table *VAR_2 = (struct lec_arp_table *)VAR_0;
 struct lec_priv *VAR_3 = (struct lec_priv *)VAR_2->priv;

 FUNC_0(&VAR_2->timer);

 FUNC_4("LEC_ARP %p %p: lec_arp_expire_vcc vpi:%d vci:%d\n",
  VAR_2, VAR_3,
  VAR_2->vcc ? VAR_2->recv_vcc->vpi : 0,
  VAR_2->vcc ? VAR_2->recv_vcc->vci : 0);

 FUNC_5(&VAR_3->lec_arp_lock, VAR_1);
 FUNC_1(&VAR_2->next);
 FUNC_6(&VAR_3->lec_arp_lock, VAR_1);

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
}
