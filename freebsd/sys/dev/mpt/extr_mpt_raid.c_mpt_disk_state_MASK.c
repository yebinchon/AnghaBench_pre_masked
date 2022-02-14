
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int State; } ;
struct TYPE_4__ {TYPE_1__ PhysDiskStatus; } ;
struct mpt_raid_disk {TYPE_2__ config_page; } ;
__attribute__((used)) static const char *
FUNC_0(struct mpt_raid_disk *VAR_0)
{
 switch (VAR_0->config_page.PhysDiskStatus.State) {
 case 129:
  return ("Online");
 case 132:
  return ("Missing");
 case 131:
  return ("Incompatible");
 case 135:
  return ("Failed");
 case 133:
  return ("Initializing");
 case 130:
  return ("Offline Requested");
 case 134:
  return ("Failed per Host Request");
 case 128:
  return ("Offline");
 default:
  return ("Unknown");
 }
}
