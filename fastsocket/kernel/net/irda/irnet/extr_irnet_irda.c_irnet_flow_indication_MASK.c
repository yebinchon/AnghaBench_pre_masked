
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_flow; int chan; } ;
typedef TYPE_1__ irnet_socket ;
typedef int LOCAL_FLOW ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*,int) ;
 int FUNC_2 (int ,char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void * VAR_2,
        void * VAR_3,
        LOCAL_FLOW VAR_4)
{
  irnet_socket * VAR_5 = (irnet_socket *) VAR_2;
  LOCAL_FLOW VAR_6 = VAR_5->tx_flow;

  FUNC_1(VAR_1, "(self=0x%p, flow=%d)\n", VAR_5, VAR_4);


  VAR_5->tx_flow = VAR_4;


  switch(VAR_4)
    {
    case 129:
      FUNC_0(VAR_0, "IrTTP wants us to start again\n");

      if(VAR_6 == 128)
 FUNC_3(&VAR_5->chan);
      else
 FUNC_0(VAR_0, "But we were already transmitting !!!\n");
      break;
    case 128:
      FUNC_0(VAR_0, "IrTTP wants us to slow down\n");
      break;
    default:
      FUNC_0(VAR_0, "Unknown flow command!\n");
      break;
    }

  FUNC_2(VAR_1, "\n");
}
