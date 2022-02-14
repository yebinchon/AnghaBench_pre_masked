
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rcvbuf; int sk_rmem_alloc; int sk_state; } ;
struct rose_sock {int state; int condition; int vr; int vl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct rose_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_6)
{
 struct sock *VAR_7 = (struct sock *)VAR_6;
 struct rose_sock *VAR_8 = FUNC_4(VAR_7);

 FUNC_1(VAR_7);
 switch (VAR_8->state) {
 case 129:


  if (FUNC_8(VAR_7, VAR_4) ||
      (VAR_7->sk_state == VAR_5 && FUNC_8(VAR_7, VAR_3))) {
   FUNC_2(VAR_7);
   FUNC_3(VAR_7);
   return;
  }
  break;

 case 128:



  if (FUNC_0(&VAR_7->sk_rmem_alloc) < (VAR_7->sk_rcvbuf / 2) &&
      (VAR_8->condition & VAR_1)) {
   VAR_8->condition &= ~VAR_1;
   VAR_8->condition &= ~VAR_0;
   VAR_8->vl = VAR_8->vr;
   FUNC_7(VAR_7, VAR_2);
   FUNC_6(VAR_7);
   break;
  }
  break;
 }

 FUNC_5(VAR_7);
 FUNC_2(VAR_7);
}
