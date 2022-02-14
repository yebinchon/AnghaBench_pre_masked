
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nr_sock {int condition; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct nr_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct sock *VAR_2 = (struct sock *)VAR_1;
 struct nr_sock *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_2);
 if (VAR_3->condition & VAR_0) {
  VAR_3->condition &= ~VAR_0;
  FUNC_2(VAR_2);
 }
 FUNC_1(VAR_2);
}
