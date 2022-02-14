
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct open_file {int f_flags; int * f_devdata; TYPE_2__* f_dev; TYPE_1__* f_ops; int * f_rabuf; } ;
struct TYPE_4__ {int (* dv_close ) (struct open_file*) ;} ;
struct TYPE_3__ {int (* fo_close ) (struct open_file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct open_file*) ;
 int VAR_4 ;
 struct open_file* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct open_file*) ;
 int FUNC_3 (struct open_file*) ;

int
FUNC_4(int VAR_6)
{
 struct open_file *VAR_7 = &VAR_5[VAR_6];
 int VAR_8 = 0, VAR_9 = 0;

 if ((unsigned)VAR_6 >= VAR_3 || VAR_7->f_flags == 0) {
  VAR_4 = VAR_0;
  return (-1);
 }
 FUNC_1(VAR_7->f_rabuf);
 VAR_7->f_rabuf = ((void*)0);

 if (!(VAR_7->f_flags & VAR_2) && VAR_7->f_ops)
  VAR_8 = (VAR_7->f_ops->fo_close)(VAR_7);
 if (!(VAR_7->f_flags & VAR_1) && VAR_7->f_dev)
  VAR_9 = (VAR_7->f_dev->dv_close)(VAR_7);
 if (VAR_7->f_devdata != ((void*)0))
  FUNC_0(VAR_7);
 VAR_7->f_flags = 0;
 if (VAR_8) {
  VAR_4 = VAR_8;
  return (-1);
 }
 if (VAR_9) {
  VAR_4 = VAR_9;
  return (-1);
 }
 return (0);
}
