
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;


 struct resource* FUNC_0 (scalar_t__,scalar_t__,int,int*,int ,int ,int ,int ) ;
 int VAR_0 ;


 struct pci_devinfo* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct resource* FUNC_3 (scalar_t__,scalar_t__,int,int*,int ,int ,int ,int,int ) ;
 struct resource* FUNC_4 (scalar_t__,scalar_t__,int*,int ,int ,int ,int ) ;

struct resource *
FUNC_5(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{




 if (FUNC_2(VAR_2) != VAR_1)
  return (FUNC_0(FUNC_2(VAR_1), VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));
 return (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, 1, VAR_8));
}
