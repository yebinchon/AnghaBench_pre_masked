
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct TYPE_4__ {scalar_t__ mq_curmsgs; scalar_t__ mq_maxmsg; } ;
struct mqueue_inode_info {int lock; TYPE_1__ attr; int wait_q; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_5__ {int d_inode; } ;


 struct mqueue_inode_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 struct mqueue_inode_info *VAR_6 = FUNC_0(VAR_4->f_path.dentry->d_inode);
 int VAR_7 = 0;

 FUNC_1(VAR_4, &VAR_6->wait_q, VAR_5);

 FUNC_2(&VAR_6->lock);
 if (VAR_6->attr.mq_curmsgs)
  VAR_7 = VAR_0 | VAR_2;

 if (VAR_6->attr.mq_curmsgs < VAR_6->attr.mq_maxmsg)
  VAR_7 |= VAR_1 | VAR_3;
 FUNC_3(&VAR_6->lock);

 return VAR_7;
}
