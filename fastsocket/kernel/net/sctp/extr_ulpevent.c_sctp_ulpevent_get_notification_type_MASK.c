
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sn_type; } ;
union sctp_notification {TYPE_1__ sn_header; } ;
struct sk_buff {scalar_t__ data; } ;
struct sctp_ulpevent {int dummy; } ;
typedef int __u16 ;


 struct sk_buff* FUNC_0 (struct sctp_ulpevent const*) ;

__u16 FUNC_1(const struct sctp_ulpevent *VAR_0)
{
 union sctp_notification *VAR_1;
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = (union sctp_notification *) VAR_2->data;
 return VAR_1->sn_header.sn_type;
}
