
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lruhash_entry {int dummy; } ;
struct TYPE_2__ {int hash; } ;
struct ip_rate_key {TYPE_1__ entry; int addrlen; int addr; } ;
struct infra_cache {int client_ip_rates; } ;
struct comm_reply {int addrlen; int addr; } ;
typedef int key ;
typedef int hashvalue_type ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct ip_rate_key*,int ,int) ;
 struct lruhash_entry* FUNC_2 (int ,int ,struct ip_rate_key*,int) ;

__attribute__((used)) static struct lruhash_entry* FUNC_3(struct infra_cache* VAR_0,
 struct comm_reply* VAR_1, int VAR_2)
{
 struct ip_rate_key VAR_3;
 hashvalue_type VAR_4 = FUNC_0(&(VAR_1->addr),
  VAR_1->addrlen, 0);
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.addr = VAR_1->addr;
 VAR_3.addrlen = VAR_1->addrlen;
 VAR_3.entry.hash = VAR_4;
 return FUNC_2(VAR_0->client_ip_rates, VAR_4, &VAR_3, VAR_2);
}
