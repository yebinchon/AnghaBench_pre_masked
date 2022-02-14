
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int bulk_transfer_mutex; int id; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_12__ {int fourcc; } ;
struct TYPE_16__ {scalar_t__ process; scalar_t__ remote_insert; scalar_t__ local_insert; TYPE_4__* bulks; } ;
struct TYPE_14__ {int remoteport; TYPE_1__ base; TYPE_5__ bulk_tx; int localport; TYPE_2__* state; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;
struct TYPE_15__ {scalar_t__ actual; scalar_t__ remote_data; scalar_t__ data; int remote_size; int size; } ;
typedef TYPE_4__ VCHIQ_BULK_T ;
typedef TYPE_5__ VCHIQ_BULK_QUEUE_T ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_8 (int ,char*,char const*,int ,int ,int ,unsigned int,unsigned int,...) ;
 int FUNC_9 (int ,char*,int ,int ,char,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_11(VCHIQ_SERVICE_T *VAR_3, VCHIQ_BULK_QUEUE_T *VAR_4)
{
 VCHIQ_STATE_T *VAR_5 = VAR_3->state;
 int VAR_6 = 0;
 int VAR_7;

 while ((VAR_4->process != VAR_4->local_insert) &&
  (VAR_4->process != VAR_4->remote_insert)) {
  VCHIQ_BULK_T *VAR_8 = &VAR_4->bulks[FUNC_0(VAR_4->process)];

  FUNC_9(VAR_2,
   "%d: rb:%d %cx - li=%x ri=%x p=%x",
   VAR_5->id, VAR_3->localport,
   (VAR_4 == &VAR_3->bulk_tx) ? 't' : 'r',
   VAR_4->local_insert, VAR_4->remote_insert,
   VAR_4->process);

  FUNC_4(!((int)(VAR_4->local_insert - VAR_4->process) > 0));
  FUNC_4(!((int)(VAR_4->remote_insert - VAR_4->process) > 0));

  VAR_7 = FUNC_5(&VAR_5->bulk_transfer_mutex);
  if (VAR_7 != 0)
   break;

  FUNC_10(VAR_8);
  FUNC_6(&VAR_5->bulk_transfer_mutex);

  if (FUNC_1(VAR_3, VAR_1)) {
   const char *VAR_9 = (VAR_4 == &VAR_3->bulk_tx) ?
    "Send Bulk to" : "Recv Bulk from";
   if (VAR_8->actual != VAR_0)
    FUNC_8(FUNC_2(VAR_3),
     "%s %c%c%c%c d:%d len:%d %x<->%x",
     VAR_9,
     FUNC_3(
      VAR_3->base.fourcc),
     VAR_3->remoteport,
     VAR_8->size,
     (unsigned int)VAR_8->data,
     (unsigned int)VAR_8->remote_data);
   else
    FUNC_8(FUNC_2(VAR_3),
     "%s %c%c%c%c d:%d ABORTED - tx len:%d,"
     " rx len:%d %x<->%x",
     VAR_9,
     FUNC_3(
      VAR_3->base.fourcc),
     VAR_3->remoteport,
     VAR_8->size,
     VAR_8->remote_size,
     (unsigned int)VAR_8->data,
     (unsigned int)VAR_8->remote_data);
  }

  FUNC_7(VAR_8);
  VAR_4->process++;
  VAR_6++;
 }
 return VAR_6;
}
