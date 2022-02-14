
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_err; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; int sk_state; } ;
struct rose_sock {int cause; int diagnostic; int state; scalar_t__ lci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 struct rose_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;

void FUNC_7(struct sock *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct rose_sock *VAR_8 = FUNC_1(VAR_4);

 FUNC_3(VAR_4);
 FUNC_2(VAR_4);

 FUNC_0(VAR_4);

 VAR_8->lci = 0;
 VAR_8->state = VAR_0;

 if (VAR_6 != -1)
  VAR_8->cause = VAR_6;

 if (VAR_7 != -1)
  VAR_8->diagnostic = VAR_7;

 VAR_4->sk_state = VAR_3;
 VAR_4->sk_err = VAR_5;
 VAR_4->sk_shutdown |= VAR_1;

 if (!FUNC_4(VAR_4, VAR_2)) {
  VAR_4->sk_state_change(VAR_4);
  FUNC_5(VAR_4, VAR_2);
 }
}
