
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_sb; int i_mutex; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,int *) ;
 scalar_t__ FUNC_2 (struct file*,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

ssize_t FUNC_7(struct kiocb *VAR_1, const struct iovec *VAR_2,
  unsigned long VAR_3, loff_t VAR_4)
{
 struct file *VAR_5 = VAR_1->ki_filp;
 struct inode *VAR_6 = VAR_5->f_mapping->host;
 ssize_t VAR_7;

 FUNC_0(VAR_1->ki_pos != VAR_4);

 FUNC_6(VAR_6->i_sb);
 FUNC_3(&VAR_6->i_mutex);
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_1->ki_pos);
 FUNC_4(&VAR_6->i_mutex);

 if (VAR_7 > 0 || VAR_7 == -VAR_0) {
  ssize_t VAR_8;

  VAR_8 = FUNC_2(VAR_5, VAR_4, VAR_7);
  if (VAR_8 < 0 && VAR_7 > 0)
   VAR_7 = VAR_8;
 }
 FUNC_5(VAR_6->i_sb);
 return VAR_7;
}
