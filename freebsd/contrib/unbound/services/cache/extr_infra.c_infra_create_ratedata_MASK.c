
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct TYPE_2__ {struct rate_key* data; struct rate_key* key; int hash; int lock; } ;
struct rate_key {size_t namelen; int* qps; TYPE_1__ entry; int * timestamp; int name; } ;
struct rate_data {size_t namelen; int* qps; TYPE_1__ entry; int * timestamp; int name; } ;
struct infra_cache {int domain_rates; } ;
typedef int hashvalue_type ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct rate_key*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int ,int ,TYPE_1__*,struct rate_key*,int *) ;

__attribute__((used)) static void FUNC_6(struct infra_cache* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, time_t VAR_3)
{
 hashvalue_type VAR_4 = FUNC_1(VAR_1, 0xab);
 struct rate_key* VAR_5 = (struct rate_key*)FUNC_0(1, sizeof(*VAR_5));
 struct rate_data* VAR_6 = (struct rate_data*)FUNC_0(1, sizeof(*VAR_6));
 if(!VAR_5 || !VAR_6) {
  FUNC_2(VAR_5);
  FUNC_2(VAR_6);
  return;
 }
 VAR_5->namelen = VAR_2;
 VAR_5->name = FUNC_4(VAR_1, VAR_2);
 if(!VAR_5->name) {
  FUNC_2(VAR_5);
  FUNC_2(VAR_6);
  return;
 }
 FUNC_3(&VAR_5->entry.lock);
 VAR_5->entry.hash = VAR_4;
 VAR_5->entry.key = VAR_5;
 VAR_5->entry.data = VAR_6;
 VAR_6->qps[0] = 1;
 VAR_6->timestamp[0] = VAR_3;
 FUNC_5(VAR_0->domain_rates, VAR_4, &VAR_5->entry, VAR_6, ((void*)0));
}
