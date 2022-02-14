
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {scalar_t__ data; scalar_t__ key; } ;
struct ip_ratelimit_list_arg {scalar_t__ all; int ssl; int now; } ;
struct ip_rate_key {int addrlen; int addr; } ;
struct ip_rate_data {int dummy; } ;
typedef int ip ;


 int FUNC_0 (int *,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_rate_data*,int ) ;
 int FUNC_2 (int ,char*,char*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct lruhash_entry* VAR_1, void* VAR_2)
{
 char VAR_3[128];
 struct ip_ratelimit_list_arg* VAR_4 = (struct ip_ratelimit_list_arg*)VAR_2;
 struct ip_rate_key* VAR_5 = (struct ip_rate_key*)VAR_1->key;
 struct ip_rate_data* VAR_6 = (struct ip_rate_data*)VAR_1->data;
 int VAR_7 = VAR_0;
 int VAR_8 = FUNC_1(VAR_6, VAR_4->now);
 if(VAR_4->all == 0) {
  if(VAR_8 < VAR_7)
   return;
 }
 FUNC_0(&VAR_5->addr, VAR_5->addrlen, VAR_3, sizeof(VAR_3));
 FUNC_2(VAR_4->ssl, "%s %d limit %d\n", VAR_3, VAR_8, VAR_7);
}
