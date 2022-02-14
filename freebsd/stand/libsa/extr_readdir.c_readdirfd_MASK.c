
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {int f_flags; TYPE_1__* f_ops; } ;
struct dirent {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* fo_readdir ) (struct open_file*,struct dirent*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct open_file* VAR_6 ;
 scalar_t__ FUNC_0 (struct open_file*,struct dirent*) ;

struct dirent *
FUNC_1(int VAR_7)
{
 static struct dirent VAR_8;
 struct open_file *VAR_9 = &VAR_6[VAR_7];

 if ((unsigned)VAR_7 >= VAR_4 || !(VAR_9->f_flags & VAR_3)) {
  VAR_5 = VAR_0;
  return (((void*)0));
 }
 if (VAR_9->f_flags & VAR_2) {
  VAR_5 = VAR_1;
  return (((void*)0));
 }
 VAR_5 = (VAR_9->f_ops->fo_readdir)(VAR_9, &VAR_8);
 if (VAR_5)
  return (((void*)0));
 return (&VAR_8);
}
