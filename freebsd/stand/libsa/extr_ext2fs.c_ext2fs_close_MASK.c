
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {void* f_fsdata; } ;
struct file {struct file* f_fs; struct file* f_bg; struct file* f_buf; struct file** f_blk; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_1)
{
 struct file *VAR_2 = (struct file *)VAR_1->f_fsdata;
 int VAR_3;

 VAR_1->f_fsdata = (void *)0;
 if (VAR_2 == (struct file *)0)
  return (0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->f_blk[VAR_3])
   FUNC_0(VAR_2->f_blk[VAR_3]);
 }
 if (VAR_2->f_buf)
  FUNC_0(VAR_2->f_buf);
 if (VAR_2->f_bg)
  FUNC_0(VAR_2->f_bg);
 FUNC_0(VAR_2->f_fs);
 FUNC_0(VAR_2);
 return (0);
}
