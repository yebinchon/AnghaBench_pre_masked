
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {char* data; int truesize; } ;
struct pppoatm_vcc {int flags; int encaps; TYPE_1__* atmvcc; } ;
struct ppp_channel {int dummy; } ;
struct TYPE_8__ {TYPE_1__* vcc; int atm_options; } ;
struct TYPE_7__ {int sk_wmem_alloc; } ;
struct TYPE_6__ {scalar_t__ (* send ) (TYPE_1__*,struct sk_buff*) ;int dev; int atm_options; } ;


 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int *) ;
 struct pppoatm_vcc* FUNC_3 (struct ppp_channel*) ;



 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (char*,...) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct ppp_channel *VAR_4, struct sk_buff *VAR_5)
{
 struct pppoatm_vcc *VAR_6 = FUNC_3(VAR_4);
 FUNC_0(VAR_5)->vcc = VAR_6->atmvcc;
 FUNC_6("pppoatm_send (skb=0x%p, vcc=0x%p)\n", VAR_5, VAR_6->atmvcc);
 if (VAR_5->data[0] == '\0' && (VAR_6->flags & VAR_2))
  (void) FUNC_9(VAR_5, 1);
 switch (VAR_6->encaps) {
 case 129:
  if (FUNC_8(VAR_5) < VAR_1) {
   struct sk_buff *VAR_7;
   VAR_7 = FUNC_11(VAR_5, VAR_1);
   if (VAR_7 != ((void*)0) &&
       !FUNC_1(VAR_6->atmvcc, VAR_7->truesize)) {
    FUNC_4(VAR_7);
    goto nospace;
   }
   FUNC_4(VAR_5);
   if ((VAR_5 = VAR_7) == ((void*)0))
    return VAR_0;
  } else if (!FUNC_1(VAR_6->atmvcc, VAR_5->truesize))
   goto nospace;
  FUNC_5(FUNC_10(VAR_5, VAR_1), VAR_3, VAR_1);
  break;
 case 128:
  if (!FUNC_1(VAR_6->atmvcc, VAR_5->truesize))
   goto nospace;
  break;
 case 130:
  FUNC_6("Trying to send without setting encaps!\n");
  FUNC_4(VAR_5);
  return 1;
 }

 FUNC_2(VAR_5->truesize, &FUNC_7(FUNC_0(VAR_5)->vcc)->sk_wmem_alloc);
 FUNC_0(VAR_5)->atm_options = FUNC_0(VAR_5)->vcc->atm_options;
 FUNC_6("atm_skb(%p)->vcc(%p)->dev(%p)\n", VAR_5, FUNC_0(VAR_5)->vcc,
     FUNC_0(VAR_5)->vcc->dev);
 return FUNC_0(VAR_5)->vcc->send(FUNC_0(VAR_5)->vcc, VAR_5)
     ? VAR_0 : 1;
    nospace:




 if ((VAR_6->flags & VAR_2) && FUNC_8(VAR_5) > 0 &&
     VAR_5->data[-1] == '\0')
  (void) FUNC_10(VAR_5, 1);
 return 0;
}
