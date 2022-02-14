
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_socket; } ;
struct dn_scp {int persist; int state; int stamp; int nsp_rxtshift; } ;


 int VAR_0 ;



 int VAR_1 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ,int ) ;
 int FUNC_3 (struct sock*) ;
 int VAR_11 ;
 int FUNC_4 (struct sock*) ;

int FUNC_5(struct sock *VAR_12)
{
 struct dn_scp *VAR_13 = FUNC_0(VAR_12);

 VAR_13->persist = FUNC_1(VAR_12);

 switch(VAR_13->state) {
  case 130:
   FUNC_2(VAR_12, VAR_5, 0, VAR_2);
   if (VAR_13->nsp_rxtshift >= VAR_7)
    VAR_13->state = VAR_0;
   return 0;

  case 128:
   FUNC_2(VAR_12, VAR_5, 0, VAR_2);
   if (VAR_13->nsp_rxtshift >= VAR_9)
    VAR_13->state = VAR_1;
   return 0;

  case 129:
   if (VAR_13->nsp_rxtshift < VAR_8) {

    FUNC_2(VAR_12, VAR_4, VAR_6, VAR_2);
    return 0;
   }
 }

 VAR_13->persist = (VAR_3 * VAR_10);

 if (VAR_12->sk_socket)
  return 0;

 if ((VAR_11 - VAR_13->stamp) >= (VAR_3 * VAR_10)) {
  FUNC_3(VAR_12);
  FUNC_4(VAR_12);
  return 1;
 }

 return 0;
}
