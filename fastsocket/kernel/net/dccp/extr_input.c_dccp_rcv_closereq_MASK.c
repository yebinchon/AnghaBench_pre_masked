
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dccpd_seq; } ;
struct TYPE_3__ {scalar_t__ dccps_role; } ;


 int VAR_0 ;



 int VAR_1 ;

 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,int ,int ) ;
 int FUNC_4 (struct sock*,int) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7 = 0;







 if (FUNC_5(VAR_5)->dccps_role != VAR_2) {
  FUNC_3(VAR_5, FUNC_0(VAR_6)->dccpd_seq, VAR_1);
  return VAR_7;
 }


 switch (VAR_5->sk_state) {
 case 128:
  FUNC_2(VAR_5, 0);
  FUNC_4(VAR_5, VAR_0);
  break;
 case 131:
 case 130:

  VAR_7 = 1;
  FUNC_1(VAR_5, VAR_6);
  FUNC_4(VAR_5, 129);

 case 129:
  FUNC_6(VAR_5, VAR_4, VAR_3);
 }
 return VAR_7;
}
