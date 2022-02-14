
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* rname; int mask; int disconnect_work; int tx_flow; int ckey; int max_sdu_size_rx; void* saddr; void* daddr; void* rsaddr; void* rdaddr; scalar_t__ ttp_connect; scalar_t__ ttp_open; int magic; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,char*,TYPE_1__*) ;
 void* VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;

int
FUNC_5(irnet_socket * VAR_7)
{
  FUNC_0(VAR_2, "(self=0x%p)\n", VAR_7);

  VAR_7->magic = VAR_3;

  VAR_7->ttp_open = 0;
  VAR_7->ttp_connect = 0;
  VAR_7->rname[0] = '\0';
  VAR_7->rdaddr = VAR_0;
  VAR_7->rsaddr = VAR_0;
  VAR_7->daddr = VAR_0;
  VAR_7->saddr = VAR_0;
  VAR_7->max_sdu_size_rx = VAR_5;


  VAR_7->ckey = FUNC_3(0, ((void*)0), ((void*)0), ((void*)0));



  VAR_7->mask = FUNC_4(VAR_4);

  VAR_7->tx_flow = VAR_1;

  FUNC_2(&VAR_7->disconnect_work, VAR_6);

  FUNC_1(VAR_2, "\n");
  return(0);
}
