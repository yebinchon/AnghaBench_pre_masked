
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_prl_entry {scalar_t__ addr; struct ip_tunnel_prl_entry* next; } ;
struct ip_tunnel_prl {scalar_t__ addr; } ;
struct ip_tunnel {int prl_count; struct ip_tunnel_prl_entry* prl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ip_tunnel_prl_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ip_tunnel *VAR_3, struct ip_tunnel_prl *VAR_4)
{
 struct ip_tunnel_prl_entry *VAR_5, **VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_2);

 if (VAR_4 && VAR_4->addr != FUNC_0(VAR_1)) {
  for (VAR_6 = &VAR_3->prl; *VAR_6; VAR_6 = &(*VAR_6)->next) {
   if ((*VAR_6)->addr == VAR_4->addr) {
    VAR_5 = *VAR_6;
    *VAR_6 = VAR_5->next;
    FUNC_1(VAR_5);
    VAR_3->prl_count--;
    goto out;
   }
  }
  VAR_7 = -VAR_0;
 } else {
  while (VAR_3->prl) {
   VAR_5 = VAR_3->prl;
   VAR_3->prl = VAR_3->prl->next;
   FUNC_1(VAR_5);
   VAR_3->prl_count--;
  }
 }
out:
 FUNC_3(&VAR_2);
 return VAR_7;
}
