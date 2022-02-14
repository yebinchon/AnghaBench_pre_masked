
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* truncate ) (struct inode*) ;} ;


 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;

int FUNC_3(struct inode *VAR_0, loff_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0, VAR_1);
 if (VAR_0->i_op->truncate)
  VAR_0->i_op->truncate(VAR_0);
 return 0;
}
