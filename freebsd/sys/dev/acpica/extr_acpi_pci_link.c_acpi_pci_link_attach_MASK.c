
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct link_res_request {scalar_t__ count; struct acpi_pci_link_softc* sc; scalar_t__ res_index; scalar_t__ link_index; void* in_dpf; } ;
struct link_count_request {scalar_t__ count; struct acpi_pci_link_softc* sc; scalar_t__ res_index; scalar_t__ link_index; void* in_dpf; } ;
struct link {int dummy; } ;
struct acpi_pci_link_softc {scalar_t__ pl_num_links; TYPE_1__* pl_links; scalar_t__ pl_crs_bad; int pl_dev; } ;
typedef int device_t ;
struct TYPE_4__ {int l_res_index; struct TYPE_4__* l_irqs; int l_routed; void* l_irq; void* l_initial_irq; int l_isa_irq; struct acpi_pci_link_softc* l_sc; void* l_bios_irq; } ;
typedef scalar_t__ ACPI_STATUS ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,char*,int *,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,char*,int ,struct link_res_request*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (void*) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct acpi_pci_link_softc*,int,char*) ;
 scalar_t__ VAR_10 ;
 struct acpi_pci_link_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (TYPE_1__*,void*) ;
 TYPE_1__* FUNC_14 (int,int ,int) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_15(device_t VAR_14)
{
 struct acpi_pci_link_softc *VAR_15;
 struct link_count_request VAR_16;
 struct link_res_request VAR_17;
 ACPI_STATUS VAR_18;
 int VAR_19;

 VAR_15 = FUNC_10(VAR_14);
 VAR_15->pl_dev = VAR_14;
 FUNC_1(VAR_13);






 VAR_16.in_dpf = VAR_1;
 VAR_16.count = 0;
 VAR_18 = FUNC_6(FUNC_8(VAR_14), "_CRS",
     VAR_9, &VAR_16);
 VAR_15->pl_crs_bad = FUNC_0(VAR_18);
 if (VAR_15->pl_crs_bad) {
  VAR_16.in_dpf = VAR_1;
  VAR_16.count = 0;
  VAR_18 = FUNC_6(FUNC_8(VAR_14), "_PRS",
      VAR_9, &VAR_16);
  if (FUNC_0(VAR_18)) {
   FUNC_11(VAR_14,
       "Unable to parse _CRS or _PRS: %s\n",
       FUNC_5(VAR_18));
   FUNC_2(VAR_13);
   return (VAR_2);
  }
 }
 VAR_15->pl_num_links = VAR_16.count;
 if (VAR_16.count == 0) {
  FUNC_2(VAR_13);
  return (0);
 }
 VAR_15->pl_links = FUNC_14(sizeof(struct link) * VAR_15->pl_num_links,
     VAR_4, VAR_5 | VAR_6);


 for (VAR_19 = 0; VAR_19 < VAR_15->pl_num_links; VAR_19++) {
  VAR_15->pl_links[VAR_19].l_irq = VAR_7;
  VAR_15->pl_links[VAR_19].l_bios_irq = VAR_7;
  VAR_15->pl_links[VAR_19].l_sc = VAR_15;
  VAR_15->pl_links[VAR_19].l_isa_irq = VAR_3;
  VAR_15->pl_links[VAR_19].l_res_index = -1;
 }


 if (!VAR_15->pl_crs_bad) {
  VAR_17.in_dpf = VAR_1;
  VAR_17.link_index = 0;
  VAR_17.res_index = 0;
  VAR_17.sc = VAR_15;
  VAR_18 = FUNC_6(FUNC_8(VAR_14), "_CRS",
      VAR_11, &VAR_17);
  if (FUNC_0(VAR_18)) {
   FUNC_11(VAR_14, "Unable to parse _CRS: %s\n",
       FUNC_5(VAR_18));
   goto fail;
  }
 }






 VAR_17.in_dpf = VAR_1;
 VAR_17.link_index = 0;
 VAR_17.res_index = 0;
 VAR_17.sc = VAR_15;
 VAR_18 = FUNC_6(FUNC_8(VAR_14), "_PRS",
     VAR_12, &VAR_17);
 if (FUNC_0(VAR_18) &&
     (VAR_18 != VAR_0 || VAR_15->pl_crs_bad)) {
  FUNC_11(VAR_14, "Unable to parse _PRS: %s\n",
      FUNC_5(VAR_18));
  goto fail;
 }
 if (VAR_10)
  FUNC_9(VAR_15, 1, "Initial Probe");


 if (VAR_18 != VAR_0)
  for (VAR_19 = 0; VAR_19 < VAR_15->pl_num_links; VAR_19++)
   if (!FUNC_13(&VAR_15->pl_links[VAR_19],
       VAR_15->pl_links[VAR_19].l_irq))
    VAR_15->pl_links[VAR_19].l_irq = VAR_7;
 if (VAR_10)
  FUNC_9(VAR_15, 0, "Validation");


 for (VAR_19 = 0; VAR_19 < VAR_15->pl_num_links; VAR_19++)
  VAR_15->pl_links[VAR_19].l_initial_irq = VAR_15->pl_links[VAR_19].l_irq;







 if (FUNC_3(FUNC_4(FUNC_8(VAR_14), "_DIS", ((void*)0),
     ((void*)0))))
  for (VAR_19 = 0; VAR_19 < VAR_15->pl_num_links; VAR_19++)
   VAR_15->pl_links[VAR_19].l_irq = VAR_7;
 else
  for (VAR_19 = 0; VAR_19 < VAR_15->pl_num_links; VAR_19++)
   if (FUNC_7(VAR_15->pl_links[VAR_19].l_irq))
    VAR_15->pl_links[VAR_19].l_routed = VAR_8;
 if (VAR_10)
  FUNC_9(VAR_15, 0, "After Disable");
 FUNC_2(VAR_13);
 return (0);
fail:
 FUNC_2(VAR_13);
 for (VAR_19 = 0; VAR_19 < VAR_15->pl_num_links; VAR_19++)
  if (VAR_15->pl_links[VAR_19].l_irqs != ((void*)0))
   FUNC_12(VAR_15->pl_links[VAR_19].l_irqs, VAR_4);
 FUNC_12(VAR_15->pl_links, VAR_4);
 return (VAR_2);
}
