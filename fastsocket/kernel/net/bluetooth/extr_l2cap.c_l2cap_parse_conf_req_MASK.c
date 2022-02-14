
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct l2cap_pinfo {int conf_len; unsigned long flush_to; int num_conf_rsp; int mode; unsigned long omtu; unsigned long fcs; int dcid; int conf_state; int max_pdu_size; int remote_tx_win; int remote_max_tx; TYPE_1__* conn; scalar_t__ num_conf_req; void* conf_req; } ;
struct l2cap_conf_rsp {void* flags; void* result; void* scid; void* data; } ;
struct l2cap_conf_rfc {int mode; int max_pdu_size; int txwin_size; int monitor_timeout; int retrans_timeout; int max_transmit; } ;
typedef int rfc ;
struct TYPE_2__ {int feat_mask; } ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;



 void* FUNC_1 (int) ;
 int FUNC_2 (void**,int const,int,unsigned long) ;
 scalar_t__ FUNC_3 (void**,int*,int*,unsigned long*) ;
 int FUNC_4 (int,int ) ;
 struct l2cap_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct l2cap_conf_rfc*,void*,int) ;
 int FUNC_8 (struct l2cap_conf_rfc*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_17, void *VAR_18)
{
 struct l2cap_pinfo *VAR_19 = FUNC_5(VAR_17);
 struct l2cap_conf_rsp *VAR_20 = VAR_18;
 void *VAR_21 = VAR_20->data;
 void *VAR_22 = VAR_19->conf_req;
 int VAR_23 = VAR_19->conf_len;
 int VAR_24, VAR_25, VAR_26;
 unsigned long VAR_27;
 struct l2cap_conf_rfc VAR_28 = { .mode = 130 };
 u16 VAR_29 = VAR_14;
 u16 VAR_30 = VAR_9;

 FUNC_0("sk %p", VAR_17);

 while (VAR_23 >= VAR_6) {
  VAR_23 -= FUNC_3(&VAR_22, &VAR_24, &VAR_26, &VAR_27);

  VAR_25 = VAR_24 & VAR_1;
  VAR_24 &= VAR_2;

  switch (VAR_24) {
  case 133:
   VAR_29 = VAR_27;
   break;

  case 134:
   VAR_19->flush_to = VAR_27;
   break;

  case 132:
   break;

  case 131:
   if (VAR_26 == sizeof(VAR_28))
    FUNC_7(&VAR_28, (void *) VAR_27, VAR_26);
   break;

  case 135:
   if (VAR_27 == VAR_16)
    VAR_19->conf_state |= VAR_5;

   break;

  default:
   if (VAR_25)
    break;

   VAR_30 = VAR_11;
   *((u8 *) VAR_21++) = VAR_24;
   break;
  }
 }

 if (VAR_19->num_conf_rsp || VAR_19->num_conf_req)
  goto done;

 switch (VAR_19->mode) {
 case 128:
 case 129:
  VAR_19->conf_state |= VAR_8;
  if (!FUNC_4(VAR_19->mode, VAR_19->conn->feat_mask))
   return -VAR_0;
  break;
 default:
  VAR_19->mode = FUNC_6(VAR_28.mode, VAR_19->conn->feat_mask);
  break;
 }

done:
 if (VAR_19->mode != VAR_28.mode) {
  VAR_30 = VAR_10;
  VAR_28.mode = VAR_19->mode;

  if (VAR_19->num_conf_rsp == 1)
   return -VAR_0;

  FUNC_2(&VAR_21, 131,
     sizeof(VAR_28), (unsigned long) &VAR_28);
 }


 if (VAR_30 == VAR_9) {



  if (VAR_29 < VAR_12)
   VAR_30 = VAR_10;
  else {
   VAR_19->omtu = VAR_29;
   VAR_19->conf_state |= VAR_4;
  }
  FUNC_2(&VAR_21, 133, 2, VAR_19->omtu);

  switch (VAR_28.mode) {
  case 130:
   VAR_19->fcs = VAR_16;
   VAR_19->conf_state |= VAR_3;
   break;

  case 129:
   VAR_19->remote_tx_win = VAR_28.txwin_size;
   VAR_19->remote_max_tx = VAR_28.max_transmit;
   VAR_19->max_pdu_size = VAR_28.max_pdu_size;

   VAR_28.retrans_timeout = VAR_15;
   VAR_28.monitor_timeout = VAR_13;

   VAR_19->conf_state |= VAR_3;

   FUNC_2(&VAR_21, 131,
     sizeof(VAR_28), (unsigned long) &VAR_28);

   break;

  case 128:
   VAR_19->remote_tx_win = VAR_28.txwin_size;
   VAR_19->max_pdu_size = VAR_28.max_pdu_size;

   VAR_19->conf_state |= VAR_3;

   FUNC_2(&VAR_21, 131,
     sizeof(VAR_28), (unsigned long) &VAR_28);

   break;

  default:
   VAR_30 = VAR_10;

   FUNC_8(&VAR_28, 0, sizeof(VAR_28));
   VAR_28.mode = VAR_19->mode;
  }

  if (VAR_30 == VAR_9)
   VAR_19->conf_state |= VAR_7;
 }
 VAR_20->scid = FUNC_1(VAR_19->dcid);
 VAR_20->result = FUNC_1(VAR_30);
 VAR_20->flags = FUNC_1(0x0000);

 return VAR_21 - VAR_18;
}
