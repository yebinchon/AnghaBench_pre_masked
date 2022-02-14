
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct l2cap_pinfo {unsigned long omtu; unsigned long flush_to; int conf_state; int mode; int dcid; void* max_pdu_size; int monitor_timeout; int retrans_timeout; int remote_tx_win; int fcs; } ;
struct l2cap_conf_rfc {int mode; int max_pdu_size; int monitor_timeout; int retrans_timeout; int txwin_size; } ;
struct l2cap_conf_req {void* flags; void* dcid; void* data; } ;
typedef int rfc ;


 int FUNC_0 (char*,struct sock*,void*,int,void*) ;
 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;


 void* FUNC_1 (int) ;
 int FUNC_2 (void**,int const,int,unsigned long) ;
 scalar_t__ FUNC_3 (void**,int*,int*,unsigned long*) ;
 struct l2cap_pinfo* FUNC_4 (struct sock*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct l2cap_conf_rfc*,void*,int) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_6, void *VAR_7, int VAR_8, void *VAR_9, u16 *VAR_10)
{
 struct l2cap_pinfo *VAR_11 = FUNC_4(VAR_6);
 struct l2cap_conf_req *VAR_12 = VAR_9;
 void *VAR_13 = VAR_12->data;
 int VAR_14, VAR_15;
 unsigned long VAR_16;
 struct l2cap_conf_rfc VAR_17;

 FUNC_0("sk %p, rsp %p, len %d, req %p", VAR_6, VAR_7, VAR_8, VAR_9);

 while (VAR_8 >= VAR_1) {
  VAR_8 -= FUNC_3(&VAR_7, &VAR_14, &VAR_15, &VAR_16);

  switch (VAR_14) {
  case 131:
   if (VAR_16 < VAR_5) {
    *VAR_10 = VAR_4;
    VAR_11->omtu = VAR_5;
   } else
    VAR_11->omtu = VAR_16;
   FUNC_2(&VAR_13, 131, 2, VAR_11->omtu);
   break;

  case 132:
   VAR_11->flush_to = VAR_16;
   FUNC_2(&VAR_13, 132,
       2, VAR_11->flush_to);
   break;

  case 130:
   if (VAR_15 == sizeof(VAR_17))
    FUNC_6(&VAR_17, (void *)VAR_16, VAR_15);

   if ((VAR_11->conf_state & VAR_2) &&
       VAR_17.mode != VAR_11->mode)
    return -VAR_0;

   VAR_11->mode = VAR_17.mode;
   VAR_11->fcs = 0;

   FUNC_2(&VAR_13, 130,
     sizeof(VAR_17), (unsigned long) &VAR_17);
   break;
  }
 }

 if (*VAR_10 == VAR_3) {
  switch (VAR_17.mode) {
  case 129:
   VAR_11->remote_tx_win = VAR_17.txwin_size;
   VAR_11->retrans_timeout = VAR_17.retrans_timeout;
   VAR_11->monitor_timeout = VAR_17.monitor_timeout;
   VAR_11->max_pdu_size = FUNC_5(VAR_17.max_pdu_size);
   break;
  case 128:
   VAR_11->max_pdu_size = FUNC_5(VAR_17.max_pdu_size);
   break;
  }
 }

 VAR_12->dcid = FUNC_1(VAR_11->dcid);
 VAR_12->flags = FUNC_1(0x0000);

 return VAR_13 - VAR_9;
}
