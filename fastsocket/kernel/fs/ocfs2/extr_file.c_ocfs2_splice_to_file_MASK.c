
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_desc {int total_len; int pos; } ;
struct pipe_inode_info {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct pipe_inode_info*,struct splice_desc*,int ) ;

__attribute__((used)) static int FUNC_3(struct pipe_inode_info *VAR_1,
    struct file *VAR_2,
    struct splice_desc *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->f_path.dentry, &VAR_3->pos,
         VAR_3->total_len, 0, ((void*)0));
 if (VAR_4 < 0) {
  FUNC_0(VAR_4);
  return VAR_4;
 }

 return FUNC_2(VAR_1, VAR_3, VAR_0);
}
