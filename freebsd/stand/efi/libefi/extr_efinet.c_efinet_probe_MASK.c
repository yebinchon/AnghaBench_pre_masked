
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netif {size_t nif_unit; TYPE_2__* nif_driver; } ;
struct TYPE_6__ {scalar_t__ (* OpenProtocol ) (int ,int *,void**,int ,int *,int ) ;} ;
struct TYPE_5__ {TYPE_1__* netif_ifs; } ;
struct TYPE_4__ {int dif_private; } ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_SIMPLE_NETWORK ;
typedef int EFI_HANDLE ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,size_t,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *,void**,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct netif *VAR_5, void *VAR_6)
{
 EFI_SIMPLE_NETWORK *VAR_7;
 EFI_HANDLE VAR_8;
 EFI_STATUS VAR_9;

 VAR_8 = VAR_5->nif_driver->netif_ifs[VAR_5->nif_unit].dif_private;





 VAR_9 = VAR_0->OpenProtocol(VAR_8, &VAR_4, (void **)&VAR_7,
     VAR_3, ((void*)0), VAR_1);
 if (VAR_9 != VAR_2) {
  FUNC_2("Unable to open network interface %d for "
      "exclusive access: %lu\n", VAR_5->nif_unit,
      FUNC_0(VAR_9));
  return (FUNC_1(VAR_9));
 }

 return (0);
}
