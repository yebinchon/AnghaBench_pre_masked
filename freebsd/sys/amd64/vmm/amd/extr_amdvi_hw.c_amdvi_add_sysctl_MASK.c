
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct amdvi_softc {int end_dev_rid; int start_dev_rid; int pci_rid; int total_cmd; int event_intr_cnt; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct amdvi_softc*,int,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_3 (int ) ;
 int VAR_3 ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct amdvi_softc *VAR_4)
{
 struct sysctl_oid_list *VAR_5;
 struct sysctl_ctx_list *VAR_6;
 device_t VAR_7;

 VAR_7 = VAR_4->dev;
 VAR_6 = FUNC_4(VAR_7);
 VAR_5 = FUNC_3(FUNC_5(VAR_7));

 FUNC_2(VAR_6, VAR_5, VAR_2, "event_intr_count", VAR_0,
     &VAR_4->event_intr_cnt, "Event interrupt count");
 FUNC_2(VAR_6, VAR_5, VAR_2, "command_count", VAR_0,
     &VAR_4->total_cmd, "Command submitted count");
 FUNC_1(VAR_6, VAR_5, VAR_2, "pci_rid", VAR_0,
     &VAR_4->pci_rid, 0, "IOMMU RID");
 FUNC_1(VAR_6, VAR_5, VAR_2, "start_dev_rid", VAR_0,
     &VAR_4->start_dev_rid, 0, "Start of device under this IOMMU");
 FUNC_1(VAR_6, VAR_5, VAR_2, "end_dev_rid", VAR_0,
     &VAR_4->end_dev_rid, 0, "End of device under this IOMMU");
 FUNC_0(VAR_6, VAR_5, VAR_2, "command_head",
     VAR_1 | VAR_0, VAR_4, 0,
     VAR_3, "IU", "Command head");
 FUNC_0(VAR_6, VAR_5, VAR_2, "command_tail",
     VAR_1 | VAR_0, VAR_4, 1,
     VAR_3, "IU", "Command tail");
 FUNC_0(VAR_6, VAR_5, VAR_2, "event_head",
     VAR_1 | VAR_0, VAR_4, 2,
     VAR_3, "IU", "Command head");
 FUNC_0(VAR_6, VAR_5, VAR_2, "event_tail",
     VAR_1 | VAR_0, VAR_4, 3,
     VAR_3, "IU", "Command tail");
}
