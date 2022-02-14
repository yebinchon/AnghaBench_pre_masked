
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nilfs_inode {int i_bmap; } ;
struct TYPE_5__ {int u_flags; int u_data; } ;
struct nilfs_bmap {TYPE_2__ b_u; void* b_last_allocated_ptr; int b_last_allocated_key; int b_ptr_type; int b_sem; TYPE_1__* b_inode; scalar_t__ b_state; } ;
struct TYPE_4__ {int i_ino; } ;
struct TYPE_6__ {TYPE_1__ vfs_inode; } ;


 TYPE_3__* FUNC_0 (struct nilfs_bmap*) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct nilfs_bmap*) ;
 int FUNC_6 (struct nilfs_bmap*) ;

int FUNC_7(struct nilfs_bmap *VAR_9, struct nilfs_inode *VAR_10)
{
 if (VAR_10 == ((void*)0))
  FUNC_4(VAR_9->b_u.u_data, 0, VAR_6);
 else
  FUNC_3(VAR_9->b_u.u_data, VAR_10->i_bmap, VAR_6);

 FUNC_1(&VAR_9->b_sem);
 VAR_9->b_state = 0;
 VAR_9->b_inode = &FUNC_0(VAR_9)->vfs_inode;
 switch (VAR_9->b_inode->i_ino) {
 case 130:
  VAR_9->b_ptr_type = VAR_3;
  VAR_9->b_last_allocated_key = 0;
  VAR_9->b_last_allocated_ptr = VAR_2;
  FUNC_2(&VAR_9->b_sem, &VAR_7);
  break;
 case 131:
 case 128:
  VAR_9->b_ptr_type = VAR_5;
  VAR_9->b_last_allocated_key = 0;
  VAR_9->b_last_allocated_ptr = VAR_0;
  FUNC_2(&VAR_9->b_sem, &VAR_8);
  break;
 case 129:
  FUNC_2(&VAR_9->b_sem, &VAR_8);

 default:
  VAR_9->b_ptr_type = VAR_4;
  VAR_9->b_last_allocated_key = 0;
  VAR_9->b_last_allocated_ptr = VAR_0;
  break;
 }

 return (VAR_9->b_u.u_flags & VAR_1) ?
  FUNC_5(VAR_9) : FUNC_6(VAR_9);
}
