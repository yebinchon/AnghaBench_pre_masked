
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int * sk; } ;
struct TYPE_10__ {scalar_t__ state; int condition; unsigned short va; unsigned short vs; unsigned short window; unsigned short modulus; int ack_queue; TYPE_1__* ax25_dev; int write_queue; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_9__ {int* values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int *) ;

void FUNC_11(ax25_cb *VAR_8)
{
 struct sk_buff *VAR_9, *VAR_10;
 int VAR_11 = 1;
 unsigned short VAR_12, VAR_13, VAR_14;

 if (VAR_8->state != VAR_4 && VAR_8->state != VAR_5)
  return;

 if (VAR_8->condition & VAR_1)
  return;

 if (FUNC_7(&VAR_8->write_queue) == ((void*)0))
  return;

 VAR_12 = (FUNC_7(&VAR_8->ack_queue) == ((void*)0)) ? VAR_8->va : VAR_8->vs;
 VAR_13 = (VAR_8->va + VAR_8->window) % VAR_8->modulus;

 if (VAR_12 == VAR_13)
  return;
 VAR_9 = FUNC_6(&VAR_8->write_queue);
 if (!VAR_9)
  return;

 VAR_8->vs = VAR_12;

 do {
  if ((VAR_10 = FUNC_5(VAR_9, VAR_7)) == ((void*)0)) {
   FUNC_8(&VAR_8->write_queue, VAR_9);
   break;
  }

  if (VAR_9->sk != ((void*)0))
   FUNC_10(VAR_10, VAR_9->sk);

  VAR_14 = (VAR_8->vs + 1) % VAR_8->modulus;
  VAR_11 = (VAR_14 == VAR_13);






  switch (VAR_8->ax25_dev->values[VAR_6]) {
  case 128:
  case 129:
   FUNC_1(VAR_8, VAR_10, (VAR_11) ? VAR_3 : VAR_2);
   break;






  }

  VAR_8->vs = VAR_14;




  FUNC_9(&VAR_8->ack_queue, VAR_9);

 } while (!VAR_11 && (VAR_9 = FUNC_6(&VAR_8->write_queue)) != ((void*)0));

 VAR_8->condition &= ~VAR_0;

 if (!FUNC_4(VAR_8)) {
  FUNC_3(VAR_8);
  FUNC_0(VAR_8);
  FUNC_2(VAR_8);
 }
}
