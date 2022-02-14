
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int * FL; int * L; } ;
struct buffer_info {int bi_position; int bi_parent; int bi_bh; struct tree_balance* tb; } ;


 int FUNC_0 (struct tree_balance*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct tree_balance *VAR_0,
                                         struct buffer_info *VAR_1)
{
 VAR_1->tb = VAR_0;
 VAR_1->bi_bh = VAR_0->L[0];
 VAR_1->bi_parent = VAR_0->FL[0];
 VAR_1->bi_position = FUNC_0(VAR_0, 0);
}
