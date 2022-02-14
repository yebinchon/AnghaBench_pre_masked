
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dsp_minor; int mixer_minor; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 FUNC_2();
 if (VAR_4 == VAR_1.dsp_minor)
  VAR_5 = FUNC_0(VAR_3);
 else if (VAR_4 == VAR_1.mixer_minor) {

 } else
  VAR_5 = -VAR_0;
 FUNC_3();
 return VAR_5;
}
