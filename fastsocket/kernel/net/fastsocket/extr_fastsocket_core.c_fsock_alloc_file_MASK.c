
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct file* file; } ;
struct qstr {char* name; } ;
struct path {TYPE_2__* dentry; int mnt; } ;
struct file {int f_mode; int f_flags; struct path f_path; int * f_epi; int * sub_file; struct socket* private_data; scalar_t__ f_pos; int * f_op; int f_mapping; } ;
struct TYPE_7__ {int * i_fop; } ;
struct TYPE_6__ {TYPE_1__* d_inode; } ;
struct TYPE_5__ {int i_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct file*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_2 (struct socket*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_2__* FUNC_3 (struct socket*,int *,struct qstr*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_12 ;
 struct file* FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_13, struct file **VAR_14, int VAR_15)
{
 int VAR_16;
 struct qstr VAR_17 = { .name = "" };
 struct path VAR_18;
 struct file *VAR_19;

 VAR_16 = FUNC_6(VAR_15);

 if (FUNC_8(VAR_16 < 0)) {
  FUNC_1(VAR_3, "Socket 0x%p get unused fd failed\n", VAR_13);
  return VAR_16;
 }

 VAR_18.dentry = FUNC_3(VAR_13, ((void*)0), &VAR_17);
 if (FUNC_8(!VAR_18.dentry)) {
  FUNC_1(VAR_3, "Socket 0x%p allocate dentry failed\n", VAR_13);
  FUNC_7(VAR_16);
  return -VAR_2;
 }

 VAR_18.mnt = VAR_11;

 FUNC_2(VAR_13)->i_fop = &VAR_12;

 VAR_19 = FUNC_5();
 if (FUNC_8(!VAR_19)) {
  FUNC_1(VAR_3, "Socket 0x%p allocate empty file failed\n", VAR_13);
  FUNC_4(VAR_18.dentry);
  FUNC_7(VAR_16);
  return -VAR_1;
 }

 FUNC_0(VAR_0, "Allocate file 0x%p\n", VAR_19);

 VAR_19->f_path = VAR_18;
 VAR_19->f_mapping = VAR_18.dentry->d_inode->i_mapping;
 VAR_19->f_mode = VAR_6 | VAR_7 | VAR_5;
 if (VAR_10)
  VAR_19->f_mode |= VAR_4;
 VAR_19->f_op = &VAR_12;

 VAR_13->file = VAR_19;

 VAR_19->f_flags = VAR_9 | (VAR_15 & VAR_8);
 VAR_19->f_pos = 0;
 VAR_19->private_data = VAR_13;

 VAR_19->sub_file = ((void*)0);
 VAR_19->f_epi = ((void*)0);

 *VAR_14 = VAR_19;

 FUNC_0(VAR_0, "fsock_alloc_file: file(%p) dentry(%p)", VAR_19, VAR_19->f_path.dentry);

 return VAR_16;
}
