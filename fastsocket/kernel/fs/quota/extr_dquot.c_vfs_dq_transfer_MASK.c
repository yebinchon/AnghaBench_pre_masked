
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct iattr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dq_op; } ;
struct TYPE_3__ {scalar_t__ (* transfer ) (struct inode*,struct iattr*) ;} ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_1, struct iattr *VAR_2)
{
 if (FUNC_1(VAR_1->i_sb) && !FUNC_0(VAR_1)) {
  FUNC_3(VAR_1);
  if (VAR_1->i_sb->dq_op->transfer(VAR_1, VAR_2) == VAR_0)
   return 1;
 }
 return 0;
}
