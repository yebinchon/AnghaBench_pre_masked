
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {void* private_data; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (long,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;
 long VAR_7;

 FUNC_2();
 VAR_7 = FUNC_0(FUNC_1(VAR_4));
 if (VAR_7 >= 0) {
  VAR_5->private_data = (void *)VAR_7;
  FUNC_4(VAR_3, "process_%d", VAR_2->pid);
  VAR_6 = FUNC_3(VAR_7, VAR_3,
     VAR_1);
  if (VAR_6 >= 0) {
   FUNC_5();
   return 0;
  }
 }
 FUNC_5();

 return -VAR_0;
}
