
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpq {TYPE_2__* asoc; int pd_mode; } ;
struct sctp_ulpevent {int msg_flags; int tsn; } ;
typedef int __u32 ;
struct TYPE_3__ {int tsn_map; } ;
struct TYPE_4__ {TYPE_1__ peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct sctp_ulpevent* FUNC_2 (struct sctp_ulpq*) ;
 struct sctp_ulpevent* FUNC_3 (struct sctp_ulpq*) ;
 int FUNC_4 (struct sctp_ulpq*,struct sctp_ulpevent*) ;

__attribute__((used)) static struct sctp_ulpevent *FUNC_5(struct sctp_ulpq *VAR_3,
      struct sctp_ulpevent *VAR_4)
{
 struct sctp_ulpevent *VAR_5 = ((void*)0);


 if (VAR_2 == (VAR_4->msg_flags & VAR_1)) {
  VAR_4->msg_flags |= VAR_0;
  return VAR_4;
 }

 FUNC_4(VAR_3, VAR_4);
 if (!VAR_3->pd_mode)
  VAR_5 = FUNC_3(VAR_3);
 else {
  __u32 VAR_6, VAR_7;




  VAR_6 = VAR_4->tsn;
  VAR_7 = FUNC_1(&VAR_3->asoc->peer.tsn_map);
  if (FUNC_0(VAR_6, VAR_7))
   VAR_5 = FUNC_2(VAR_3);
 }

 return VAR_5;
}
