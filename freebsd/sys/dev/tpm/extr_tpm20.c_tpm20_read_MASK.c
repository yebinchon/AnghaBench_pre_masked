
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_resid; TYPE_1__* uio_td; } ;
struct tpm_sc {scalar_t__ owner_tid; int dev_lock; int buf_cv; scalar_t__ pending_data_length; scalar_t__ buf; int discard_buffer_callout; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef int caddr_t ;
struct TYPE_2__ {scalar_t__ td_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,size_t,struct uio*) ;

int
FUNC_7(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 struct tpm_sc *VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;

 VAR_6 = (struct tpm_sc *)VAR_3->si_drv1;

 FUNC_1(&VAR_6->discard_buffer_callout);
 FUNC_4(&VAR_6->dev_lock);
 if (VAR_6->owner_tid != VAR_4->uio_td->td_tid) {
  FUNC_5(&VAR_6->dev_lock);
  return (VAR_0);
 }

 VAR_7 = FUNC_0(VAR_6->pending_data_length, VAR_4->uio_resid);
 if (VAR_7 > 0) {
  VAR_8 = FUNC_6((caddr_t) VAR_6->buf, VAR_7, VAR_4);
  FUNC_3(VAR_6->buf, 0, VAR_2);
  VAR_6->pending_data_length = 0;
  FUNC_2(&VAR_6->buf_cv);
 } else {
  VAR_8 = VAR_1;
 }

 FUNC_5(&VAR_6->dev_lock);

 return (VAR_8);
}
