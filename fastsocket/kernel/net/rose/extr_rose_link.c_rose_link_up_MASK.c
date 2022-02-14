
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rose_neigh {int * ax25; TYPE_1__* dev; int digipeat; int callsign; } ;
typedef int ax25_address ;
struct TYPE_2__ {scalar_t__ dev_addr; } ;


 int * FUNC_0 (int *,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct rose_neigh *VAR_2)
{
 ax25_address *VAR_3;

 if (FUNC_1(&VAR_1, &VAR_0) == 0)
  VAR_3 = (ax25_address *)VAR_2->dev->dev_addr;
 else
  VAR_3 = &VAR_1;

 VAR_2->ax25 = FUNC_0(VAR_3, &VAR_2->callsign, VAR_2->digipeat, VAR_2->dev);

 return (VAR_2->ax25 != ((void*)0));
}
