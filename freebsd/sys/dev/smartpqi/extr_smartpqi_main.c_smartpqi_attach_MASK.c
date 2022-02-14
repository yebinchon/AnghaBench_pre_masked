
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_7__ {int pqi_hwif; int * pqi_regs_res0; int pqi_regs_rid0; int pqi_dev; int event_task; int eh; int wellness_periodic; int pqi_buffer_dmat; int map_lock; int pqi_parent_dmat; int mtx_init; int cam_lock; int sim_registered; } ;
struct TYPE_6__ {int max_sg_elem; int max_outstanding_io; } ;
struct TYPE_5__ {int pqi_bhandle; int pqi_btag; } ;
struct pqisrc_softstate {char* pci_mem_base_vaddr; char* os_name; TYPE_3__ os_specific; TYPE_2__ pqi_cap; TYPE_4__* rcb; TYPE_1__ pci_mem_handle; } ;
struct pqi_ident {int hwif; } ;
struct TYPE_8__ {int cm_datamap; } ;
typedef TYPE_4__ rcb_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,struct pqisrc_softstate*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,struct pqisrc_softstate*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int *,int ,int ,struct pqisrc_softstate*) ;
 int VAR_18 ;
 int * FUNC_6 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_7 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int *) ;
 int * VAR_19 ;
 int FUNC_12 (struct pqisrc_softstate*,int) ;
 struct pqisrc_softstate* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_20 ;
 int FUNC_15 (struct pqisrc_softstate*,int ,int) ;
 int FUNC_16 (int *,char*,int *,int ) ;
 int FUNC_17 (void*) ;
 int VAR_21 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int) ;
 struct pqi_ident* FUNC_20 (int ) ;
 int VAR_22 ;
 int FUNC_21 (struct pqisrc_softstate*) ;
 int FUNC_22 (struct pqisrc_softstate*) ;
 int FUNC_23 (struct pqisrc_softstate*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (struct pqisrc_softstate*,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_29 (struct pqisrc_softstate*) ;
 int FUNC_30 (int ,struct pqisrc_softstate*,int) ;

__attribute__((used)) static int
FUNC_31(device_t VAR_25)
{
 struct pqisrc_softstate *VAR_26 = ((void*)0);
 struct pqi_ident *VAR_27 = ((void*)0);
 int VAR_28 = 0;
 u_int32_t VAR_29 = 0, VAR_30 = 0;
 int VAR_31 = FUNC_14(VAR_25);
 rcb_t *VAR_32 = ((void*)0);




 VAR_26 = FUNC_13(VAR_25);

 if (!VAR_26) {
  FUNC_24("Could not get softc\n");
  VAR_28 = VAR_5;
  goto out;
 }
 FUNC_15(VAR_26, 0, sizeof(*VAR_26));
 VAR_26->os_specific.pqi_dev = VAR_25;

 FUNC_1("IN\n");


 VAR_28 = VAR_7;




 FUNC_18(VAR_26->os_specific.pqi_dev);
 VAR_29 = FUNC_19(VAR_26->os_specific.pqi_dev, VAR_12, 2);
 if ((VAR_29 & VAR_11) == 0) {
  FUNC_0("memory window not available command = %d\n", VAR_29);
  VAR_28 = VAR_7;
  goto out;
 }





 VAR_27 = FUNC_20(VAR_25);
 VAR_26->os_specific.pqi_hwif = VAR_27->hwif;

 switch(VAR_26->os_specific.pqi_hwif) {
  case 128:
   FUNC_2("set hardware up for PMC SRCv for %p", VAR_26);
   break;
  default:
   VAR_26->os_specific.pqi_hwif = VAR_13;
   FUNC_0("unknown hardware type\n");
   VAR_28 = VAR_7;
   goto out;
 }

 FUNC_22(VAR_26);




 VAR_26->os_specific.pqi_regs_rid0 = FUNC_4(0);
 if ((VAR_26->os_specific.pqi_regs_res0 =
  FUNC_6(VAR_26->os_specific.pqi_dev, VAR_17,
  &VAR_26->os_specific.pqi_regs_rid0, VAR_15)) == ((void*)0)) {
  FUNC_0("couldn't allocate register window 0\n");

  VAR_28 = VAR_6;
  goto out;
 }

 FUNC_10(VAR_26->os_specific.pqi_dev, VAR_17,
  VAR_26->os_specific.pqi_regs_rid0);

 VAR_26->pci_mem_handle.pqi_btag = FUNC_27(VAR_26->os_specific.pqi_regs_res0);
 VAR_26->pci_mem_handle.pqi_bhandle = FUNC_26(VAR_26->os_specific.pqi_regs_res0);

 VAR_26->pci_mem_base_vaddr = (char *)FUNC_28(VAR_26->os_specific.pqi_regs_res0);






 if (FUNC_7(FUNC_9(VAR_25),
    VAR_10, 0,
    VAR_2,
    VAR_1,
    ((void*)0), ((void*)0),
    VAR_3,
    VAR_4,
    VAR_3,
    0,
    ((void*)0), ((void*)0),
    &VAR_26->os_specific.pqi_parent_dmat)) {
  FUNC_0("can't allocate parent DMA tag\n");

  VAR_28 = VAR_6;
  goto dma_out;
 }

 VAR_26->os_specific.sim_registered = VAR_8;
 VAR_26->os_name = "FreeBSD ";


 VAR_28 = FUNC_21(VAR_26);
 if (VAR_28) {
  FUNC_0("Failed to initialize pqi lib error = %d\n", VAR_28);
  VAR_28 = VAR_14;
  goto out;
 }

        FUNC_16(&VAR_26->os_specific.cam_lock, "cam_lock", ((void*)0), VAR_9);
        VAR_26->os_specific.mtx_init = VAR_18;
        FUNC_16(&VAR_26->os_specific.map_lock, "map_lock", ((void*)0), VAR_9);




        if (FUNC_7(VAR_26->os_specific.pqi_parent_dmat,
    1, 0,
    VAR_2,
    VAR_1,
    ((void*)0), ((void*)0),
    VAR_26->pqi_cap.max_sg_elem*VAR_10,
    VAR_26->pqi_cap.max_sg_elem,
    VAR_3,
    VAR_0,
    VAR_19,
    &VAR_26->os_specific.map_lock,
    &VAR_26->os_specific.pqi_buffer_dmat)) {
  FUNC_0("can't allocate buffer DMA tag for pqi_buffer_dmat\n");
  return (VAR_6);
        }

 VAR_32 = &VAR_26->rcb[1];
 for( VAR_30 = 1; VAR_30 <= VAR_26->pqi_cap.max_outstanding_io; VAR_30++, VAR_32++ ) {
  if ((VAR_28 = FUNC_8(VAR_26->os_specific.pqi_buffer_dmat, 0, &VAR_32->cm_datamap)) != 0) {
   FUNC_0("Cant create datamap for buf @"
   "rcbp = %p maxio = %d error = %d\n",
   VAR_32, VAR_26->pqi_cap.max_outstanding_io, VAR_28);
   goto dma_out;
  }
 }

 FUNC_17((void *)VAR_26);
 VAR_26->os_specific.wellness_periodic = FUNC_30( VAR_21,
       VAR_26, 120*VAR_20);

 VAR_26->os_specific.eh = FUNC_3(VAR_23,
    VAR_24, VAR_26, VAR_16);

 VAR_28 = FUNC_23(VAR_26);
 if (VAR_28) {
  FUNC_0("Failed to scan lib error = %d\n", VAR_28);
  VAR_28 = VAR_14;
  goto out;
 }

 VAR_28 = FUNC_25(VAR_26, VAR_31);
 if (VAR_28) {
  FUNC_0("Failed to register sim index = %d error = %d\n",
   VAR_31, VAR_28);
  goto out;
 }

 FUNC_29(VAR_26);

 FUNC_5(&VAR_26->os_specific.event_task, 0, VAR_22,VAR_26);

 VAR_28 = FUNC_12(VAR_26, VAR_31);
 if (VAR_28) {
  FUNC_0("Failed to register character device index=%d r=%d\n",
   VAR_31, VAR_28);
  goto out;
 }
 goto out;

dma_out:
 if (VAR_26->os_specific.pqi_regs_res0 != ((void*)0))
  FUNC_11(VAR_26->os_specific.pqi_dev, VAR_17,
   VAR_26->os_specific.pqi_regs_rid0,
   VAR_26->os_specific.pqi_regs_res0);
out:
 FUNC_1("OUT error = %d\n", VAR_28);
 return(VAR_28);
}
