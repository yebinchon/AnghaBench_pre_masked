
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * i_data; } ;
struct udf_inode_info {TYPE_2__ i_ext; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*,int ) ;

void FUNC_7(struct inode *VAR_1)
{
 struct udf_inode_info *VAR_2;
 if (!(VAR_1->i_sb->s_flags & VAR_0)) {
  FUNC_3();
  FUNC_4(VAR_1);
  FUNC_5();
  FUNC_6(VAR_1, 0);
  FUNC_1(VAR_1);
 }
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_2->i_ext.i_data);
 VAR_2->i_ext.i_data = ((void*)0);
}
