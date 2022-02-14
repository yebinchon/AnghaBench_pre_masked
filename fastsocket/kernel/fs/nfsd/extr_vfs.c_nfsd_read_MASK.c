
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct raparms {int p_set; size_t p_hindex; int p_count; int p_ra; } ;
struct raparm_hbucket {int pb_lock; } ;
struct kvec {int dummy; } ;
struct inode {int i_ino; TYPE_3__* i_sb; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int f_ra; TYPE_2__ f_path; } ;
typedef int loff_t ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int s_dev; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;
 struct raparms* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_fh*,int ,int ,struct file**) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct svc_fh*,struct file*,int ,struct kvec*,int,unsigned long*) ;
 struct raparm_hbucket* VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__be32 FUNC_6(struct svc_rqst *VAR_3, struct svc_fh *VAR_4,
 loff_t VAR_5, struct kvec *VAR_6, int VAR_7, unsigned long *VAR_8)
{
 struct file *VAR_9;
 struct inode *VAR_10;
 struct raparms *VAR_11;
 __be32 VAR_12;

 VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_1, VAR_0, &VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_10 = VAR_9->f_path.dentry->d_inode;


 VAR_11 = FUNC_1(VAR_10->i_sb->s_dev, VAR_10->i_ino);

 if (VAR_11 && VAR_11->p_set)
  VAR_9->f_ra = VAR_11->p_ra;

 VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);


 if (VAR_11) {
  struct raparm_hbucket *VAR_13 = &VAR_2[VAR_11->p_hindex];
  FUNC_4(&VAR_13->pb_lock);
  VAR_11->p_ra = VAR_9->f_ra;
  VAR_11->p_set = 1;
  VAR_11->p_count--;
  FUNC_5(&VAR_13->pb_lock);
 }

 FUNC_0(VAR_9);
 return VAR_12;
}
