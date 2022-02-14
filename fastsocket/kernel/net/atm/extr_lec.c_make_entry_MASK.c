
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lec_priv {int dummy; } ;
struct lec_arp_table {int usage; int tx_wait; struct lec_priv* priv; int last_used; int timer; int next; int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 struct lec_arp_table* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,unsigned char const*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct lec_arp_table *FUNC_7(struct lec_priv *VAR_4,
     const unsigned char *VAR_5)
{
 struct lec_arp_table *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct lec_arp_table), VAR_1);
 if (!VAR_6) {
  FUNC_4("LEC: Arp entry kmalloc failed\n");
  return ((void*)0);
 }
 FUNC_3(VAR_6->mac_addr, VAR_5, VAR_0);
 FUNC_0(&VAR_6->next);
 FUNC_5(&VAR_6->timer, VAR_3,
   (unsigned long)VAR_6);
 VAR_6->last_used = VAR_2;
 VAR_6->priv = VAR_4;
 FUNC_6(&VAR_6->tx_wait);
 FUNC_1(&VAR_6->usage, 1);
 return VAR_6;
}
