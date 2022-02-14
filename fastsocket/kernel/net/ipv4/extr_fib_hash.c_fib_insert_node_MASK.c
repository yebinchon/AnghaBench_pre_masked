
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct fn_zone {struct hlist_head* fz_hash; } ;
struct fib_node {int fn_hash; int fn_key; } ;


 size_t FUNC_0 (int ,struct fn_zone*) ;
 int FUNC_1 (int *,struct hlist_head*) ;

__attribute__((used)) static inline void FUNC_2(struct fn_zone *VAR_0, struct fib_node *VAR_1)
{
 struct hlist_head *VAR_2 = &VAR_0->fz_hash[FUNC_0(VAR_1->fn_key, VAR_0)];

 FUNC_1(&VAR_1->fn_hash, VAR_2);
}
