
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct TYPE_2__ {int flags; scalar_t__ hdrtype; } ;
struct pci_devinfo {struct resource_list resources; TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 int FUNC_5 (struct resource_list*,int ,int ,int,int,struct resource*) ;

int
FUNC_6(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{
 struct pci_devinfo *VAR_8;
 struct resource_list *VAR_9;
 pcicfgregs *VAR_10;

 if (FUNC_3(VAR_4) != VAR_3)
  return (FUNC_0(FUNC_3(VAR_3), VAR_4,
      VAR_5, VAR_6, VAR_7));

 VAR_8 = FUNC_2(VAR_4);
 VAR_10 = &VAR_8->cfg;
 VAR_9 = &VAR_8->resources;
 return (FUNC_5(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
