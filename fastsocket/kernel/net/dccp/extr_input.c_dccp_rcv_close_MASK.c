
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dccps_role; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,int) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4->sk_state) {






 case 132:
  if (FUNC_4(VAR_4)->dccps_role != VAR_1)
   break;

 case 128:
 case 133:
  FUNC_2(VAR_4, VAR_0);
  FUNC_0(VAR_4);
  break;
 case 131:
 case 130:

  VAR_6 = 1;
  FUNC_1(VAR_4, VAR_5);
  FUNC_3(VAR_4, 129);

 case 129:



  FUNC_5(VAR_4, VAR_3, VAR_2);
 }
 return VAR_6;
}
