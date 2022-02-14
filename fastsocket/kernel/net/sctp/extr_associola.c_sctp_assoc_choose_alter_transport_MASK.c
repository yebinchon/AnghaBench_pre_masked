
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_transport {int dummy; } ;
struct TYPE_2__ {struct sctp_transport* retran_path; struct sctp_transport* active_path; } ;
struct sctp_association {TYPE_1__ peer; } ;


 int FUNC_0 (struct sctp_association*) ;

struct sctp_transport *FUNC_1(
 struct sctp_association *VAR_0, struct sctp_transport *VAR_1)
{




 if (!VAR_1)
  return VAR_0->peer.active_path;
 else {
  if (VAR_1 == VAR_0->peer.retran_path)
   FUNC_0(VAR_0);
  return VAR_0->peer.retran_path;
 }
}
