
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int* data; scalar_t__ len; int dev; } ;
struct TYPE_6__ {int fragno; int frag_queue; scalar_t__ fraglen; TYPE_1__* ax25_dev; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(ax25_cb *VAR_4, struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6, *VAR_7;

 if (VAR_4->fragno != 0) {
  if (!(*VAR_5->data & VAR_1)) {
   if ((VAR_4->fragno - 1) == (*VAR_5->data & VAR_2)) {

    VAR_4->fragno = *VAR_5->data & VAR_2;
    FUNC_5(VAR_5, 1);
    VAR_4->fraglen += VAR_5->len;
    FUNC_8(&VAR_4->frag_queue, VAR_5);


    if (VAR_4->fragno == 0) {
     VAR_6 = FUNC_0(VAR_0 +
        VAR_4->fraglen,
        VAR_3);
     if (!VAR_6) {
      FUNC_7(&VAR_4->frag_queue);
      return 1;
     }

     FUNC_9(VAR_6, VAR_0);

     VAR_6->dev = VAR_4->ax25_dev->dev;
     FUNC_10(VAR_6);
     FUNC_11(VAR_6);


     while ((VAR_7 = FUNC_4(&VAR_4->frag_queue)) != ((void*)0)) {
      FUNC_3(VAR_7,
         FUNC_6(VAR_6, VAR_7->len),
           VAR_7->len);
      FUNC_2(VAR_7);
     }

     VAR_4->fraglen = 0;

     if (FUNC_1(VAR_4, VAR_6) == 0)
      FUNC_2(VAR_6);
    }

    return 1;
   }
  }
 } else {

  if (*VAR_5->data & VAR_1) {
   FUNC_7(&VAR_4->frag_queue);
   VAR_4->fragno = *VAR_5->data & VAR_2;
   FUNC_5(VAR_5, 1);
   VAR_4->fraglen = VAR_5->len;
   FUNC_8(&VAR_4->frag_queue, VAR_5);
   return 1;
  }
 }

 return 0;
}
