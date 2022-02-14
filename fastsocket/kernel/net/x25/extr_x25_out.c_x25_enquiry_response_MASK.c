
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int condition; int vr; int vl; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct x25_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;

void FUNC_3(struct sock *VAR_4)
{
 struct x25_sock *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->condition & VAR_1)
  FUNC_2(VAR_4, VAR_2);
 else
  FUNC_2(VAR_4, VAR_3);

 VAR_5->vl = VAR_5->vr;
 VAR_5->condition &= ~VAR_0;

 FUNC_1(VAR_4);
}
