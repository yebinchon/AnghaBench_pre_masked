
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_alloc; int sk_sndbuf; } ;
struct sk_buff {int truesize; } ;
struct atm_vcc {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct atm_vcc*,unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,scalar_t__,unsigned int,...) ;
 int FUNC_4 () ;
 struct sock* FUNC_5 (struct atm_vcc*) ;
 scalar_t__ FUNC_6 (struct sock*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct atm_vcc *VAR_1,unsigned int VAR_2)
{
 struct sk_buff *VAR_3;
 struct sock *VAR_4 = FUNC_5(VAR_1);

 if (FUNC_6(VAR_4) && !FUNC_1(VAR_1, VAR_2)) {
  FUNC_3("Sorry: wmem_alloc = %d, size = %d, sndbuf = %d\n",
   FUNC_6(VAR_4), VAR_2,
   VAR_4->sk_sndbuf);
  return ((void*)0);
 }
 while (!(VAR_3 = FUNC_0(VAR_2, VAR_0)))
  FUNC_4();
 FUNC_3("AlTx %d += %d\n", FUNC_6(VAR_4), VAR_3->truesize);
 FUNC_2(VAR_3->truesize, &VAR_4->sk_wmem_alloc);
 return VAR_3;
}
