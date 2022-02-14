
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {char* vn_free_ptr; int vn_mode; int vn_affected_item_num; int vn_pos_in_item; struct item_head* vn_ins_ih; void const* vn_data; } ;
struct tree_balance {scalar_t__* insert_size; struct virtual_node* tb_vn; scalar_t__ vn_buf; } ;
struct item_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct tree_balance*,int) ;
 int FUNC_2 (struct tree_balance*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1,
    struct tree_balance *VAR_2,
    int VAR_3,
    int VAR_4,
    int VAR_5,
    struct item_head *VAR_6, const void *VAR_7)
{
 struct virtual_node *VAR_8;

 VAR_8 = VAR_2->tb_vn = (struct virtual_node *)(VAR_2->vn_buf);
 VAR_8->vn_free_ptr = (char *)(VAR_2->tb_vn + 1);
 VAR_8->vn_mode = VAR_1;
 VAR_8->vn_affected_item_num = VAR_4;
 VAR_8->vn_pos_in_item = VAR_5;
 VAR_8->vn_ins_ih = VAR_6;
 VAR_8->vn_data = VAR_7;

 FUNC_0(VAR_1 == VAR_0 && !VAR_8->vn_ins_ih,
        "vs-8255: ins_ih can not be 0 in insert mode");

 if (VAR_2->insert_size[VAR_3] > 0)

  return FUNC_2(VAR_2, VAR_3);


 return FUNC_1(VAR_2, VAR_3);
}
