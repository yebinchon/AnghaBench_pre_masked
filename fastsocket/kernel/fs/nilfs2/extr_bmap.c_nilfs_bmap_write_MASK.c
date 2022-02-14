
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_inode {int i_bmap; } ;
struct TYPE_3__ {int u_data; } ;
struct nilfs_bmap {int b_sem; int b_last_allocated_ptr; TYPE_2__* b_inode; TYPE_1__ b_u; } ;
typedef int __le64 ;
struct TYPE_4__ {scalar_t__ i_ino; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nilfs_bmap *VAR_3, struct nilfs_inode *VAR_4)
{
 FUNC_0(&VAR_3->b_sem);
 FUNC_1(VAR_4->i_bmap, VAR_3->b_u.u_data,
        VAR_2 * sizeof(__le64));
 if (VAR_3->b_inode->i_ino == VAR_1)
  VAR_3->b_last_allocated_ptr = VAR_0;

 FUNC_2(&VAR_3->b_sem);
}
