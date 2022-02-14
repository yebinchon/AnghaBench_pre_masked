
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_table {int n_buckets; } ;


 struct flow_table* FUNC_0 (struct flow_table*,int) ;

struct flow_table *FUNC_1(struct flow_table *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->n_buckets * 2);
}
