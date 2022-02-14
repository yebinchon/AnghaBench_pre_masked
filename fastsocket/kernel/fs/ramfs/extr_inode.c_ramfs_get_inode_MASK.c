
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_op; int * i_fop; int i_ctime; int i_mtime; int i_atime; TYPE_1__* i_mapping; int i_gid; int i_uid; } ;
typedef int dev_t ;
struct TYPE_3__ {int * backing_dev_info; int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct inode* FUNC_6 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

struct inode *FUNC_7(struct super_block *VAR_10, int VAR_11, dev_t VAR_12)
{
 struct inode * VAR_13 = FUNC_6(VAR_10);

 if (VAR_13) {
  VAR_13->i_mode = VAR_11;
  VAR_13->i_uid = FUNC_1();
  VAR_13->i_gid = FUNC_0();
  VAR_13->i_mapping->a_ops = &VAR_4;
  VAR_13->i_mapping->backing_dev_info = &VAR_5;
  FUNC_4(VAR_13->i_mapping, VAR_1);
  FUNC_5(VAR_13->i_mapping);
  VAR_13->i_atime = VAR_13->i_mtime = VAR_13->i_ctime = VAR_0;
  switch (VAR_11 & VAR_2) {
  default:
   FUNC_3(VAR_13, VAR_11, VAR_12);
   break;
  case 128:
   VAR_13->i_op = &VAR_7;
   VAR_13->i_fop = &VAR_8;
   break;
  case 130:
   VAR_13->i_op = &VAR_6;
   VAR_13->i_fop = &VAR_9;


   FUNC_2(VAR_13);
   break;
  case 129:
   VAR_13->i_op = &VAR_3;
   break;
  }
 }
 return VAR_13;
}
