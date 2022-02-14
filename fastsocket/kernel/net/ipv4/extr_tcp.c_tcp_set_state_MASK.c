
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int sk_userlocks; TYPE_1__* sk_prot; } ;
struct TYPE_4__ {int icsk_bind_hash; } ;
struct TYPE_3__ {int (* unhash ) (struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,char*,struct sock*,int ,int ) ;

 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int * VAR_4 ;
 int FUNC_6 (struct sock*) ;

void FUNC_7(struct sock *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_5->sk_state;

 switch (VAR_6) {
 case 128:
  if (VAR_7 != 128)
   FUNC_2(FUNC_5(VAR_5), VAR_2);
  break;

 case 129:
  if (VAR_7 == VAR_1 || VAR_7 == 128)
   FUNC_2(FUNC_5(VAR_5), VAR_3);

  VAR_5->sk_prot->unhash(VAR_5);
  if (FUNC_3(VAR_5)->icsk_bind_hash &&
      !(VAR_5->sk_userlocks & VAR_0))
   FUNC_4(VAR_5);

 default:
  if (VAR_7 == 128)
   FUNC_1(FUNC_5(VAR_5), VAR_2);
 }




 VAR_5->sk_state = VAR_6;




}
