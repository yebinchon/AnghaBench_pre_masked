
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cudlength; int cuddata; } ;
struct x25_sock {int condition; TYPE_1__ calluserdata; int vc_facil_mask; int dte_facilities; int facilities; int state; int vl; int vr; int va; int vs; } ;
struct x25_address {int dummy; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sk_buff {int * data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,struct x25_address*,struct x25_address*) ;
 int FUNC_5 (struct sock*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int *,int *,int *) ;
 struct x25_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_6, struct sk_buff *VAR_7, int VAR_8)
{
 struct x25_address VAR_9, VAR_10;

 switch (VAR_8) {
  case 129: {
   struct x25_sock *VAR_11 = FUNC_7(VAR_6);

   FUNC_8(VAR_6);
   VAR_11->condition = 0x00;
   VAR_11->vs = 0;
   VAR_11->va = 0;
   VAR_11->vr = 0;
   VAR_11->vl = 0;
   VAR_11->state = VAR_4;
   VAR_6->sk_state = VAR_2;



   FUNC_1(VAR_7, VAR_5);
   FUNC_1(VAR_7, FUNC_4(VAR_7->data, &VAR_9, &VAR_10));
   FUNC_1(VAR_7,
     FUNC_6(VAR_7, &VAR_11->facilities,
      &VAR_11->dte_facilities,
      &VAR_11->vc_facil_mask));



   if (VAR_7->len >= 0) {
    FUNC_0(VAR_7,
           VAR_11->calluserdata.cuddata,
           VAR_7->len);
    VAR_11->calluserdata.cudlength = VAR_7->len;
   }
   if (!FUNC_2(VAR_6, VAR_1))
    VAR_6->sk_state_change(VAR_6);
   break;
  }
  case 128:
   FUNC_9(VAR_6, VAR_3);
   FUNC_5(VAR_6, VAR_0, VAR_7->data[3], VAR_7->data[4]);
   break;

  default:
   break;
 }

 return 0;
}
