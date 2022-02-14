
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {scalar_t__ data; scalar_t__ key; } ;
struct infra_key {int addrlen; int addr; } ;
struct infra_data {scalar_t__ ttl; int rtt; scalar_t__ timeout_other; scalar_t__ timeout_AAAA; scalar_t__ timeout_A; scalar_t__ probedelay; } ;
struct del_info {scalar_t__ expired; int num_keys; int addrlen; int addr; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct lruhash_entry* VAR_0, void* VAR_1)
{

 struct del_info* VAR_2 = (struct del_info*)VAR_1;
 struct infra_key* VAR_3 = (struct infra_key*)VAR_0->key;
 if(FUNC_1(&VAR_2->addr, VAR_2->addrlen, &VAR_3->addr, VAR_3->addrlen) == 0) {
  struct infra_data* VAR_4 = (struct infra_data*)VAR_0->data;
  VAR_4->probedelay = 0;
  VAR_4->timeout_A = 0;
  VAR_4->timeout_AAAA = 0;
  VAR_4->timeout_other = 0;
  FUNC_0(&VAR_4->rtt);
  if(VAR_4->ttl > VAR_2->expired) {
   VAR_4->ttl = VAR_2->expired;
   VAR_2->num_keys++;
  }
 }
}
