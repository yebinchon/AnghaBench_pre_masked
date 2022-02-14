
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
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct socket_alloc* FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_3)
{
 struct socket_alloc *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);
 FUNC_0(&VAR_4->socket.wait);

 VAR_4->socket.fasync_list = ((void*)0);
 VAR_4->socket.state = VAR_1;
 VAR_4->socket.flags = 0;
 VAR_4->socket.ops = ((void*)0);
 VAR_4->socket.sk = ((void*)0);
 VAR_4->socket.file = ((void*)0);

 return &VAR_4->vfs_inode;
}
