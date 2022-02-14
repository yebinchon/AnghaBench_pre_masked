
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int dummy; } ;
struct buffer_info {scalar_t__ bi_position; int * bi_parent; struct buffer_head* bi_bh; struct tree_balance* tb; } ;
struct buffer_head {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct tree_balance *VAR_0,
                                       struct buffer_info *VAR_1,
                                       struct buffer_head *VAR_2)
{
 VAR_1->tb = VAR_0;
 VAR_1->bi_bh = VAR_2;
 VAR_1->bi_parent = ((void*)0);
 VAR_1->bi_position = 0;
}
