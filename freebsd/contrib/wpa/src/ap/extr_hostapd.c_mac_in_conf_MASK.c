
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_config {size_t num_bss; TYPE_1__** bss; } ;
struct TYPE_2__ {int bssid; } ;


 scalar_t__ FUNC_0 (int ,void const*) ;

__attribute__((used)) static int FUNC_1(struct hostapd_config *VAR_0, const void *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_bss; VAR_2++) {
  if (FUNC_0(VAR_0->bss[VAR_2]->bssid, VAR_1) == 0) {
   return 1;
  }
 }

 return 0;
}
