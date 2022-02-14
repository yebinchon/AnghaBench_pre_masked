
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct open_file {scalar_t__ f_fsdata; } ;
struct file {int f_seekp; } ;
typedef int off_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct open_file*,struct stat*) ;

__attribute__((used)) static off_t
FUNC_1(struct open_file *VAR_2, off_t VAR_3, int VAR_4)
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
     {
  struct stat VAR_6;
  int VAR_7;

  VAR_7 = FUNC_0(VAR_2, &VAR_6);
  if (VAR_7 != 0) {
   VAR_1 = VAR_7;
   return (-1);
  }
  VAR_5->f_seekp = VAR_6.st_size - VAR_3;
  break;
     }
 default:
  VAR_1 = VAR_0;
  return (-1);
 }
 return (VAR_5->f_seekp);
}
