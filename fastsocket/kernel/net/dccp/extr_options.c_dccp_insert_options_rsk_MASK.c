
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dccp_request_sock {scalar_t__ dreq_timestamp_echo; } ;
struct TYPE_2__ {scalar_t__ dccpd_opt_len; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *,struct dccp_request_sock*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *,struct dccp_request_sock*,struct sk_buff*) ;

int FUNC_4(struct dccp_request_sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0(VAR_1)->dccpd_opt_len = 0;

 if (FUNC_1(((void*)0), VAR_0, VAR_1))
  return -1;

 if (VAR_0->dreq_timestamp_echo != 0 &&
     FUNC_3(((void*)0), VAR_0, VAR_1))
  return -1;

 FUNC_2(VAR_1);
 return 0;
}
