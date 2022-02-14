
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int*,struct pipe_inode_info*,size_t,unsigned int,int*) ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_2,
          loff_t *VAR_3,
          struct pipe_inode_info *VAR_4,
          size_t VAR_5,
          unsigned int VAR_6)
{
 ssize_t VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 VAR_8 = 0;
 VAR_7 = 0;

 while (VAR_5 && !VAR_7) {
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_9);
  if (VAR_8 < 0)
   break;
  else if (!VAR_8) {
   if (VAR_6 & VAR_1)
    VAR_8 = -VAR_0;
   break;
  }

  *VAR_3 += VAR_8;
  if (VAR_8 > VAR_5)
   VAR_5 = 0;
  else
   VAR_5 -= VAR_8;
  VAR_7 += VAR_9;
  VAR_9 = 0;
 }

 if (VAR_7)
  return VAR_7;

 return VAR_8;
}
