
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hlist_head {int dummy; } ;
struct flow_table {int n_buckets; int buckets; int hash_seed; } ;


 struct hlist_head* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_2(struct flow_table *VAR_0, u32 VAR_1)
{
 VAR_1 = FUNC_1(VAR_1, VAR_0->hash_seed);
 return FUNC_0(VAR_0->buckets,
    (VAR_1 & (VAR_0->n_buckets - 1)));
}
