
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int * file; int * sk; int * ops; scalar_t__ flags; int state; int * fasync_list; int wait; } ;
struct socket_alloc {struct inode vfs_inode; TYPE_1__ socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct inode*) ;
 int VAR_1 ;
 struct socket_alloc* FUNC_1 () ;
 int FUNC_2 (struct socket_alloc*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct inode*) ;

struct inode *FUNC_5(struct super_block *VAR_2)
{
 struct socket_alloc *VAR_3;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_4(&VAR_3->vfs_inode)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 FUNC_3(&VAR_3->socket.wait);

 VAR_3->socket.fasync_list = ((void*)0);
 VAR_3->socket.state = VAR_1;
 VAR_3->socket.flags = 0;
 VAR_3->socket.ops = ((void*)0);
 VAR_3->socket.sk = ((void*)0);
 VAR_3->socket.file = ((void*)0);

 FUNC_0(VAR_0, "Allocate inode 0x%p\n", &VAR_3->vfs_inode);

 return &VAR_3->vfs_inode;
}
