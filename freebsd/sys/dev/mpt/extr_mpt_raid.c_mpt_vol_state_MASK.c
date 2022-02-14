
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpt_raid_volume {TYPE_2__* config_page; } ;
struct TYPE_3__ {int State; } ;
struct TYPE_4__ {TYPE_1__ VolumeStatus; } ;






__attribute__((used)) static const char *
FUNC_0(struct mpt_raid_volume *VAR_0)
{
 switch (VAR_0->config_page->VolumeStatus.State) {
 case 128:
  return ("Optimal");
 case 130:
  return ("Degraded");
 case 129:
  return ("Failed");
 default:
  return ("Unknown");
 }
}
