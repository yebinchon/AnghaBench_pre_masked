
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int local_tx_pos; char* tx_data; int slot_queue_available; int slot_available_event; TYPE_1__* remote; TYPE_3__* local; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_11__ {int tx_pos; int* slot_queue; } ;
typedef TYPE_3__ VCHIQ_SHARED_STATE_T ;
struct TYPE_12__ {int size; int msgid; } ;
typedef TYPE_4__ VCHIQ_HEADER_T ;
struct TYPE_9__ {int trigger; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 size_t FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;

__attribute__((used)) static VCHIQ_HEADER_T *
FUNC_8(VCHIQ_STATE_T *VAR_5, int VAR_6, int VAR_7)
{
 VCHIQ_SHARED_STATE_T *VAR_8 = VAR_5->local;
 int VAR_9 = VAR_5->local_tx_pos;
 int VAR_10 = VAR_3 - (VAR_9 & VAR_1);

 if (VAR_6 > VAR_10) {
  VCHIQ_HEADER_T *VAR_11;

  FUNC_4(VAR_5->tx_data == ((void*)0));
  VAR_11 = (VCHIQ_HEADER_T *)
   (VAR_5->tx_data + (VAR_9 & VAR_1));
  VAR_11->msgid = VAR_0;
  VAR_11->size = VAR_10 - sizeof(VCHIQ_HEADER_T);

  VAR_9 += VAR_10;
 }


 if ((VAR_9 & VAR_1) == 0) {
  int VAR_12;



  if (FUNC_6(&VAR_5->slot_available_event) != 0) {


   FUNC_3(VAR_5, VAR_4);


   VAR_5->local_tx_pos = VAR_9;
   VAR_8->tx_pos = VAR_9;
   FUNC_7(&VAR_5->remote->trigger);

   if (!VAR_7 ||
    (FUNC_5(
    &VAR_5->slot_available_event) != 0))
    return ((void*)0);
  }

  FUNC_0(VAR_9 ==
   (VAR_5->slot_queue_available * VAR_3));

  VAR_12 = VAR_8->slot_queue[
   FUNC_2(VAR_9) &
   VAR_2];
  VAR_5->tx_data =
   (char *)FUNC_1(VAR_5, VAR_12);
 }

 VAR_5->local_tx_pos = VAR_9 + VAR_6;

 return (VCHIQ_HEADER_T *)(VAR_5->tx_data + (VAR_9 & VAR_1));
}
