
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int * data; } ;
struct nr_sock {int condition; int vr; int vs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nr_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct nr_sock *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 == ((void*)0))
  return;

 VAR_3->data[2] = VAR_4->vs;
 VAR_3->data[3] = VAR_4->vr;

 if (VAR_4->condition & VAR_1)
  VAR_3->data[4] |= VAR_0;

 FUNC_1(VAR_2);

 FUNC_2(VAR_2, VAR_3);
}
