
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* swstate; } ;
typedef TYPE_1__ vwsnd_port_t ;
struct TYPE_9__ {int open_mode; int open_wait; int open_mutex; int io_mutex; TYPE_1__ wport; TYPE_1__ rport; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct inode {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;


 int FUNC_0 (char*,struct inode*,struct file*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_4, struct file *VAR_5)
{
 vwsnd_dev_t *VAR_6 = (vwsnd_dev_t *) VAR_5->private_data;
 vwsnd_port_t *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_2();
 FUNC_3(&VAR_6->io_mutex);
 {
  FUNC_0("(inode=0x%p, file=0x%p)\n", VAR_4, VAR_5);

  if (VAR_5->f_mode & VAR_1)
   VAR_8 = &VAR_6->rport;
  if (VAR_5->f_mode & VAR_2) {
   VAR_7 = &VAR_6->wport;
   FUNC_5(VAR_6);
   FUNC_7(VAR_6);
  }
  FUNC_6(VAR_6, VAR_8, VAR_7);
  if (VAR_8)
   VAR_8->swstate = VAR_3;
  if (VAR_7)
   VAR_7->swstate = VAR_3;
 }
 FUNC_4(&VAR_6->io_mutex);

 FUNC_3(&VAR_6->open_mutex);
 {
  VAR_6->open_mode &= ~VAR_5->f_mode;
 }
 FUNC_4(&VAR_6->open_mutex);
 FUNC_9(&VAR_6->open_wait);
 VAR_0;
 FUNC_1();
 FUNC_8();
 return VAR_9;
}
