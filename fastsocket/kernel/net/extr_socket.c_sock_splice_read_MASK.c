
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; int sk; } ;
struct pipe_inode_info {int dummy; } ;
struct file {struct socket* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int (* splice_read ) (struct socket*,int *,struct pipe_inode_info*,size_t,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct socket*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

ssize_t FUNC_3(struct file *VAR_1, loff_t *VAR_2,
           struct pipe_inode_info *VAR_3, size_t VAR_4,
    unsigned int VAR_5)
{
 struct socket *VAR_6 = VAR_1->private_data;

 if (FUNC_2(!VAR_6->ops->splice_read))
  return -VAR_0;

 FUNC_0(VAR_6->sk);

 return VAR_6->ops->splice_read(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}
