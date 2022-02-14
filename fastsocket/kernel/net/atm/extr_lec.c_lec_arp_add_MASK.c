
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lec_priv {struct hlist_head* lec_arp_tables; } ;
struct lec_arp_table {int* mac_addr; int next; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 int FUNC_2 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static inline void
FUNC_3(struct lec_priv *VAR_1, struct lec_arp_table *VAR_2)
{
 struct hlist_head *VAR_3;

 VAR_3 = &VAR_1->lec_arp_tables[FUNC_0(VAR_2->mac_addr[VAR_0 - 1])];
 FUNC_1(&VAR_2->next, VAR_3);

 FUNC_2("LEC_ARP: Added entry:%2.2x %2.2x %2.2x %2.2x %2.2x %2.2x\n",
  0xff & VAR_2->mac_addr[0], 0xff & VAR_2->mac_addr[1],
  0xff & VAR_2->mac_addr[2], 0xff & VAR_2->mac_addr[3],
  0xff & VAR_2->mac_addr[4], 0xff & VAR_2->mac_addr[5]);
}
