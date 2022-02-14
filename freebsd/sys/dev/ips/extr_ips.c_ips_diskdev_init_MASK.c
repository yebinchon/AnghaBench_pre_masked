
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; int * diskdev; TYPE_1__* drives; } ;
typedef TYPE_2__ ips_softc_t ;
struct TYPE_4__ {scalar_t__ state; int sector_count; int raid_lvl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(ips_softc_t *VAR_4)
{
 int VAR_5;
 for(VAR_5=0; VAR_5 < VAR_3; VAR_5++){
  if(VAR_4->drives[VAR_5].state == VAR_1) continue;
  FUNC_2(VAR_4->dev, "Logical Drive %d: RAID%d sectors: %u, state %s\n",
   VAR_5, VAR_4->drives[VAR_5].raid_lvl,
   VAR_4->drives[VAR_5].sector_count,
   FUNC_4(VAR_4->drives[VAR_5].state));
  if(VAR_4->drives[VAR_5].state == VAR_2 ||
     VAR_4->drives[VAR_5].state == VAR_0){
   VAR_4->diskdev[VAR_5] = FUNC_1(VAR_4->dev, ((void*)0), -1);
   FUNC_3(VAR_4->diskdev[VAR_5],(void *)(uintptr_t) VAR_5);
  }
 }
 if(FUNC_0(VAR_4->dev)){
  FUNC_2(VAR_4->dev, "Attaching bus failed\n");
 }
 return 0;
}
