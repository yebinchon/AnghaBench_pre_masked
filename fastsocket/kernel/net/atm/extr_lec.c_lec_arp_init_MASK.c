
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lec_priv {int lec_arp_work; int lec_arp_lock; int mcast_fwds; int lec_no_forward; int lec_arp_empty_ones; int * lec_arp_tables; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct lec_priv *VAR_3)
{
 unsigned short VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_1(&VAR_3->lec_arp_tables[VAR_4]);
 }
 FUNC_1(&VAR_3->lec_arp_empty_ones);
 FUNC_1(&VAR_3->lec_no_forward);
 FUNC_1(&VAR_3->mcast_fwds);
 FUNC_3(&VAR_3->lec_arp_lock);
 FUNC_0(&VAR_3->lec_arp_work, VAR_2);
 FUNC_2(&VAR_3->lec_arp_work, VAR_0);
}
