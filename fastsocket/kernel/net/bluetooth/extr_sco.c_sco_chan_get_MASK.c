
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sco_conn {struct sock* sk; } ;


 int FUNC_0 (struct sco_conn*) ;
 int FUNC_1 (struct sco_conn*) ;

__attribute__((used)) static inline struct sock *FUNC_2(struct sco_conn *VAR_0)
{
 struct sock *VAR_1 = ((void*)0);
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->sk;
 FUNC_1(VAR_0);
 return VAR_1;
}
