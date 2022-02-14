
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; TYPE_2__* sk_prot; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int dccpd_type; } ;
struct TYPE_5__ {int ato; } ;
struct TYPE_7__ {TYPE_1__ icsk_ack; } ;
struct TYPE_6__ {int max_header; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,int ,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

void FUNC_7(struct sock *VAR_7)
{

 if (VAR_7->sk_state != VAR_0) {
  struct sk_buff *VAR_8 = FUNC_1(VAR_7->sk_prot->max_header,
      VAR_3);

  if (VAR_8 == ((void*)0)) {
   FUNC_5(VAR_7);
   FUNC_3(VAR_7)->icsk_ack.ato = VAR_5;
   FUNC_4(VAR_7, VAR_4,
        VAR_6,
        VAR_2);
   return;
  }


  FUNC_6(VAR_8, VAR_7->sk_prot->max_header);
  FUNC_0(VAR_8)->dccpd_type = VAR_1;
  FUNC_2(VAR_7, VAR_8);
 }
}
