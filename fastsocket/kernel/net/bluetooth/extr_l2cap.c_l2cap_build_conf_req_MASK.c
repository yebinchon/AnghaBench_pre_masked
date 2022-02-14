
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct l2cap_pinfo {int mode; int conf_state; unsigned long imtu; void* fcs; int dcid; TYPE_1__* conn; scalar_t__ num_conf_rsp; scalar_t__ num_conf_req; } ;
struct l2cap_conf_rfc {int mode; void* max_pdu_size; int monitor_timeout; int retrans_timeout; int max_transmit; int txwin_size; } ;
struct l2cap_conf_req {void* flags; void* dcid; void* data; } ;
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
 unsigned long VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;



 void* FUNC_1 (int ) ;
 int FUNC_2 (void**,int ,int,unsigned long) ;
 int FUNC_3 (int,int) ;
 struct l2cap_pinfo* FUNC_4 (struct sock*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__*,struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_11, void *VAR_12)
{
 struct l2cap_pinfo *VAR_13 = FUNC_4(VAR_11);
 struct l2cap_conf_req *VAR_14 = VAR_12;
 struct l2cap_conf_rfc VAR_15 = { .mode = 130 };
 void *VAR_16 = VAR_14->data;

 FUNC_0("sk %p", VAR_11);

 if (VAR_13->num_conf_req || VAR_13->num_conf_rsp)
  goto done;

 switch (VAR_13->mode) {
 case 128:
 case 129:
  VAR_13->conf_state |= VAR_4;
  if (!FUNC_3(VAR_13->mode, VAR_13->conn->feat_mask))
   FUNC_6(VAR_13->conn, VAR_11);
  break;
 default:
  VAR_13->mode = FUNC_5(VAR_15.mode, VAR_13->conn->feat_mask);
  break;
 }

done:
 switch (VAR_13->mode) {
 case 130:
  if (VAR_13->imtu != VAR_7)
   FUNC_2(&VAR_16, VAR_1, 2, VAR_13->imtu);
  break;

 case 129:
  VAR_15.mode = 129;
  VAR_15.txwin_size = VAR_8;
  VAR_15.max_transmit = VAR_6;
  VAR_15.retrans_timeout = 0;
  VAR_15.monitor_timeout = 0;
  VAR_15.max_pdu_size = FUNC_1(VAR_5);

  FUNC_2(&VAR_16, VAR_3,
     sizeof(VAR_15), (unsigned long) &VAR_15);

  if (!(VAR_13->conn->feat_mask & VAR_10))
   break;

  if (VAR_13->fcs == VAR_9 ||
    VAR_13->conf_state & VAR_2) {
   VAR_13->fcs = VAR_9;
   FUNC_2(&VAR_16, VAR_0, 1, VAR_13->fcs);
  }
  break;

 case 128:
  VAR_15.mode = 128;
  VAR_15.txwin_size = 0;
  VAR_15.max_transmit = 0;
  VAR_15.retrans_timeout = 0;
  VAR_15.monitor_timeout = 0;
  VAR_15.max_pdu_size = FUNC_1(VAR_5);

  FUNC_2(&VAR_16, VAR_3,
     sizeof(VAR_15), (unsigned long) &VAR_15);

  if (!(VAR_13->conn->feat_mask & VAR_10))
   break;

  if (VAR_13->fcs == VAR_9 ||
    VAR_13->conf_state & VAR_2) {
   VAR_13->fcs = VAR_9;
   FUNC_2(&VAR_16, VAR_0, 1, VAR_13->fcs);
  }
  break;
 }





 VAR_14->dcid = FUNC_1(VAR_13->dcid);
 VAR_14->flags = FUNC_1(0);

 return VAR_16 - VAR_12;
}
