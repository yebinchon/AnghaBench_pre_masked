
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_write_space ) (struct sock*) ;int sk_wmem_alloc; } ;
struct sk_buff {int truesize; } ;
struct atm_vcc {int vci; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 struct sock* FUNC_3 (struct atm_vcc*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct atm_vcc *VAR_0,struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = FUNC_3(VAR_0);

 FUNC_2("APopR (%d) %d -= %d\n", VAR_0->vci,
  FUNC_4(VAR_2), VAR_1->truesize);
 FUNC_0(VAR_1->truesize, &VAR_2->sk_wmem_alloc);
 FUNC_1(VAR_1);
 VAR_2->sk_write_space(VAR_2);
}
