
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct sock*,int ,int *,int ,int *) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static inline void FUNC_3(struct socket *VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_4->sk;

 if (!VAR_6)
  return;

 FUNC_0(FUNC_2(VAR_6));

 FUNC_1(VAR_6,
   VAR_3[VAR_5], &VAR_2[VAR_5],
    VAR_0[VAR_5], &VAR_1[VAR_5]);
}
