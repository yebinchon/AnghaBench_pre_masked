
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct netif {TYPE_2__* nif_devdata; } ;
struct iodesc {struct netif* io_netif; } ;
typedef int ssize_t ;
typedef int UINTN ;
struct TYPE_5__ {scalar_t__ (* Receive ) (TYPE_2__*,int *,int*,char*,int *,int *,int *) ;TYPE_1__* Mode; } ;
struct TYPE_4__ {int MaxPacketSize; } ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_2__ EFI_SIMPLE_NETWORK ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int*,char*,int *,int *,int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct iodesc *VAR_5, void **VAR_6, time_t VAR_7)
{
 struct netif *VAR_8 = VAR_5->io_netif;
 EFI_SIMPLE_NETWORK *VAR_9;
 EFI_STATUS VAR_10;
 UINTN VAR_11;
 time_t VAR_12;
 char *VAR_13, *VAR_14;
 ssize_t VAR_15 = -1;

 VAR_9 = VAR_8->nif_devdata;
 if (VAR_9 == ((void*)0))
  return (VAR_15);

 VAR_11 = VAR_9->Mode->MaxPacketSize + VAR_4 + VAR_3;
 VAR_13 = FUNC_2(VAR_11 + VAR_2);
 if (VAR_13 == ((void*)0))
  return (VAR_15);
 VAR_14 = VAR_13 + VAR_2;

 VAR_12 = FUNC_1();
 while ((FUNC_1() - VAR_12) < VAR_7) {
  VAR_10 = VAR_9->Receive(VAR_9, ((void*)0), &VAR_11, VAR_14, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_10 == VAR_1) {
   *VAR_6 = VAR_13;
   VAR_15 = (ssize_t)VAR_11;
   break;
  }
  if (VAR_10 != VAR_0)
   break;
 }

 if (VAR_15 == -1)
  FUNC_0(VAR_13);
 return (VAR_15);
}
