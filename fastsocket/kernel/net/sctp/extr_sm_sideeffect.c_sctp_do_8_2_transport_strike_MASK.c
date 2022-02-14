
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin_port; } ;
struct TYPE_6__ {TYPE_1__ v4; } ;
struct sctp_transport {scalar_t__ state; scalar_t__ error_count; scalar_t__ pathmaxrxt; int rto; TYPE_2__* asoc; scalar_t__ hb_sent; TYPE_3__ ipaddr; } ;
struct sctp_association {scalar_t__ pf_retrans; int overall_error_count; } ;
typedef int sctp_cmd_seq_t ;
struct TYPE_5__ {int rto_max; } ;


 int FUNC_0 (char*,char*,struct sctp_association*,TYPE_3__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_association*,struct sctp_transport*,int ,int ) ;
 int FUNC_4 (int *,struct sctp_transport*) ;
 int FUNC_5 (struct sctp_association*,struct sctp_transport*) ;

__attribute__((used)) static void FUNC_6(sctp_cmd_seq_t *VAR_6,
      struct sctp_association *VAR_7,
      struct sctp_transport *VAR_8,
      int VAR_9)
{
 if (!VAR_9) {
  VAR_7->overall_error_count++;
  if (VAR_8->state != VAR_1)
   VAR_8->error_count++;
  } else if (VAR_8->hb_sent) {
  if (VAR_8->state != VAR_5)
   VAR_7->overall_error_count++;
  if (VAR_8->state != VAR_1)
   VAR_8->error_count++;
 }






 if ((VAR_8->state != VAR_2) &&
    (VAR_7->pf_retrans < VAR_8->pathmaxrxt) &&
    (VAR_8->error_count > VAR_7->pf_retrans)) {

  FUNC_3(VAR_7, VAR_8,
          VAR_4,
          0);


  FUNC_4(VAR_6, VAR_8);
 }

 if (VAR_8->state != VAR_1 &&
     (VAR_8->error_count > VAR_8->pathmaxrxt)) {
  FUNC_0("transport_strike:association %p",
      " transport IP: port:%d failed.\n",
      VAR_7,
      (&VAR_8->ipaddr),
      FUNC_2(VAR_8->ipaddr.v4.sin_port));
  FUNC_3(VAR_7, VAR_8,
          VAR_3,
          VAR_0);
 }
 if (!VAR_9 || VAR_8->hb_sent) {
  VAR_8->rto = FUNC_1((VAR_8->rto * 2), VAR_8->asoc->rto_max);
  FUNC_5(VAR_7, VAR_8);
 }
}
