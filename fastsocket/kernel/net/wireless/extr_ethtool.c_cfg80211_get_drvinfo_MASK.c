
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wireless_dev {TYPE_3__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_9__ {char* release; } ;
struct TYPE_8__ {char* fw_version; } ;
struct TYPE_7__ {TYPE_1__* driver; } ;
struct TYPE_6__ {char* name; } ;


 char* FUNC_0 (TYPE_2__*) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
     struct ethtool_drvinfo *VAR_1)
{
 struct wireless_dev *VAR_2 = VAR_0->ieee80211_ptr;

 FUNC_2(VAR_1->driver, FUNC_3(VAR_2->wiphy)->driver->name,
  sizeof(VAR_1->driver));

 FUNC_2(VAR_1->version, FUNC_1()->release, sizeof(VAR_1->version));

 if (VAR_2->wiphy->fw_version[0])
  FUNC_2(VAR_1->fw_version, VAR_2->wiphy->fw_version,
   sizeof(VAR_1->fw_version));
 else
  FUNC_2(VAR_1->fw_version, "N/A", sizeof(VAR_1->fw_version));

 FUNC_2(VAR_1->bus_info, FUNC_0(FUNC_3(VAR_2->wiphy)),
  sizeof(VAR_1->bus_info));
}
