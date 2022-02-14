
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct delegpt_ns {int done_pside6; int done_pside4; int got6; int got4; int resolved; int lame; int name; struct delegpt_ns* next; } ;
struct delegpt_addr {int tls_auth_name; int lame; int bogus; int addrlen; int addr; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* target_list; struct delegpt_ns* nslist; int ssl_upstream; int has_parent_side_NS; int bogus; int name; } ;


 int FUNC_0 (struct delegpt*,struct regional*,int *,int ,int ,int ,int ) ;
 int FUNC_1 (struct delegpt*,struct regional*,int ,int ) ;
 struct delegpt* FUNC_2 (struct regional*) ;
 int FUNC_3 (struct delegpt*,struct regional*,int ) ;

struct delegpt* FUNC_4(struct delegpt* VAR_0, struct regional* VAR_1)
{
 struct delegpt* VAR_2 = FUNC_2(VAR_1);
 struct delegpt_ns* VAR_3;
 struct delegpt_addr* VAR_4;
 if(!VAR_2)
  return ((void*)0);
 if(!FUNC_3(VAR_2, VAR_1, VAR_0->name))
  return ((void*)0);
 VAR_2->bogus = VAR_0->bogus;
 VAR_2->has_parent_side_NS = VAR_0->has_parent_side_NS;
 VAR_2->ssl_upstream = VAR_0->ssl_upstream;
 for(VAR_3 = VAR_0->nslist; VAR_3; VAR_3 = VAR_3->next) {
  if(!FUNC_1(VAR_2, VAR_1, VAR_3->name, VAR_3->lame))
   return ((void*)0);
  VAR_2->nslist->resolved = VAR_3->resolved;
  VAR_2->nslist->got4 = VAR_3->got4;
  VAR_2->nslist->got6 = VAR_3->got6;
  VAR_2->nslist->done_pside4 = VAR_3->done_pside4;
  VAR_2->nslist->done_pside6 = VAR_3->done_pside6;
 }
 for(VAR_4 = VAR_0->target_list; VAR_4; VAR_4 = VAR_4->next_target) {
  if(!FUNC_0(VAR_2, VAR_1, &VAR_4->addr, VAR_4->addrlen,
   VAR_4->bogus, VAR_4->lame, VAR_4->tls_auth_name))
   return ((void*)0);
 }
 return VAR_2;
}
