
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct iucv_path {struct sock* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct iucv_path *VAR_1, u8 VAR_2[16])
{
 struct sock *VAR_3 = VAR_1->private;

 VAR_3->sk_state = VAR_0;
 VAR_3->sk_state_change(VAR_3);
}
