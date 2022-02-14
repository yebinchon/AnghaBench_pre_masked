
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_softc {int device; TYPE_1__* bar_info; } ;
struct TYPE_3__ {int pbarxlat_off; int ssz_off; int psz_off; void* pci_resource_id; } ;


 int FUNC_0 (struct ntb_softc*,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ntb_softc*,TYPE_1__*) ;
 int FUNC_4 (struct ntb_softc*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct ntb_softc *VAR_14)
{
 int VAR_15;

 VAR_14->bar_info[VAR_3].pci_resource_id = FUNC_1(0);
 VAR_15 = FUNC_4(VAR_14, &VAR_14->bar_info[VAR_3]);
 if (VAR_15 != 0)
  goto out;

 VAR_14->bar_info[VAR_0].pci_resource_id = FUNC_1(2);
 VAR_15 = FUNC_3(VAR_14, &VAR_14->bar_info[VAR_0]);
 if (VAR_15 != 0)
  goto out;
 VAR_14->bar_info[VAR_0].psz_off = VAR_5;
 VAR_14->bar_info[VAR_0].ssz_off = VAR_11;
 VAR_14->bar_info[VAR_0].pbarxlat_off = VAR_6;

 VAR_14->bar_info[VAR_1].pci_resource_id = FUNC_1(4);
 VAR_15 = FUNC_3(VAR_14, &VAR_14->bar_info[VAR_1]);
 if (VAR_15 != 0)
  goto out;
 VAR_14->bar_info[VAR_1].psz_off = VAR_7;
 VAR_14->bar_info[VAR_1].ssz_off = VAR_12;
 VAR_14->bar_info[VAR_1].pbarxlat_off = VAR_8;

 if (!FUNC_0(VAR_14, VAR_4))
  goto out;

 VAR_14->bar_info[VAR_2].pci_resource_id = FUNC_1(5);
 VAR_15 = FUNC_3(VAR_14, &VAR_14->bar_info[VAR_2]);
 VAR_14->bar_info[VAR_2].psz_off = VAR_9;
 VAR_14->bar_info[VAR_2].ssz_off = VAR_13;
 VAR_14->bar_info[VAR_2].pbarxlat_off = VAR_10;

out:
 if (VAR_15 != 0)
  FUNC_2(VAR_14->device,
      "unable to allocate pci resource\n");
 return (VAR_15);
}
