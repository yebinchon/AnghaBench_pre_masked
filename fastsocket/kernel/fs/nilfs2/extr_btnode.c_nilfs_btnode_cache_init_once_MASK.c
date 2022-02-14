
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int i_mmap_nonlinear; int i_mmap; int i_mmap_lock; int private_lock; int private_list; int tree_lock; int page_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct address_space*,int ,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct address_space *VAR_1)
{
 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(&VAR_1->page_tree, VAR_0);
 FUNC_4(&VAR_1->tree_lock);
 FUNC_0(&VAR_1->private_list);
 FUNC_4(&VAR_1->private_lock);

 FUNC_4(&VAR_1->i_mmap_lock);
 FUNC_2(&VAR_1->i_mmap);
 FUNC_0(&VAR_1->i_mmap_nonlinear);
}
