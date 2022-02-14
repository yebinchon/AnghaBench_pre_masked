
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct bt_devreq {scalar_t__ rlen; int event; int * rparam; int opcode; int clen; int cparam; } ;
struct bt_devfilter {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ type; int event; int status; int opcode; } ;
typedef TYPE_1__ ng_hci_event_pkt_t ;
typedef TYPE_1__ ng_hci_command_status_ep ;
typedef TYPE_1__ ng_hci_command_compl_ep ;
typedef int new ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,struct bt_devfilter*,struct bt_devfilter*) ;
 int FUNC_1 (struct bt_devfilter*,int) ;
 int FUNC_2 (struct bt_devfilter*,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int *,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_7 (struct bt_devfilter*,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9(int VAR_5, struct bt_devreq *VAR_6, time_t VAR_7)
{
 uint8_t VAR_8[320];
 ng_hci_event_pkt_t *VAR_9 = (ng_hci_event_pkt_t *) VAR_8;
 ng_hci_command_compl_ep *VAR_10 = (ng_hci_command_compl_ep *)(VAR_9+1);
 ng_hci_command_status_ep *VAR_11 = (ng_hci_command_status_ep*)(VAR_9+1);
 struct bt_devfilter VAR_12, VAR_13;
 time_t VAR_14;
 uint16_t VAR_15;
 ssize_t VAR_16;
 int VAR_17;

 if (VAR_5 < 0 || VAR_6 == ((void*)0) || VAR_7 < 0) {
  VAR_4 = VAR_0;
  return (-1);
 }

 if ((VAR_6->rlen == 0 && VAR_6->rparam != ((void*)0)) ||
     (VAR_6->rlen > 0 && VAR_6->rparam == ((void*)0))) {
  VAR_4 = VAR_0;
  return (-1);
 }

 FUNC_7(&VAR_13, 0, sizeof(VAR_13));
 FUNC_2(&VAR_13, VAR_3);
 FUNC_1(&VAR_13, 129);
 FUNC_1(&VAR_13, 128);
 if (VAR_6->event != 0)
  FUNC_1(&VAR_13, VAR_6->event);

 if (FUNC_0(VAR_5, &VAR_13, &VAR_12) < 0)
  return (-1);

 VAR_17 = 0;

 VAR_16 = FUNC_4(VAR_5, VAR_6->opcode, VAR_6->cparam, VAR_6->clen);
 if (VAR_16 < 0) {
  VAR_17 = VAR_4;
  goto out;
 }

 VAR_15 = FUNC_5(VAR_6->opcode);
 VAR_14 = FUNC_8(((void*)0)) + VAR_7;

 do {
  VAR_7 = VAR_14 - FUNC_8(((void*)0));
  if (VAR_7 < 0)
   VAR_7 = 0;

  VAR_16 = FUNC_3(VAR_5, VAR_8, sizeof(VAR_8), VAR_7);
  if (VAR_16 < 0) {
   VAR_17 = VAR_4;
   goto out;
  }

  if (VAR_9->type != VAR_3) {
   VAR_17 = VAR_1;
   goto out;
  }

  VAR_16 -= sizeof(*VAR_9);

  switch (VAR_9->event) {
  case 129:
   if (VAR_10->opcode == VAR_15) {
    VAR_16 -= sizeof(*VAR_10);

    if (VAR_6->rlen >= VAR_16) {
     VAR_6->rlen = VAR_16;
     FUNC_6(VAR_6->rparam, VAR_10 + 1, VAR_6->rlen);
    }

    goto out;
   }
   break;

  case 128:
   if (VAR_11->opcode == VAR_15) {
    if (VAR_6->event != 128) {
     if (VAR_11->status != 0) {
      VAR_17 = VAR_1;
      goto out;
     }
    } else {
     if (VAR_6->rlen >= VAR_16) {
      VAR_6->rlen = VAR_16;
      FUNC_6(VAR_6->rparam, VAR_11, VAR_6->rlen);
     }

     goto out;
    }
   }
   break;

  default:
   if (VAR_9->event == VAR_6->event) {
    if (VAR_6->rlen >= VAR_16) {
     VAR_6->rlen = VAR_16;
     FUNC_6(VAR_6->rparam, VAR_9 + 1, VAR_6->rlen);
    }

    goto out;
   }
   break;
  }
 } while (VAR_7 > 0);

 VAR_17 = VAR_2;
out:
 FUNC_0(VAR_5, &VAR_12, ((void*)0));

 if (VAR_17 != 0) {
  VAR_4 = VAR_17;
  return (-1);
 }

 return (0);
}
