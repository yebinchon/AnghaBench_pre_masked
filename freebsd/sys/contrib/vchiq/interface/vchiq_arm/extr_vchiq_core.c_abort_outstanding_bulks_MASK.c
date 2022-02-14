
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int fourcc; } ;
struct TYPE_14__ {scalar_t__ process; scalar_t__ local_insert; scalar_t__ remote_insert; TYPE_4__* bulks; } ;
struct TYPE_12__ {int remoteport; TYPE_2__ base; int localport; TYPE_1__* state; TYPE_5__ bulk_tx; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;
struct TYPE_13__ {int dir; int actual; scalar_t__ size; int * data; scalar_t__ remote_size; int * remote_data; } ;
typedef TYPE_4__ VCHIQ_BULK_T ;
typedef TYPE_5__ VCHIQ_BULK_QUEUE_T ;
struct TYPE_10__ {int id; } ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,char*,int ,int ,char,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(VCHIQ_SERVICE_T *VAR_4, VCHIQ_BULK_QUEUE_T *VAR_5)
{
 int VAR_6 = (VAR_5 == &VAR_4->bulk_tx);
 FUNC_6(VAR_3,
  "%d: aob:%d %cx - li=%x ri=%x p=%x",
  VAR_4->state->id, VAR_4->localport, VAR_6 ? 't' : 'r',
  VAR_5->local_insert, VAR_5->remote_insert, VAR_5->process);

 FUNC_3(!((int)(VAR_5->local_insert - VAR_5->process) >= 0));
 FUNC_3(!((int)(VAR_5->remote_insert - VAR_5->process) >= 0));

 while ((VAR_5->process != VAR_5->local_insert) ||
  (VAR_5->process != VAR_5->remote_insert)) {
  VCHIQ_BULK_T *VAR_7 = &VAR_5->bulks[FUNC_0(VAR_5->process)];

  if (VAR_5->process == VAR_5->remote_insert) {

   VAR_7->remote_data = ((void*)0);
   VAR_7->remote_size = 0;
   VAR_5->remote_insert++;
  }

  if (VAR_5->process != VAR_5->local_insert) {
   FUNC_4(VAR_7);

   FUNC_5(FUNC_1(VAR_4),
    "%s %c%c%c%c d:%d ABORTED - tx len:%d, "
    "rx len:%d",
    VAR_6 ? "Send Bulk to" : "Recv Bulk from",
    FUNC_2(VAR_4->base.fourcc),
    VAR_4->remoteport,
    VAR_7->size,
    VAR_7->remote_size);
  } else {

   VAR_7->data = ((void*)0);
   VAR_7->size = 0;
   VAR_7->actual = VAR_0;
   VAR_7->dir = VAR_6 ? VAR_2 :
    VAR_1;
   VAR_5->local_insert++;
  }

  VAR_5->process++;
 }
}
