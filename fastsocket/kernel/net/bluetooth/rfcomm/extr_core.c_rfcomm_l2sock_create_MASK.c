
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_state_change; int sk_data_ready; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,struct socket**) ;

__attribute__((used)) static int FUNC_2(struct socket **VAR_5)
{
 int VAR_6;

 FUNC_0("");

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_0, VAR_5);
 if (!VAR_6) {
  struct sock *VAR_7 = (*VAR_5)->sk;
  VAR_7->sk_data_ready = VAR_3;
  VAR_7->sk_state_change = VAR_4;
 }
 return VAR_6;
}
