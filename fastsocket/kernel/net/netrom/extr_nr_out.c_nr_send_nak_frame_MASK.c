
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int * data; } ;
struct nr_sock {int condition; int vr; int vl; int va; int ack_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nr_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_4 (int *) ;

void FUNC_5(struct sock *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6;
 struct nr_sock *VAR_7 = FUNC_0(VAR_4);

 if ((VAR_5 = FUNC_4(&VAR_7->ack_queue)) == ((void*)0))
  return;

 if ((VAR_6 = FUNC_3(VAR_5, VAR_0)) == ((void*)0))
  return;

 VAR_6->data[2] = VAR_7->va;
 VAR_6->data[3] = VAR_7->vr;

 if (VAR_7->condition & VAR_3)
  VAR_6->data[4] |= VAR_1;

 FUNC_2(VAR_4, VAR_6);

 VAR_7->condition &= ~VAR_2;
 VAR_7->vl = VAR_7->vr;

 FUNC_1(VAR_4);
}
