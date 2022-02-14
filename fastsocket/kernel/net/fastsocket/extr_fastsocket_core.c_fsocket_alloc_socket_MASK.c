
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_alloc {int dummy; } ;
struct socket {scalar_t__ type; int * file; int * sk; int * ops; scalar_t__ flags; int state; int * fasync_list; int wait; } ;
struct inode_operations {int dummy; } ;
struct inode {unsigned int i_ino; int i_mode; int i_gid; int i_uid; scalar_t__ i_state; int i_sb_list; int i_list; int i_count; int i_sb; struct file_operations const* i_fop; struct inode_operations const* i_op; } ;
struct file_operations {int dummy; } ;
struct TYPE_2__ {int mnt_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *) ;
 struct inode* FUNC_2 (struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct socket_alloc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int VAR_8 ;

__attribute__((used)) static struct socket *FUNC_13(void)
{


 static const struct inode_operations VAR_9;
 static const struct file_operations VAR_10;
 struct socket *VAR_11;

 static unsigned int VAR_12 = ( 1 << 12 );
 struct inode *VAR_13 = ((void*)0);

 VAR_11 = (struct socket *)FUNC_7();
 if (!VAR_11) {
  FUNC_0(VAR_1, "Fail to allocate sock\n");
  goto err1;
 }

 FUNC_3(VAR_6);

 if (FUNC_12(FUNC_2(VAR_11))) {
  goto err2;
 }

 FUNC_9(&VAR_11->wait);

 VAR_11->fasync_list = ((void*)0);
 VAR_11->state = VAR_3;
 VAR_11->flags = 0;
 VAR_11->ops = ((void*)0);
 VAR_11->sk = ((void*)0);
 VAR_11->file = ((void*)0);

 VAR_11->type = 0;

 VAR_13 = FUNC_2(VAR_11);

 VAR_13->i_op = &VAR_9;
 VAR_13->i_fop = &VAR_10;
 VAR_13->i_sb = VAR_7->mnt_sb;
 FUNC_4(&VAR_13->i_count, 1);

 FUNC_1(&VAR_13->i_list);
 FUNC_1(&VAR_13->i_sb_list);

 VAR_13->i_ino = ++VAR_12;
 VAR_13->i_state = 0;

 FUNC_10(VAR_11, VAR_8);
 VAR_13->i_mode = VAR_4 | VAR_5;
 VAR_13->i_uid = FUNC_6();
 VAR_13->i_gid = FUNC_5();



 FUNC_0(VAR_0, "Allocat inode 0x%p\n", VAR_13);

 return VAR_11;

err2:
 FUNC_11(VAR_6);
 FUNC_8((struct socket_alloc*)VAR_11);
err1:
 return ((void*)0);
}
