
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netif {int dummy; } ;
struct device_info {scalar_t__ type; } ;
struct TYPE_2__ {int sc_handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct device_info* FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct netif *VAR_3, void *VAR_4)
{
 struct device_info *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if ((VAR_5 = FUNC_1(VAR_6)) != ((void*)0))
   if (VAR_5->type == VAR_0)
    break;

 if (VAR_6 == VAR_1) {
  FUNC_0("net_probe: no network devices found, maybe not"
      " enumerated yet..?\n");
  return (-1);
 }




 VAR_2.sc_handle = VAR_6;

 return (0);
}
