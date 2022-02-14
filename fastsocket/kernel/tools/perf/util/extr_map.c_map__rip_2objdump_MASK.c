
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct map {int (* unmap_ip ) (struct map*,int ) ;TYPE_1__* dso; } ;
struct TYPE_2__ {scalar_t__ adjust_symbols; } ;


 int FUNC_0 (struct map*,int ) ;

u64 FUNC_1(struct map *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = VAR_0->dso->adjust_symbols ?
   VAR_0->unmap_ip(VAR_0, VAR_1) :
   VAR_1;
 return VAR_2;
}
