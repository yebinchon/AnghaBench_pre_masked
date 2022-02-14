
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_prot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 FUNC_3(&VAR_0);
 if (FUNC_0(VAR_1))
  FUNC_2(FUNC_1(VAR_1), VAR_1->sk_prot, -1);
 FUNC_4(&VAR_0);
}
