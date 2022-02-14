
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct netif {size_t nif_unit; TYPE_4__* nif_devdata; TYPE_2__* nif_driver; } ;
struct iodesc {int xid; int myea; struct netif* io_netif; } ;
typedef int UINT32 ;
struct TYPE_11__ {int Addr; } ;
struct TYPE_13__ {scalar_t__ State; TYPE_3__ CurrentAddress; } ;
struct TYPE_12__ {scalar_t__ (* Start ) (TYPE_4__*) ;scalar_t__ (* Initialize ) (TYPE_4__*,int ,int ) ;scalar_t__ (* ReceiveFilters ) (TYPE_4__*,int,int ,int ,int ,int *) ;TYPE_8__* Mode; } ;
struct TYPE_10__ {TYPE_1__* netif_ifs; } ;
struct TYPE_9__ {scalar_t__ dif_unit; int dif_private; } ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_4__ EFI_SIMPLE_NETWORK ;
typedef int EFI_HANDLE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int *,void**) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (struct iodesc*) ;
 int FUNC_5 (char*,size_t,...) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct iodesc *VAR_7, void *VAR_8)
{
 struct netif *VAR_9 = VAR_7->io_netif;
 EFI_SIMPLE_NETWORK *VAR_10;
 EFI_HANDLE VAR_11;
 EFI_STATUS VAR_12;
 UINT32 VAR_13;


 FUNC_4(VAR_7);

 if (VAR_9->nif_driver->netif_ifs[VAR_9->nif_unit].dif_unit < 0) {
  FUNC_5("Invalid network interface %d\n", VAR_9->nif_unit);
  return;
 }

 VAR_11 = VAR_9->nif_driver->netif_ifs[VAR_9->nif_unit].dif_private;
 VAR_12 = FUNC_1(VAR_11, &VAR_6, (void **)&VAR_9->nif_devdata);
 if (VAR_12 != VAR_2) {
  FUNC_5("net%d: cannot fetch interface data (status=%lu)\n",
      VAR_9->nif_unit, FUNC_0(VAR_12));
  return;
 }

 VAR_10 = VAR_9->nif_devdata;
 if (VAR_10->Mode->State == VAR_4) {
  VAR_12 = VAR_10->Start(VAR_10);
  if (VAR_12 != VAR_2) {
   FUNC_5("net%d: cannot start interface (status=%lu)\n",
       VAR_9->nif_unit, FUNC_0(VAR_12));
   return;
  }
 }

 if (VAR_10->Mode->State != VAR_3) {
  VAR_12 = VAR_10->Initialize(VAR_10, 0, 0);
  if (VAR_12 != VAR_2) {
   FUNC_5("net%d: cannot init. interface (status=%lu)\n",
       VAR_9->nif_unit, FUNC_0(VAR_12));
   return;
  }
 }

 VAR_13 = VAR_1 |
     VAR_0;

 VAR_12 = VAR_10->ReceiveFilters(VAR_10, VAR_13, 0, VAR_5, 0, ((void*)0));
 if (VAR_12 != VAR_2)
  FUNC_5("net%d: cannot set rx. filters (status=%lu)\n",
      VAR_9->nif_unit, FUNC_0(VAR_12));





 FUNC_2(VAR_10->Mode->CurrentAddress.Addr, VAR_7->myea, 6);
 VAR_7->xid = 1;
}
