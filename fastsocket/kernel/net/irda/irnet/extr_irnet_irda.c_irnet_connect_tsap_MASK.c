
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ttp_connect; int max_sdu_size_rx; int daddr; int rsaddr; int dtsap_sel; int tsap; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int ,int *) ;

__attribute__((used)) static inline int
FUNC_6(irnet_socket * VAR_2)
{
  int VAR_3;

  FUNC_0(VAR_1, "(self=0x%p)\n", VAR_2);


  VAR_3 = FUNC_4(VAR_2);
  if(VAR_3 != 0)
    {
      FUNC_3(0, &VAR_2->ttp_connect);
      FUNC_1(VAR_0, "connect aborted!\n");
      return(VAR_3);
    }


  VAR_3 = FUNC_5(VAR_2->tsap, VAR_2->dtsap_sel,
         VAR_2->rsaddr, VAR_2->daddr, ((void*)0),
         VAR_2->max_sdu_size_rx, ((void*)0));
  if(VAR_3 != 0)
    {
      FUNC_3(0, &VAR_2->ttp_connect);
      FUNC_1(VAR_0, "connect aborted!\n");
      return(VAR_3);
    }






  FUNC_2(VAR_1, "\n");
  return(VAR_3);
}
