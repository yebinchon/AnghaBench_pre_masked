
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ppp_channel {scalar_t__ private; } ;
struct irnet_socket {scalar_t__ tx_flow; TYPE_1__* tsap; int ttp_connect; int ttp_open; } ;
typedef struct irnet_socket irnet_socket ;
struct TYPE_2__ {int tx_queue; } ;


 int FUNC_0 (int ,int,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*,struct ppp_channel*,struct irnet_socket*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct irnet_socket*) ;
 struct sk_buff* FUNC_9 (struct irnet_socket*,struct sk_buff*) ;
 int FUNC_10 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct ppp_channel * VAR_4,
        struct sk_buff * VAR_5)
{
  irnet_socket * VAR_6 = (struct irnet_socket *) VAR_4->private;
  int VAR_7;

  FUNC_3(VAR_3, "(channel=0x%p, ap/self=0x%p)\n",
  VAR_4, VAR_6);


  FUNC_1(VAR_6 != ((void*)0), 0, VAR_1, "Self is NULL !!!\n");


  if(!(FUNC_12(0, &VAR_6->ttp_open)))
    {
      FUNC_2(VAR_2, "IrTTP not ready ! (%ld-%ld)\n",
     VAR_6->ttp_open, VAR_6->ttp_connect);
      FUNC_7(VAR_5);
      return 1;
    }


  if(VAR_6->tx_flow != VAR_0)
    FUNC_6(0, VAR_2, "IrTTP queue full (%d skbs)...\n",
     FUNC_11(&VAR_6->tsap->tx_queue));


  VAR_5 = FUNC_9(VAR_6, VAR_5);
  FUNC_0(VAR_5 == ((void*)0), 1, VAR_1, "Prepare skb for Tx failed.\n");


  VAR_7 = FUNC_10(VAR_6->tsap, VAR_5);
  if(VAR_7 < 0)
    {
      FUNC_4(VAR_1, "IrTTP doesn't like this packet !!! (0x%X)\n", VAR_7);

    }

  FUNC_5(VAR_3, "\n");
  return 1;
}
