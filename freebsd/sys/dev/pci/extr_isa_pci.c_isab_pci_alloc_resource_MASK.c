
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct isab_pci_softc {TYPE_1__* isab_pci_res; } ;
typedef int rman_res_t ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {struct resource* ip_res; int ip_refs; } ;


 struct resource* FUNC_0 (scalar_t__,scalar_t__,int,int*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;


 struct resource* FUNC_2 (scalar_t__,int,int*,int ,int ,int ,int ) ;
 struct resource* FUNC_3 (scalar_t__,scalar_t__,int,int*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct isab_pci_softc* FUNC_5 (scalar_t__) ;

__attribute__((used)) static struct resource *
FUNC_6(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct isab_pci_softc *VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_2) != VAR_1)
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8);

 switch (VAR_3) {
 case 128:
 case 129:




  VAR_10 = FUNC_1(*VAR_4);
  if (VAR_10 < 0 || VAR_10 > VAR_0)
   return (((void*)0));
  VAR_9 = FUNC_5(VAR_1);
  if (VAR_9->isab_pci_res[VAR_10].ip_res == ((void*)0))
   VAR_9->isab_pci_res[VAR_10].ip_res = FUNC_2(VAR_1, VAR_3,
       VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_9->isab_pci_res[VAR_10].ip_res != ((void*)0))
   VAR_9->isab_pci_res[VAR_10].ip_refs++;
  return (VAR_9->isab_pci_res[VAR_10].ip_res);
 }

 return (FUNC_0(FUNC_4(VAR_1), VAR_2, VAR_3, VAR_4,
  VAR_5, VAR_6, VAR_7, VAR_8));
}
