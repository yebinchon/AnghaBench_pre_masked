
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_prl_entry {scalar_t__ addr; int flags; struct ip_tunnel_prl_entry* next; } ;
struct ip_tunnel_prl {scalar_t__ addr; int flags; } ;
struct ip_tunnel {int prl_count; struct ip_tunnel_prl_entry* prl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 struct ip_tunnel_prl_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ip_tunnel *VAR_7, struct ip_tunnel_prl *VAR_8, int VAR_9)
{
 struct ip_tunnel_prl_entry *VAR_10;
 int VAR_11 = 0;

 if (VAR_8->addr == FUNC_0(VAR_5))
  return -VAR_1;

 FUNC_2(&VAR_6);

 for (VAR_10 = VAR_7->prl; VAR_10; VAR_10 = VAR_10->next) {
  if (VAR_10->addr == VAR_8->addr) {
   if (VAR_9)
    goto update;
   VAR_11 = -VAR_0;
   goto out;
  }
 }

 if (VAR_9) {
  VAR_11 = -VAR_3;
  goto out;
 }

 VAR_10 = FUNC_1(sizeof(struct ip_tunnel_prl_entry), VAR_4);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_10->next = VAR_7->prl;
 VAR_7->prl = VAR_10;
 VAR_7->prl_count++;
update:
 VAR_10->addr = VAR_8->addr;
 VAR_10->flags = VAR_8->flags;
out:
 FUNC_3(&VAR_6);
 return VAR_11;
}
