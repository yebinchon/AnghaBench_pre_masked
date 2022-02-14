
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct flow_table {int n_buckets; int keep_flows; int hash_seed; scalar_t__ node_ver; scalar_t__ count; int buckets; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct flow_table*) ;
 struct flow_table* FUNC_3 (int,int ) ;

struct flow_table *FUNC_4(int VAR_1)
{
 struct flow_table *VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 VAR_2->buckets = FUNC_0(VAR_1);

 if (!VAR_2->buckets) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }
 VAR_2->n_buckets = VAR_1;
 VAR_2->count = 0;
 VAR_2->node_ver = 0;
 VAR_2->keep_flows = 0;
 FUNC_1(&VAR_2->hash_seed, sizeof(u32));

 return VAR_2;
}
