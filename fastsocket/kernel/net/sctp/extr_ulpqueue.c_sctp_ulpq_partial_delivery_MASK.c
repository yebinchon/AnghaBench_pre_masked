
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_ulpq {scalar_t__ pd_mode; struct sctp_association* asoc; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_sock {int pd_mode; scalar_t__ frag_interleave; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int sk; } ;
struct sctp_association {TYPE_1__ base; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int *) ;
 struct sctp_sock* FUNC_1 (int ) ;
 struct sctp_ulpevent* FUNC_2 (struct sctp_ulpq*) ;
 int FUNC_3 (struct sctp_ulpq*) ;
 int FUNC_4 (struct sctp_ulpq*,struct sctp_ulpevent*) ;

void FUNC_5(struct sctp_ulpq *VAR_0,
    struct sctp_chunk *VAR_1,
    gfp_t VAR_2)
{
 struct sctp_ulpevent *VAR_3;
 struct sctp_association *VAR_4;
 struct sctp_sock *VAR_5;

 VAR_4 = VAR_0->asoc;
 VAR_5 = FUNC_1(VAR_4->base.sk);




 if (VAR_0->pd_mode)
  return;






 if (VAR_5->frag_interleave || FUNC_0(&VAR_5->pd_mode) == 0) {

  VAR_3 = FUNC_2(VAR_0);

  if (VAR_3) {
   FUNC_4(VAR_0, VAR_3);
   FUNC_3(VAR_0);
   return;
  }
 }
}
