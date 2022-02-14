
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int tb_path; } ;
struct buffer_info {int bi_position; int bi_parent; int bi_bh; struct tree_balance* tb; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct tree_balance *VAR_0,
                                         struct buffer_info *VAR_1)
{
 VAR_1->tb = VAR_0;
 VAR_1->bi_bh = FUNC_2(VAR_0->tb_path);
 VAR_1->bi_parent = FUNC_1(VAR_0->tb_path, 0);
 VAR_1->bi_position = FUNC_0(VAR_0->tb_path, 1);
}
