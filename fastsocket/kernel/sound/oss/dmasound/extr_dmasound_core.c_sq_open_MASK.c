
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct TYPE_3__ {int owner; int default_hard; int default_soft; int (* sq_open ) (int) ;} ;
struct TYPE_4__ {int minDev; TYPE_1__ mach; int hard; int dsp; int soft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_7, struct file *VAR_8)
{
 int VAR_9;

 if (!FUNC_6(VAR_5.mach.owner))
  return -VAR_1;

 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9)
  goto out;
 if (VAR_8->f_mode & VAR_3) {

  VAR_9 = -VAR_2 ;
  goto out;
 }

 if (VAR_5.mach.sq_open)
     VAR_5.mach.sq_open(VAR_8->f_mode);





 VAR_5.minDev = FUNC_0(VAR_7) & 0x0f;






 if (VAR_6 == 0) {


  VAR_5.soft = VAR_5.mach.default_soft ;
  VAR_5.dsp = VAR_5.mach.default_soft ;
  VAR_5.hard = VAR_5.mach.default_hard ;
 }





 if (VAR_5.minDev == VAR_4) {
  FUNC_3(8000);
  FUNC_4(0);
  FUNC_2(VAR_0);
 }


 return 0;
 out:
 FUNC_1(VAR_5.mach.owner);
 return VAR_9;
}
