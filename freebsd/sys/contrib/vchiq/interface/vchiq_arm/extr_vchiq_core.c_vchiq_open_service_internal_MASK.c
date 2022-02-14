
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct vchiq_open_payload {int member_1; int member_3; int member_2; int member_0; } ;
typedef int payload ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_10__ {int fourcc; } ;
struct TYPE_11__ {int client_id; scalar_t__ srvstate; int ref_count; TYPE_7__* state; int remove_event; int localport; int version_min; int version; TYPE_1__ base; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
struct TYPE_12__ {int member_1; struct vchiq_open_payload* member_0; } ;
typedef TYPE_3__ VCHIQ_ELEMENT_T ;
struct TYPE_13__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_7__*,int *,int ,TYPE_3__*,int,int,int ) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

VCHIQ_STATUS_T
FUNC_7(VCHIQ_SERVICE_T *VAR_11, int VAR_12)
{
 struct vchiq_open_payload VAR_13 = {
  VAR_11->base.fourcc,
  VAR_12,
  VAR_11->version,
  VAR_11->version_min
 };
 VCHIQ_ELEMENT_T VAR_14 = { &VAR_13, sizeof(VAR_13) };
 VCHIQ_STATUS_T VAR_15 = VAR_7;

 VAR_11->client_id = VAR_12;
 FUNC_6(VAR_11);
 VAR_15 = FUNC_3(VAR_11->state, ((void*)0),
  FUNC_0(VAR_2, VAR_11->localport, 0),
  &VAR_14, 1, sizeof(VAR_13), VAR_0);
 if (VAR_15 == VAR_7) {

  if (FUNC_2(&VAR_11->remove_event) != 0) {
   VAR_15 = VAR_3;
   FUNC_5(VAR_11);
  } else if ((VAR_11->srvstate != VAR_5) &&
   (VAR_11->srvstate != VAR_6)) {
   if (VAR_11->srvstate != VAR_4)
    FUNC_4(VAR_10,
     "%d: osi - srvstate = %s (ref %d)",
     VAR_11->state->id,
     VAR_9[VAR_11->srvstate],
     VAR_11->ref_count);
   VAR_15 = VAR_1;
   FUNC_1(VAR_11, VAR_8);
   FUNC_5(VAR_11);
  }
 }
 return VAR_15;
}
