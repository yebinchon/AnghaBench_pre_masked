
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct netif {TYPE_1__* nif_devdata; } ;
struct iodesc {struct netif* io_netif; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ (* Transmit ) (TYPE_1__*,int ,size_t,void*,int *,int *,int *) ;scalar_t__ (* GetStatus ) (TYPE_1__*,int *,void**) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_1__ EFI_SIMPLE_NETWORK ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,size_t,void*,int *,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,void**) ;

__attribute__((used)) static ssize_t
FUNC_2(struct iodesc *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct netif *VAR_4 = VAR_1->io_netif;
 EFI_SIMPLE_NETWORK *VAR_5;
 EFI_STATUS VAR_6;
 void *VAR_7;

 VAR_5 = VAR_4->nif_devdata;
 if (VAR_5 == ((void*)0))
  return (-1);

 VAR_6 = VAR_5->Transmit(VAR_5, 0, VAR_3, VAR_2, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_6 != VAR_0)
  return (-1);


 do {
  VAR_7 = ((void*)0);
  VAR_6 = VAR_5->GetStatus(VAR_5, ((void*)0), &VAR_7);




 } while (VAR_6 == VAR_0 && VAR_7 == ((void*)0));


 return ((VAR_6 == VAR_0) ? VAR_3 : -1);
}
