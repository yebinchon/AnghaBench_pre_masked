
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* driver; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

int FUNC_1(struct hostapd_data *VAR_0)
{
 return VAR_0->driver && FUNC_0(VAR_0->driver->name, "none") == 0;
}
