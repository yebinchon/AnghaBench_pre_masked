
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_ulpq {TYPE_2__* asoc; } ;
struct sctp_ulpevent {int tsn; } ;
struct sctp_tsnmap {int dummy; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_3__ {struct sctp_tsnmap tsn_map; } ;
struct TYPE_4__ {TYPE_1__ peer; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 struct sctp_ulpevent* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sctp_tsnmap*,int ) ;
 int FUNC_3 (struct sctp_ulpevent*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static __u16 FUNC_5(struct sctp_ulpq *VAR_0,
  struct sk_buff_head *VAR_1, __u16 VAR_2)
{
 __u16 VAR_3 = 0;
 __u32 VAR_4;
 struct sk_buff *VAR_5;
 struct sctp_ulpevent *VAR_6;
 struct sctp_tsnmap *VAR_7;

 VAR_7 = &VAR_0->asoc->peer.tsn_map;

 while ((VAR_5 = FUNC_0(VAR_1)) != ((void*)0)) {
  VAR_3 += FUNC_4(VAR_5);
  VAR_6 = FUNC_1(VAR_5);
  VAR_4 = VAR_6->tsn;

  FUNC_3(VAR_6);
  FUNC_2(VAR_7, VAR_4);
  if (VAR_3 >= VAR_2)
   return VAR_3;
 }

 return VAR_3;
}
