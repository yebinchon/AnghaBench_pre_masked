
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nr_sock {int state; int n2count; int n2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 struct nr_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3)
{
 struct sock *VAR_4 = (struct sock *)VAR_3;
 struct nr_sock *VAR_5 = FUNC_4(VAR_4);

 FUNC_0(VAR_4);
 switch (VAR_5->state) {
 case 130:
  if (VAR_5->n2count == VAR_5->n2) {
   FUNC_2(VAR_4, VAR_0);
   FUNC_1(VAR_4);
   return;
  } else {
   VAR_5->n2count++;
   FUNC_6(VAR_4, VAR_1);
  }
  break;

 case 129:
  if (VAR_5->n2count == VAR_5->n2) {
   FUNC_2(VAR_4, VAR_0);
   FUNC_1(VAR_4);
   return;
  } else {
   VAR_5->n2count++;
   FUNC_6(VAR_4, VAR_2);
  }
  break;

 case 128:
  if (VAR_5->n2count == VAR_5->n2) {
   FUNC_2(VAR_4, VAR_0);
   FUNC_1(VAR_4);
   return;
  } else {
   VAR_5->n2count++;
   FUNC_3(VAR_4);
  }
  break;
 }

 FUNC_5(VAR_4);
 FUNC_1(VAR_4);
}
