
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_2__ {int di_size; } ;
struct file {int f_seekp; TYPE_1__ f_di; } ;
typedef int off_t ;


 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static off_t
FUNC_0(struct open_file *VAR_2, off_t VAR_3, int VAR_4)
{
 struct file *VAR_5 = (struct file *)VAR_2->f_fsdata;

 switch (VAR_4) {
 case 128:
  VAR_5->f_seekp = VAR_3;
  break;
 case 130:
  VAR_5->f_seekp += VAR_3;
  break;
 case 129:
  VAR_5->f_seekp = VAR_5->f_di.di_size - VAR_3;
  break;
 default:
  VAR_1 = VAR_0;
  return (-1);
 }
 return (VAR_5->f_seekp);
}
