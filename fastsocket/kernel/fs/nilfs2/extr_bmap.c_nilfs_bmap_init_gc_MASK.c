
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {scalar_t__ b_state; int b_last_allocated_ptr; scalar_t__ b_last_allocated_key; int b_ptr_type; int * b_inode; int b_sem; int b_u; } ;
struct TYPE_2__ {int vfs_inode; } ;


 TYPE_1__* FUNC_0 (struct nilfs_bmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct nilfs_bmap*) ;

void FUNC_4(struct nilfs_bmap *VAR_3)
{
 FUNC_2(&VAR_3->b_u, 0, VAR_2);
 FUNC_1(&VAR_3->b_sem);
 VAR_3->b_inode = &FUNC_0(VAR_3)->vfs_inode;
 VAR_3->b_ptr_type = VAR_1;
 VAR_3->b_last_allocated_key = 0;
 VAR_3->b_last_allocated_ptr = VAR_0;
 VAR_3->b_state = 0;
 FUNC_3(VAR_3);
}
