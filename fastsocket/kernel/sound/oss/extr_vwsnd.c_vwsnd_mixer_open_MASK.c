
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mixer_minor; struct TYPE_3__* next_dev; } ;
typedef TYPE_1__ vwsnd_dev_t ;
struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;


 int FUNC_0 (char*,struct inode*,struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_4, struct file *VAR_5)
{
 vwsnd_dev_t *VAR_6;

 FUNC_0("(inode=0x%p, file=0x%p)\n", VAR_4, VAR_5);

 VAR_2;
 for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->next_dev)
  if (VAR_6->mixer_minor == FUNC_1(VAR_4))
   break;

 if (VAR_6 == ((void*)0)) {
  VAR_0;
  return -VAR_1;
 }
 VAR_5->private_data = VAR_6;
 return 0;
}
