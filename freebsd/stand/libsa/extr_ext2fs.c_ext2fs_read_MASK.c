
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_2__ {scalar_t__ di_size; } ;
struct file {scalar_t__ f_seekp; TYPE_1__ f_di; } ;


 int FUNC_0 (char*,void*,size_t) ;
 int FUNC_1 (struct open_file*,char**,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_0, void *VAR_1, size_t VAR_2, size_t *VAR_3)
{
 struct file *VAR_4 = (struct file *)VAR_0->f_fsdata;
 size_t VAR_5, VAR_6;
 char *VAR_7;
 int VAR_8 = 0;

 while (VAR_2 != 0) {
  if (VAR_4->f_seekp >= VAR_4->f_di.di_size)
   break;

  VAR_8 = FUNC_1(VAR_0, &VAR_7, &VAR_6);
  if (VAR_8)
   break;

  VAR_5 = VAR_2;
  if (VAR_5 > VAR_6)
   VAR_5 = VAR_6;

  FUNC_0(VAR_7, VAR_1, VAR_5);

  VAR_4->f_seekp += VAR_5;
  VAR_1 = (char *)VAR_1 + VAR_5;
  VAR_2 -= VAR_5;
 }
 if (VAR_3)
  *VAR_3 = VAR_2;
 return (VAR_8);
}
