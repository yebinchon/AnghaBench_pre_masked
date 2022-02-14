
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct vchiq_openack_payload {short member_0; } ;
struct vchiq_open_payload {unsigned int fourcc; short version; short version_min; } ;
typedef int ack_payload ;
struct TYPE_16__ {scalar_t__ version_common; int id; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_17__ {short version; short version_min; short peer_version; scalar_t__ srvstate; unsigned int remoteport; int client_id; scalar_t__ sync; int localport; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
struct TYPE_18__ {int msgid; int size; scalar_t__ data; } ;
typedef TYPE_3__ VCHIQ_HEADER_T ;
struct TYPE_19__ {int member_1; struct vchiq_openack_payload* member_0; } ;
typedef TYPE_4__ VCHIQ_ELEMENT_T ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int) ;
 int VAR_1 ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* FUNC_4 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int ,TYPE_4__*,int,int,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,int ,TYPE_4__*,int,int,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_9 (int ,char*,int ,unsigned int,unsigned int,int ) ;
 int FUNC_10 (char*,int ,int ,int ,short,short,short,short) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_14(VCHIQ_STATE_T *VAR_10, VCHIQ_HEADER_T *VAR_11)
{
 VCHIQ_SERVICE_T *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;

 VAR_13 = VAR_11->msgid;
 VAR_14 = VAR_11->size;

 VAR_15 = FUNC_2(VAR_13);
 VAR_16 = FUNC_3(VAR_13);
 if (VAR_14 >= sizeof(struct vchiq_open_payload)) {
  const struct vchiq_open_payload *VAR_17 =
   (struct vchiq_open_payload *)VAR_11->data;
  unsigned int VAR_18;

  VAR_18 = VAR_17->fourcc;
  FUNC_9(VAR_9,
   "%d: prs OPEN@%x (%d->'%c%c%c%c')",
   VAR_10->id, (unsigned int)VAR_11,
   VAR_15,
   FUNC_0(VAR_18));

  VAR_12 = FUNC_4(VAR_10, VAR_18);

  if (VAR_12) {

   short VAR_19 = VAR_17->version;
   short VAR_20 = VAR_17->version_min;
   if ((VAR_12->version < VAR_20) ||
    (VAR_19 < VAR_12->version_min)) {

    FUNC_12();
    FUNC_10("%d: service %d (%c%c%c%c) "
     "version mismatch - local (%d, min %d)"
     " vs. remote (%d, min %d)",
     VAR_10->id, VAR_12->localport,
     FUNC_0(VAR_18),
     VAR_12->version, VAR_12->version_min,
     VAR_19, VAR_20);
    FUNC_11();
    FUNC_8(VAR_12);
    VAR_12 = ((void*)0);
    goto fail_open;
   }
   VAR_12->peer_version = VAR_19;

   if (VAR_12->srvstate == VAR_5) {
    struct vchiq_openack_payload VAR_21 = {
     VAR_12->version
    };
    VCHIQ_ELEMENT_T VAR_22 = {
     &VAR_21,
     sizeof(VAR_21)
    };

    if (VAR_10->version_common <
        VAR_8)
     VAR_12->sync = 0;


    if (VAR_12->sync &&
        (VAR_10->version_common >=
         VAR_8)) {
     if (FUNC_7(VAR_10, ((void*)0),
      FUNC_1(
       VAR_1,
       VAR_12->localport,
       VAR_16),
      &VAR_22, 1, sizeof(VAR_21),
      0) == VAR_3)
      goto bail_not_ready;
    } else {
     if (FUNC_6(VAR_10, ((void*)0),
      FUNC_1(
       VAR_1,
       VAR_12->localport,
       VAR_16),
      &VAR_22, 1, sizeof(VAR_21),
      0) == VAR_3)
      goto bail_not_ready;
    }


    FUNC_13(VAR_12,
     VAR_12->sync ? VAR_7
     : VAR_6);
   }

   VAR_12->remoteport = VAR_16;
   VAR_12->client_id = ((int *)VAR_11->data)[1];
   if (FUNC_5(VAR_12, VAR_4,
    ((void*)0), ((void*)0)) == VAR_3) {

    VAR_12->remoteport = VAR_2;
    goto bail_not_ready;
   }


   FUNC_8(VAR_12);
   return 1;
  }
 }

fail_open:

 if (FUNC_6(VAR_10, ((void*)0),
  FUNC_1(VAR_0, 0, FUNC_3(VAR_13)),
  ((void*)0), 0, 0, 0) == VAR_3)
  goto bail_not_ready;

 return 1;

bail_not_ready:
 if (VAR_12)
  FUNC_8(VAR_12);

 return 0;
}
