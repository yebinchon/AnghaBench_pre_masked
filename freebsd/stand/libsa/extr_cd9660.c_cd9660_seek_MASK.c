
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_fsdata; } ;
struct file {int f_off; int f_size; } ;
typedef int off_t ;






__attribute__((used)) static off_t
FUNC_0(struct open_file *VAR_0, off_t VAR_1, int VAR_2)
{
 struct file *VAR_3 = (struct file *)VAR_0->f_fsdata;

 switch (VAR_2) {
 case 128:
  VAR_3->f_off = VAR_1;
  break;
 case 130:
  VAR_3->f_off += VAR_1;
  break;
 case 129:
  VAR_3->f_off = VAR_3->f_size - VAR_1;
  break;
 default:
  return -1;
 }
 return VAR_3->f_off;
}
