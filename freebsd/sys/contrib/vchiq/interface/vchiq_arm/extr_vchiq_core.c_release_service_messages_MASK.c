
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {char* rx_data; unsigned int rx_pos; TYPE_1__* remote; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_17__ {scalar_t__ release_count; scalar_t__ use_count; } ;
typedef TYPE_3__ VCHIQ_SLOT_INFO_T ;
struct TYPE_18__ {scalar_t__ localport; scalar_t__ sync; TYPE_2__* state; } ;
typedef TYPE_4__ VCHIQ_SERVICE_T ;
struct TYPE_19__ {int msgid; int size; } ;
typedef TYPE_5__ VCHIQ_HEADER_T ;
struct TYPE_15__ {int slot_last; int slot_sync; int slot_first; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_5__*,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,unsigned int,unsigned int,int,int,int ) ;
 int FUNC_8 (int ,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_9(VCHIQ_SERVICE_T *VAR_4)
{
 VCHIQ_STATE_T *VAR_5 = VAR_4->state;
 int VAR_6 = VAR_5->remote->slot_last;
 int VAR_7;



 if (VAR_4->sync) {
  VCHIQ_HEADER_T *VAR_8 =
   (VCHIQ_HEADER_T *)FUNC_0(VAR_5,
      VAR_5->remote->slot_sync);
  if (FUNC_2(VAR_8->msgid) == VAR_4->localport)
   FUNC_5(VAR_5, VAR_8);

  return;
 }

 for (VAR_7 = VAR_5->remote->slot_first; VAR_7 <= VAR_6; VAR_7++) {
  VCHIQ_SLOT_INFO_T *VAR_9 =
   FUNC_1(VAR_5, VAR_7);
  if (VAR_9->release_count != VAR_9->use_count) {
   char *VAR_10 =
    (char *)FUNC_0(VAR_5, VAR_7);
   unsigned int VAR_11, VAR_12;

   VAR_12 = VAR_2;
   if (VAR_10 == VAR_5->rx_data)


    VAR_12 = VAR_5->rx_pos & VAR_1;

   VAR_11 = 0;

   while (VAR_11 < VAR_12) {
    VCHIQ_HEADER_T *VAR_13 =
     (VCHIQ_HEADER_T *)(VAR_10 + VAR_11);
    int VAR_14 = VAR_13->msgid;
    int VAR_15 = FUNC_2(VAR_14);
    if ((VAR_15 == VAR_4->localport) &&
     (VAR_14 & VAR_0)) {
     FUNC_8(VAR_3,
      "  fsi - hdr %x",
      (unsigned int)VAR_13);
     FUNC_6(VAR_5, VAR_9, VAR_13,
      ((void*)0));
    }
    VAR_11 += FUNC_4(VAR_13->size);
    if (VAR_11 > VAR_2) {
     FUNC_7(VAR_3,
      "fsi - pos %x: header %x, "
      "msgid %x, header->msgid %x, "
      "header->size %x",
      VAR_11, (unsigned int)VAR_13,
      VAR_14, VAR_13->msgid,
      VAR_13->size);
     FUNC_3(1, "invalid slot position\n");
    }
   }
  }
 }
}
