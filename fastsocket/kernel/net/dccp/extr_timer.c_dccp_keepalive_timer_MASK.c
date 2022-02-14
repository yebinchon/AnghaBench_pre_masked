
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct sock *VAR_3 = (struct sock *)VAR_2;


 FUNC_0(VAR_3);
 if (FUNC_4(VAR_3)) {

  FUNC_3(VAR_3, VAR_1 / 20);
  goto out;
 }

 if (VAR_3->sk_state == VAR_0) {
  FUNC_2(VAR_3);
  goto out;
 }
out:
 FUNC_1(VAR_3);
 FUNC_5(VAR_3);
}
