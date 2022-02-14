
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct ctio_descr* sival_ptr; } ;
struct sigevent {TYPE_3__ sigev_value; int sigev_notify_kqueue; int sigev_notify; } ;
struct TYPE_5__ {struct sigevent aio_sigevent; int aio_fildes; int * aio_buf; } ;
struct TYPE_4__ {int retry_count; struct ctio_descr* targ_descr; int timeout; int func_code; } ;
struct ctio_descr {TYPE_2__ aiocb; int * buf; TYPE_1__ ccb_h; int * data_ptr; } ;
struct ccb_scsiio {TYPE_2__ aiocb; int * buf; TYPE_1__ ccb_h; int * data_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ctio_descr*) ;
 int VAR_6 ;
 int * FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct ccb_scsiio *
FUNC_4()
{
 struct ccb_scsiio *VAR_8;
 struct ctio_descr *VAR_9;
 struct sigevent *VAR_10;

 if (VAR_7 == VAR_1) {
  FUNC_3("at CTIO max");
  return (((void*)0));
 }

 VAR_8 = (struct ccb_scsiio *)FUNC_1(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_2("malloc CTIO");
  return (((void*)0));
 }
 VAR_9 = (struct ctio_descr *)FUNC_1(sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_8);
  FUNC_2("malloc ctio_descr");
  return (((void*)0));
 }
 VAR_9->buf = FUNC_1(VAR_4);
 if (VAR_9->buf == ((void*)0)) {
  FUNC_0(VAR_9);
  FUNC_0(VAR_8);
  FUNC_2("malloc backing store");
  return (((void*)0));
 }
 VAR_7++;


 VAR_8->ccb_h.func_code = VAR_3;
 VAR_8->ccb_h.retry_count = 2;
 VAR_8->ccb_h.timeout = VAR_0;
 VAR_8->data_ptr = VAR_9->buf;
 VAR_8->ccb_h.targ_descr = VAR_9;
 VAR_9->aiocb.aio_buf = VAR_9->buf;
 VAR_9->aiocb.aio_fildes = VAR_5;
 VAR_10 = &VAR_9->aiocb.aio_sigevent;
 VAR_10->sigev_notify = VAR_2;
 VAR_10->sigev_notify_kqueue = VAR_6;
 VAR_10->sigev_value.sival_ptr = VAR_8;

 return (VAR_8);
}
