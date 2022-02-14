
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {TYPE_2__* sk_prot; } ;
struct sk_buff {int dummy; } ;
typedef enum dccp_reset_codes { ____Placeholder_dccp_reset_codes } dccp_reset_codes ;
struct TYPE_8__ {int dccpd_reset_code; int dccpd_type; } ;
struct TYPE_7__ {TYPE_1__* icsk_af_ops; } ;
struct TYPE_6__ {int max_header; } ;
struct TYPE_5__ {int (* rebuild_header ) (struct sock*) ;} ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_4 (struct sock*,int ,int,int ) ;
 int FUNC_5 (struct sock*) ;

int FUNC_6(struct sock *VAR_3, enum dccp_reset_codes VAR_4)
{
 struct sk_buff *VAR_5;




 int VAR_6 = FUNC_2(VAR_3)->icsk_af_ops->rebuild_header(VAR_3);

 if (VAR_6 != 0)
  return VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_3->sk_prot->max_header, 1, VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_1;


 FUNC_3(VAR_5, VAR_3->sk_prot->max_header);
 FUNC_0(VAR_5)->dccpd_type = VAR_0;
 FUNC_0(VAR_5)->dccpd_reset_code = VAR_4;

 return FUNC_1(VAR_3, VAR_5);
}
