
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int poll_table ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct file*,int,int *) ;
 unsigned int FUNC_2 (int,struct file*,int *) ;






 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,int) ;
 unsigned int FUNC_5 (int,struct file*,int *) ;

__attribute__((used)) static unsigned int FUNC_6(struct file *VAR_0, poll_table * VAR_1)
{
 struct inode *VAR_2 = VAR_0->f_path.dentry->d_inode;
 int VAR_3 = FUNC_3(VAR_2);

 FUNC_0(FUNC_4("sound_poll(dev=%d)\n", VAR_3));
 switch (VAR_3 & 0x0f) {
 case 129:
 case 128:
  return FUNC_5(VAR_3, VAR_0, VAR_1);

 case 130:
  return FUNC_2(VAR_3, VAR_0, VAR_1);

 case 132:
 case 131:
 case 133:
  return FUNC_1(VAR_0, VAR_3 >> 4, VAR_1);
 }
 return 0;
}
