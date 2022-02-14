
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {int read_wait; scalar_t__ finalized; } ;
struct file {int f_mode; struct rchan_buf* private_data; } ;
typedef int poll_table ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (struct rchan_buf*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 unsigned int VAR_6 = 0;
 struct rchan_buf *VAR_7 = VAR_4->private_data;

 if (VAR_7->finalized)
  return VAR_1;

 if (VAR_4->f_mode & VAR_0) {
  FUNC_0(VAR_4, &VAR_7->read_wait, VAR_5);
  if (!FUNC_1(VAR_7))
   VAR_6 |= VAR_2 | VAR_3;
 }

 return VAR_6;
}
