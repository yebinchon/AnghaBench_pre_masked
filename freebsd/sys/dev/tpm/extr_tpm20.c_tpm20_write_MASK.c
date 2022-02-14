
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {size_t uio_resid; TYPE_1__* uio_td; } ;
struct tpm_sc {scalar_t__ pending_data_length; int (* transmit ) (struct tpm_sc*,size_t) ;int dev_lock; int owner_tid; int discard_buffer_callout; int buf; int buf_cv; int dev; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct TYPE_2__ {int td_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,struct tpm_sc*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct tpm_sc*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,size_t,struct uio*) ;

int
FUNC_7(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 struct tpm_sc *VAR_10;
 size_t VAR_11;
 int VAR_12 = 0;

 VAR_10 = (struct tpm_sc *)VAR_7->si_drv1;

 VAR_11 = VAR_8->uio_resid;
 if (VAR_11 < VAR_3) {
  FUNC_2(VAR_10->dev,
      "Requested transfer is too small\n");
  return (VAR_1);
 }

 if (VAR_11 > VAR_2) {
  FUNC_2(VAR_10->dev,
      "Requested transfer is too large\n");
  return (VAR_0);
 }

 FUNC_4(&VAR_10->dev_lock);

 while (VAR_10->pending_data_length != 0)
  FUNC_1(&VAR_10->buf_cv, &VAR_10->dev_lock);

 VAR_12 = FUNC_6(VAR_10->buf, VAR_11, VAR_8);
 if (VAR_12 != 0) {
  FUNC_5(&VAR_10->dev_lock);
  return (VAR_12);
 }

 VAR_12 = VAR_10->transmit(VAR_10, VAR_11);

 if (VAR_12 == 0) {
  FUNC_0(&VAR_10->discard_buffer_callout,
      VAR_4 / VAR_5, VAR_6, VAR_10);
  VAR_10->owner_tid = VAR_8->uio_td->td_tid;
 }

 FUNC_5(&VAR_10->dev_lock);
 return (VAR_12);
}
