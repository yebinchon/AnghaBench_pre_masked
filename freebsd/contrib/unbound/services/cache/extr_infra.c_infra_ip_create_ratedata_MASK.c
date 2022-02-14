
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {struct ip_rate_key* data; struct ip_rate_key* key; int hash; int lock; } ;
struct ip_rate_key {int* qps; TYPE_1__ entry; int * timestamp; int addrlen; int addr; } ;
struct ip_rate_data {int* qps; TYPE_1__ entry; int * timestamp; int addrlen; int addr; } ;
struct infra_cache {int client_ip_rates; } ;
struct comm_reply {int addrlen; int addr; } ;
typedef int hashvalue_type ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct ip_rate_key*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,TYPE_1__*,struct ip_rate_key*,int *) ;

__attribute__((used)) static void FUNC_5(struct infra_cache* VAR_0,
 struct comm_reply* VAR_1, time_t VAR_2)
{
 hashvalue_type VAR_3 = FUNC_2(&(VAR_1->addr),
 VAR_1->addrlen, 0);
 struct ip_rate_key* VAR_4 = (struct ip_rate_key*)FUNC_0(1, sizeof(*VAR_4));
 struct ip_rate_data* VAR_5 = (struct ip_rate_data*)FUNC_0(1, sizeof(*VAR_5));
 if(!VAR_4 || !VAR_5) {
  FUNC_1(VAR_4);
  FUNC_1(VAR_5);
  return;
 }
 VAR_4->addr = VAR_1->addr;
 VAR_4->addrlen = VAR_1->addrlen;
 FUNC_3(&VAR_4->entry.lock);
 VAR_4->entry.hash = VAR_3;
 VAR_4->entry.key = VAR_4;
 VAR_4->entry.data = VAR_5;
 VAR_5->qps[0] = 1;
 VAR_5->timestamp[0] = VAR_2;
 FUNC_4(VAR_0->client_ip_rates, VAR_3, &VAR_4->entry, VAR_5, ((void*)0));
}
