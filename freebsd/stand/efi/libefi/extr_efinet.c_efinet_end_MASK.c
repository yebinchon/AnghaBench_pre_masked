
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct netif {TYPE_1__* nif_devdata; } ;
struct TYPE_3__ {int (* Shutdown ) (TYPE_1__*) ;} ;
typedef TYPE_1__ EFI_SIMPLE_NETWORK ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct netif *VAR_0)
{
 EFI_SIMPLE_NETWORK *VAR_1 = VAR_0->nif_devdata;

 if (VAR_1 == ((void*)0))
  return;

 VAR_1->Shutdown(VAR_1);
}
