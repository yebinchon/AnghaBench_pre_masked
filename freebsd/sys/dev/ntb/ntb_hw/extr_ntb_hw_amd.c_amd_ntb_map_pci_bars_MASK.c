
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd_ntb_softc {TYPE_1__* bar_info; } ;
struct TYPE_2__ {int limit_off; int xlat_off; void* pci_resource_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct amd_ntb_softc*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct amd_ntb_softc *VAR_10)
{
 int VAR_11 = 0;


 VAR_10->bar_info[VAR_9].pci_resource_id = FUNC_0(0);
 VAR_11 = FUNC_2(VAR_10, &VAR_10->bar_info[VAR_9]);
 if (VAR_11 != 0)
  goto out;


 VAR_10->bar_info[VAR_6].pci_resource_id = FUNC_0(1);
 VAR_11 = FUNC_2(VAR_10, &VAR_10->bar_info[VAR_6]);
 if (VAR_11 != 0)
  goto out;
 VAR_10->bar_info[VAR_6].xlat_off = VAR_1;
 VAR_10->bar_info[VAR_6].limit_off = VAR_0;


 VAR_10->bar_info[VAR_7].pci_resource_id = FUNC_0(2);
 VAR_11 = FUNC_2(VAR_10, &VAR_10->bar_info[VAR_7]);
 if (VAR_11 != 0)
  goto out;
 VAR_10->bar_info[VAR_7].xlat_off = VAR_3;
 VAR_10->bar_info[VAR_7].limit_off = VAR_2;


 VAR_10->bar_info[VAR_8].pci_resource_id = FUNC_0(4);
 VAR_11 = FUNC_2(VAR_10, &VAR_10->bar_info[VAR_8]);
 if (VAR_11 != 0)
  goto out;
 VAR_10->bar_info[VAR_8].xlat_off = VAR_5;
 VAR_10->bar_info[VAR_8].limit_off = VAR_4;

out:
 if (VAR_11 != 0)
  FUNC_1(0, "unable to allocate pci resource\n");

 return (VAR_11);
}
