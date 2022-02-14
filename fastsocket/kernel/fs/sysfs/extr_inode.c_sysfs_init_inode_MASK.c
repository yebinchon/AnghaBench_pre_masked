
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysfs_inode_attrs {int ia_secdata_len; scalar_t__ ia_secdata; int ia_iattr; } ;
struct TYPE_6__ {struct bin_attribute* bin_attr; } ;
struct TYPE_5__ {int subdirs; } ;
struct sysfs_dirent {TYPE_3__ s_bin_attr; TYPE_2__ s_dir; int s_mode; struct sysfs_inode_attrs* s_iattr; int s_ino; } ;
struct inode {int * i_op; int * i_fop; int i_size; int i_nlink; int i_mutex; int i_ino; TYPE_1__* i_mapping; int i_private; } ;
struct bin_attribute {int size; } ;
struct TYPE_4__ {int * backing_dev_info; int * a_ops; } ;


 int FUNC_0 () ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct inode*,scalar_t__,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct sysfs_dirent*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct sysfs_dirent*) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static void FUNC_8(struct sysfs_dirent *VAR_10, struct inode *VAR_11)
{
 struct bin_attribute *VAR_12;
 struct sysfs_inode_attrs *VAR_13;

 VAR_11->i_private = FUNC_5(VAR_10);
 VAR_11->i_mapping->a_ops = &VAR_2;
 VAR_11->i_mapping->backing_dev_info = &VAR_3;
 VAR_11->i_op = &VAR_8;
 VAR_11->i_ino = VAR_10->s_ino;
 FUNC_1(&VAR_11->i_mutex, &VAR_7);

 VAR_13 = VAR_10->s_iattr;
 if (VAR_13) {




  FUNC_4(VAR_11, &VAR_13->ia_iattr);
  if (VAR_13->ia_secdata)
   FUNC_2(VAR_11,
      VAR_13->ia_secdata,
      VAR_13->ia_secdata_len);
 } else
  FUNC_3(VAR_11, VAR_10->s_mode);


 switch (FUNC_6(VAR_10)) {
 case 131:
  VAR_11->i_op = &VAR_4;
  VAR_11->i_fop = &VAR_5;
  VAR_11->i_nlink = VAR_10->s_dir.subdirs + 2;
  break;
 case 130:
  VAR_11->i_size = VAR_0;
  VAR_11->i_fop = &VAR_6;
  break;
 case 129:
  VAR_12 = VAR_10->s_bin_attr.bin_attr;
  VAR_11->i_size = VAR_12->size;
  VAR_11->i_fop = &VAR_1;
  break;
 case 128:
  VAR_11->i_op = &VAR_9;
  break;
 default:
  FUNC_0();
 }

 FUNC_7(VAR_11);
}
