
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; scalar_t__* i_dquot; } ;
struct TYPE_4__ {TYPE_1__* dq_op; } ;
struct TYPE_3__ {int (* drop ) (struct inode*) ;} ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_1)
{



 if (!FUNC_0(VAR_1) && VAR_1->i_sb && VAR_1->i_sb->dq_op
     && VAR_1->i_sb->dq_op->drop) {
  int VAR_2;





  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   if (VAR_1->i_dquot[VAR_2])
    break;
  if (VAR_2 < VAR_0)
   VAR_1->i_sb->dq_op->drop(VAR_1);
 }
}
