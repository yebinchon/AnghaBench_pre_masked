
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ciss_softc {int ciss_regs_rid; int ciss_cfg_rid; int* ciss_irq_rid; int ciss_interrupt_mask; int ciss_buffer_dmat; int ciss_mtx; int ciss_parent_dmat; int ciss_dev; int ciss_intr; int * ciss_irq_resource; struct ciss_perf_config* ciss_perf; struct ciss_config_table* ciss_cfg; int ciss_max_requests; int * ciss_regs_resource; int * ciss_cfg_resource; int ciss_regs_btag; int ciss_regs_bhandle; } ;
struct ciss_perf_config {int dummy; } ;
struct ciss_config_table {int supported_methods; int requested_method; int active_method; int host_driver; int interrupt_coalesce_count; int interrupt_coalesce_delay; scalar_t__ command_physlimit; scalar_t__ transport_offset; int * signature; int max_outstanding_commands; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ciss_softc*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct ciss_softc*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* FUNC_2 (int ,int ,int*,int) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,int,int *,void*,struct ciss_softc*,int *) ;
 int * VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_6 (struct ciss_softc*) ;
 void* VAR_34 ;
 int FUNC_7 (int ) ;
 void* VAR_35 ;
 void* VAR_36 ;
 int FUNC_8 (struct ciss_softc*,char*,...) ;
 scalar_t__ FUNC_9 (struct ciss_softc*) ;
 scalar_t__ FUNC_10 (struct ciss_softc*) ;
 TYPE_1__* VAR_37 ;
 int FUNC_11 (struct ciss_softc*) ;
 int FUNC_12 (int,char*,struct ciss_config_table*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_21(struct ciss_softc *VAR_38)
{
    uintptr_t VAR_39, VAR_40, VAR_41;
    uint32_t VAR_42, VAR_43;
    int VAR_44, VAR_45, VAR_46;
    void *VAR_47;

    FUNC_13(1);




    VAR_46 = FUNC_7(VAR_38->ciss_dev);
    if (VAR_46 < 0) {
 FUNC_8(VAR_38, "unknown adapter type\n");
 return (VAR_23);
    }

    if (VAR_37[VAR_46].flags & VAR_4) {
 VAR_45 = VAR_18;
    } else if (VAR_37[VAR_46].flags & VAR_5) {
 VAR_45 = VAR_19;
    } else {





 VAR_45 = ~0;
    }





    VAR_44 = VAR_23;
    VAR_38->ciss_regs_rid = VAR_14;
    if ((VAR_38->ciss_regs_resource =
  FUNC_2(VAR_38->ciss_dev, VAR_30,
    &VAR_38->ciss_regs_rid, VAR_27)) == ((void*)0)) {
 FUNC_8(VAR_38, "can't allocate register window\n");
 return(VAR_23);
    }
    VAR_38->ciss_regs_bhandle = FUNC_15(VAR_38->ciss_regs_resource);
    VAR_38->ciss_regs_btag = FUNC_16(VAR_38->ciss_regs_resource);





    VAR_38->ciss_cfg_rid = FUNC_1(VAR_38, VAR_15) & 0xffff;
    if (VAR_38->ciss_cfg_rid != VAR_38->ciss_regs_rid) {
 if ((VAR_38->ciss_cfg_resource =
      FUNC_2(VAR_38->ciss_dev, VAR_30,
        &VAR_38->ciss_cfg_rid, VAR_27)) == ((void*)0)) {
     FUNC_8(VAR_38, "can't allocate config window\n");
     return(VAR_23);
 }
 VAR_39 = (uintptr_t)FUNC_19(VAR_38->ciss_cfg_resource);
 VAR_40 = FUNC_17(VAR_38->ciss_cfg_resource) -
     FUNC_18(VAR_38->ciss_cfg_resource) + 1;
    } else {
 VAR_39 = (uintptr_t)FUNC_19(VAR_38->ciss_regs_resource);
 VAR_40 = FUNC_17(VAR_38->ciss_regs_resource) -
     FUNC_18(VAR_38->ciss_regs_resource) + 1;
    }
    VAR_41 = FUNC_1(VAR_38, VAR_16);





    if ((VAR_41 + sizeof(struct ciss_config_table)) > VAR_40) {
 FUNC_8(VAR_38, "config table outside window\n");
 return(VAR_23);
    }
    VAR_38->ciss_cfg = (struct ciss_config_table *)(VAR_39 + VAR_41);
    FUNC_12(1, "config struct at %p", VAR_38->ciss_cfg);





    VAR_38->ciss_max_requests = FUNC_14(VAR_10, VAR_38->ciss_cfg->max_outstanding_commands);





    if (FUNC_20(VAR_38->ciss_cfg->signature, "CISS", 4)) {
 FUNC_8(VAR_38, "config signature mismatch (got '%c%c%c%c')\n",
      VAR_38->ciss_cfg->signature[0], VAR_38->ciss_cfg->signature[1],
      VAR_38->ciss_cfg->signature[2], VAR_38->ciss_cfg->signature[3]);
 return(VAR_23);
    }




    if (!(VAR_38->ciss_cfg->supported_methods &
 (VAR_21 | VAR_20))) {
 FUNC_8(VAR_38, "No supported transport layers: 0x%x\n",
     VAR_38->ciss_cfg->supported_methods);
    }

    switch (VAR_33) {
    case 1:
 VAR_43 = VAR_21;
 break;
    case 2:
 VAR_43 = VAR_20;
 break;
    default:




        if (VAR_37[VAR_46].flags & VAR_6)
                VAR_43 = VAR_21;
        else
                VAR_43 = VAR_38->ciss_cfg->supported_methods;
        break;
    }

setup:
    if ((VAR_43 & VAR_20) != 0) {
 VAR_42 = VAR_20;
 VAR_38->ciss_perf = (struct ciss_perf_config *)(VAR_39 + VAR_41 +
     VAR_38->ciss_cfg->transport_offset);
 if (FUNC_6(VAR_38)) {
     VAR_43 &= ~VAR_42;
     goto setup;
 }
    } else if (VAR_43 & VAR_21) {
 VAR_42 = VAR_21;
    } else {
 FUNC_8(VAR_38, "No supported transport methods: 0x%x\n",
     VAR_38->ciss_cfg->supported_methods);
 return(VAR_23);
    }





    VAR_38->ciss_cfg->requested_method = VAR_42;
    VAR_38->ciss_cfg->command_physlimit = 0;
    VAR_38->ciss_cfg->interrupt_coalesce_delay = VAR_9;
    VAR_38->ciss_cfg->interrupt_coalesce_count = VAR_8;





    if (FUNC_10(VAR_38)) {
 FUNC_8(VAR_38, "adapter refuses to accept config update (IDBR 0x%x)\n",
      FUNC_1(VAR_38, VAR_17));
 return(VAR_23);
    }
    if ((VAR_38->ciss_cfg->active_method & VAR_42) == 0) {
 VAR_43 &= ~VAR_42;
 if (VAR_43 == 0) {
     FUNC_8(VAR_38, "adapter refuses to go into available transports "
  "mode (0x%x, 0x%x)\n", VAR_43,
  VAR_38->ciss_cfg->active_method);
     return(VAR_23);
 } else
     goto setup;
    }




    if ((VAR_44 = FUNC_11(VAR_38)) != 0)
 return(VAR_44);




    VAR_38->ciss_irq_rid[0] = 0;
    if (VAR_42 == VAR_20) {
 FUNC_8(VAR_38, "PERFORMANT Transport\n");
 if ((VAR_32 != 1) && (FUNC_9(VAR_38) == 0)) {
     VAR_47 = VAR_36;
 } else {
     VAR_47 = VAR_35;
 }





 VAR_38->ciss_interrupt_mask = VAR_13 | VAR_12;

    } else {
 FUNC_8(VAR_38, "SIMPLE Transport\n");

 if (VAR_32 == 2)

     FUNC_9(VAR_38);
 VAR_38->ciss_perf = ((void*)0);
 VAR_47 = VAR_34;
 VAR_38->ciss_interrupt_mask = VAR_45;
    }




    FUNC_0(VAR_38);




    if ((VAR_38->ciss_irq_resource =
  FUNC_2(VAR_38->ciss_dev, VAR_29, &VAR_38->ciss_irq_rid[0],
    VAR_27 | VAR_28)) == ((void*)0)) {
 FUNC_8(VAR_38, "can't allocate interrupt\n");
 return(VAR_23);
    }

    if (FUNC_5(VAR_38->ciss_dev, VAR_38->ciss_irq_resource,
         VAR_25|VAR_24, ((void*)0), VAR_47, VAR_38,
         &VAR_38->ciss_intr)) {
 FUNC_8(VAR_38, "can't set up interrupt\n");
 return(VAR_23);
    }
    if (FUNC_3(FUNC_4(VAR_38->ciss_dev),
      1, 0,
      VAR_1,
      VAR_1,
      ((void*)0), ((void*)0),
      VAR_2,
      VAR_3,
      VAR_2,
      0,
      ((void*)0), ((void*)0),
      &VAR_38->ciss_parent_dmat)) {
 FUNC_8(VAR_38, "can't allocate parent DMA tag\n");
 return(VAR_22);
    }





    if (FUNC_3(VAR_38->ciss_parent_dmat,
      1, 0,
      VAR_1,
      VAR_1,
      ((void*)0), ((void*)0),
      (VAR_11 - 1) * VAR_26,
      VAR_11,
      VAR_2,
      VAR_0,
      VAR_31, &VAR_38->ciss_mtx,
      &VAR_38->ciss_buffer_dmat)) {
 FUNC_8(VAR_38, "can't allocate buffer DMA tag\n");
 return(VAR_22);
    }
    return(0);
}
