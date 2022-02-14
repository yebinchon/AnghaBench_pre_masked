
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * swbuf; int queue; } ;
typedef TYPE_1__ vwsnd_port_t ;
struct TYPE_5__ {TYPE_1__ wport; TYPE_1__ rport; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct poll_table_struct {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct file*,struct poll_table_struct*) ;
 int FUNC_2 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (struct file*,int *,struct poll_table_struct*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_6,
         struct poll_table_struct *VAR_7)
{
 vwsnd_dev_t *VAR_8 = (vwsnd_dev_t *) VAR_6->private_data;
 vwsnd_port_t *VAR_9 = (VAR_6->f_mode & VAR_0) ?
  &VAR_8->rport : ((void*)0);
 vwsnd_port_t *VAR_10 = (VAR_6->f_mode & VAR_1) ?
  &VAR_8->wport : ((void*)0);
 unsigned int VAR_11 = 0;

 FUNC_1("(file=0x%p, wait=0x%p)\n", VAR_6, VAR_7);

 FUNC_0(VAR_9 || VAR_10);
 if (VAR_9) {
  FUNC_3(VAR_6, &VAR_9->queue, VAR_7);
  if (FUNC_4(VAR_9, 0))
   VAR_11 |= (VAR_2 | VAR_4);
 }
 if (VAR_10) {
  FUNC_3(VAR_6, &VAR_10->queue, VAR_7);
  if (VAR_10->swbuf == ((void*)0) || FUNC_4(VAR_10, 0))
   VAR_11 |= (VAR_3 | VAR_5);
 }

 FUNC_2("returning 0x%x\n", VAR_11);
 return VAR_11;
}
