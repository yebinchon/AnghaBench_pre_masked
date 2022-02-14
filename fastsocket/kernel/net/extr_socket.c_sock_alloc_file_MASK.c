
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct socket {struct file* file; } ;
struct qstr {char* name; } ;
struct path {TYPE_4__* dentry; int mnt; } ;
struct file {int f_flags; struct socket* private_data; scalar_t__ f_pos; } ;
struct TYPE_11__ {int * i_fop; } ;
struct TYPE_10__ {TYPE_1__* d_inode; int d_flags; int * d_op; } ;
struct TYPE_9__ {int mnt_sb; } ;
struct TYPE_8__ {int i_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_0 (struct socket*) ;
 struct file* FUNC_1 (struct path*,int,int *) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int ,struct qstr*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (int) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_10, struct file **VAR_11, int VAR_12)
{
 struct qstr VAR_13 = { .name = "" };
 struct path VAR_14;
 struct file *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_5(VAR_12);
 if (FUNC_9(VAR_16 < 0))
  return VAR_16;

 VAR_14.dentry = FUNC_3(VAR_7->mnt_sb, &VAR_13);
 if (FUNC_9(!VAR_14.dentry)) {
  FUNC_8(VAR_16);
  return -VAR_2;
 }
 VAR_14.mnt = FUNC_6(VAR_7);

 VAR_14.dentry->d_op = &VAR_9;





 VAR_14.dentry->d_flags &= ~VAR_0;
 FUNC_4(VAR_14.dentry, FUNC_0(VAR_10));
 FUNC_0(VAR_10)->i_fop = &VAR_8;

 VAR_15 = FUNC_1(&VAR_14, VAR_3 | VAR_4,
    &VAR_8);
 if (FUNC_9(!VAR_15)) {

  FUNC_2(&VAR_14.dentry->d_inode->i_count);
  FUNC_7(&VAR_14);
  FUNC_8(VAR_16);
  return -VAR_1;
 }

 VAR_10->file = VAR_15;
 VAR_15->f_flags = VAR_6 | (VAR_12 & VAR_5);
 VAR_15->f_pos = 0;
 VAR_15->private_data = VAR_10;

 *VAR_11 = VAR_15;
 return VAR_16;
}
