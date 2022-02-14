
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_state; int sk_userlocks; TYPE_1__* sk_prot; } ;
struct TYPE_6__ {int dccps_featneg; } ;
struct TYPE_5__ {int * icsk_bind_hash; } ;
struct TYPE_4__ {int (* unhash ) (struct sock*) ;} ;


 int const VAR_0 ;

 int const VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

 int const VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,struct sock*,int ,int ) ;
 int FUNC_5 (struct sock*) ;
 TYPE_3__* FUNC_6 (struct sock*) ;
 int FUNC_7 (int const) ;
 TYPE_2__* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

void FUNC_11(struct sock *VAR_6, const int VAR_7)
{
 const int VAR_8 = VAR_6->sk_state;

 FUNC_4("%s(%p)  %s  -->  %s\n", FUNC_5(VAR_6), VAR_6,
        FUNC_7(VAR_8), FUNC_7(VAR_7));
 FUNC_2(VAR_7 == VAR_8);

 switch (VAR_7) {
 case 128:
  if (VAR_8 != 128)
   FUNC_1(VAR_2);

  if (VAR_8 == VAR_4)
   FUNC_3(&FUNC_6(VAR_6)->dccps_featneg);
  break;

 case 129:
  if (VAR_8 == 128 || VAR_8 == VAR_0 ||
      VAR_8 == VAR_1)
   FUNC_1(VAR_3);

  VAR_6->sk_prot->unhash(VAR_6);
  if (FUNC_8(VAR_6)->icsk_bind_hash != ((void*)0) &&
      !(VAR_6->sk_userlocks & VAR_5))
   FUNC_9(VAR_6);

 default:
  if (VAR_8 == 128)
   FUNC_0(VAR_2);
 }




 VAR_6->sk_state = VAR_7;
}
