
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sctp_transport {TYPE_5__* asoc; } ;
struct sctp_outq {int fast_rtx; TYPE_4__* asoc; } ;
typedef int sctp_retransmit_reason_t ;
struct TYPE_6__ {struct sctp_transport* retran_path; } ;
struct TYPE_10__ {int init_retries; int unack_data; int rtx_data_chunks; TYPE_1__ peer; } ;
struct TYPE_8__ {TYPE_2__* sk; } ;
struct TYPE_9__ {TYPE_3__ base; int ctsn_ack_point; } ;
struct TYPE_7__ {int sk_err; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct sctp_outq*,int ) ;
 int FUNC_4 (struct sctp_outq*,int) ;
 int FUNC_5 (struct sctp_outq*,struct sctp_transport*,int) ;
 int FUNC_6 (struct sctp_transport*,int ) ;

void FUNC_7(struct sctp_outq *VAR_6, struct sctp_transport *VAR_7,
       sctp_retransmit_reason_t VAR_8)
{
 int VAR_9 = 0;

 switch(VAR_8) {
 case 128:
  FUNC_1(VAR_5);
  FUNC_6(VAR_7, VAR_1);



  if (VAR_7 == VAR_7->asoc->peer.retran_path)
   FUNC_2(VAR_7->asoc);
  VAR_7->asoc->rtx_data_chunks +=
   VAR_7->asoc->unack_data;
  break;
 case 131:
  FUNC_1(VAR_2);
  FUNC_6(VAR_7, VAR_0);
  VAR_6->fast_rtx = 1;
  break;
 case 130:
  FUNC_1(VAR_3);
  break;
 case 129:
  FUNC_1(VAR_4);
  VAR_7->asoc->init_retries++;
  break;
 default:
  FUNC_0();
 }

 FUNC_5(VAR_6, VAR_7, VAR_8);





 if (VAR_8 == 128)
  FUNC_3(VAR_6, VAR_6->asoc->ctsn_ack_point);





 if (VAR_8 != 131)
  VAR_9 = FUNC_4(VAR_6, 1);

 if (VAR_9)
  VAR_6->asoc->base.sk->sk_err = -VAR_9;
}
