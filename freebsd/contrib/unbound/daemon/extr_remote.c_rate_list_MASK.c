
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ratelimit_list_arg {scalar_t__ all; int ssl; int now; int infra; } ;
struct rate_key {int name; int namelen; } ;
struct rate_data {int dummy; } ;
struct lruhash_entry {scalar_t__ data; scalar_t__ key; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct rate_data*,int ) ;
 int FUNC_3 (int ,char*,char*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct lruhash_entry* VAR_0, void* VAR_1)
{
 struct ratelimit_list_arg* VAR_2 = (struct ratelimit_list_arg*)VAR_1;
 struct rate_key* VAR_3 = (struct rate_key*)VAR_0->key;
 struct rate_data* VAR_4 = (struct rate_data*)VAR_0->data;
 char VAR_5[257];
 int VAR_6 = FUNC_1(VAR_2->infra, VAR_3->name, VAR_3->namelen);
 int VAR_7 = FUNC_2(VAR_4, VAR_2->now);
 if(VAR_2->all == 0) {
  if(VAR_7 < VAR_6)
   return;
 }
 FUNC_0(VAR_3->name, VAR_5);
 FUNC_3(VAR_2->ssl, "%s %d limit %d\n", VAR_5, VAR_7, VAR_6);
}
