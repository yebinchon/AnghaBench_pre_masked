
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_shutdown_event {int sse_length; int sse_assoc_id; scalar_t__ sse_flags; int sse_type; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association const*) ;
 struct sk_buff* FUNC_1 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct sctp_ulpevent*,struct sctp_association const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;

struct sctp_ulpevent *FUNC_5(
 const struct sctp_association *VAR_2,
 __u16 VAR_3, gfp_t VAR_4)
{
 struct sctp_ulpevent *VAR_5;
 struct sctp_shutdown_event *VAR_6;
 struct sk_buff *VAR_7;

 VAR_5 = FUNC_2(sizeof(struct sctp_shutdown_event),
      VAR_0, VAR_4);
 if (!VAR_5)
  goto fail;

 VAR_7 = FUNC_1(VAR_5);
 VAR_6 = (struct sctp_shutdown_event *)
  FUNC_4(VAR_7, sizeof(struct sctp_shutdown_event));







 VAR_6->sse_type = VAR_1;







 VAR_6->sse_flags = 0;
 VAR_6->sse_length = sizeof(struct sctp_shutdown_event);
 FUNC_3(VAR_5, VAR_2);
 VAR_6->sse_assoc_id = FUNC_0(VAR_2);

 return VAR_5;

fail:
 return ((void*)0);
}
