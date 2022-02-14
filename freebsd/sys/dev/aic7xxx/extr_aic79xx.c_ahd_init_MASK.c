
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct target_cmd {int dummy; } ;
struct hardware_scb {int hscb_busaddr; } ;
struct TYPE_2__ {scalar_t__ busaddr; scalar_t__ vaddr; int dmamap; } ;
struct ahd_softc {int stack_size; int flags; int unit; int features; int bugs; int* overrun_buf; int stat_timer; int init_level; struct hardware_scb* next_queued_hscb; TYPE_1__ shared_data_map; TYPE_1__* next_queued_hscb_map; struct target_cmd* targetcmds; struct ahd_completion* qoutfifo; int shared_data_dmat; int parent_dmat; int buffer_dmat; int * saved_stack; } ;
struct ahd_completion {int dummy; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int FUNC_1 (struct ahd_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

 int VAR_28 ;


 int VAR_29 ;

 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_2 (struct ahd_softc*) ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_3 (struct ahd_softc*) ;
 char* FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*,int ,int*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int VAR_37 ;
 int FUNC_9 (struct ahd_softc*,int ,int ) ;
 scalar_t__ FUNC_10 (struct ahd_softc*,int ,int,scalar_t__,scalar_t__,int ,int *,int *,size_t,int,int ,int ,int *) ;
 int FUNC_11 (struct ahd_softc*,int ,int ,scalar_t__,size_t,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_12 (struct ahd_softc*,int ,void**,int,int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *,int ,int ,struct ahd_softc*) ;
 int VAR_38 ;
 char** VAR_39 ;
 int * FUNC_15 (int,int ,int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,...) ;
 char** VAR_40 ;

int
FUNC_18(struct ahd_softc *VAR_41)
{
 uint8_t *VAR_42;
 bus_addr_t VAR_43;
 size_t VAR_44;
 int VAR_45;
 int VAR_46;
 u_int VAR_47;
 uint8_t VAR_48;
 uint8_t VAR_49;

 FUNC_0(VAR_41, VAR_5, VAR_5);

 VAR_41->stack_size = FUNC_6(VAR_41);
 VAR_41->saved_stack = FUNC_15(VAR_41->stack_size * sizeof(uint16_t),
      VAR_31, VAR_32);
 if (VAR_41->saved_stack == ((void*)0))
  return (VAR_24);





 if (sizeof(struct hardware_scb) != 64)
  FUNC_16("Hardware SCB size is incorrect");
 VAR_41->flags |= VAR_3;




 if ((VAR_16 & (0x1 << VAR_41->unit)) == 0)
  VAR_41->features &= ~VAR_14;
 VAR_41->init_level++;
 VAR_44 = VAR_10 * sizeof(*VAR_41->qoutfifo)
    + sizeof(struct hardware_scb);
 if ((VAR_41->features & VAR_14) != 0)
  VAR_44 += VAR_15 * sizeof(struct target_cmd);
 if ((VAR_41->bugs & VAR_7) != 0)
  VAR_44 += VAR_34;
 if (FUNC_10(VAR_41, VAR_41->parent_dmat, 1,
                      VAR_21 + 1,
                     VAR_21,
                      VAR_20,
                    ((void*)0), ((void*)0),
          VAR_44,
                       1,
                      VAR_22,
                   0, &VAR_41->shared_data_dmat) != 0) {
  return (VAR_24);
 }

 VAR_41->init_level++;


 if (FUNC_12(VAR_41, VAR_41->shared_data_dmat,
        (void **)&VAR_41->shared_data_map.vaddr,
        VAR_19 | VAR_18,
        &VAR_41->shared_data_map.dmamap) != 0) {
  return (VAR_24);
 }

 VAR_41->init_level++;


 FUNC_11(VAR_41, VAR_41->shared_data_dmat, VAR_41->shared_data_map.dmamap,
   VAR_41->shared_data_map.vaddr, VAR_44,
   VAR_36, &VAR_41->shared_data_map.busaddr,
            0);
 VAR_41->qoutfifo = (struct ahd_completion *)VAR_41->shared_data_map.vaddr;
 VAR_42 = (uint8_t *)&VAR_41->qoutfifo[VAR_8];
 VAR_43 = VAR_41->shared_data_map.busaddr
     + VAR_8*sizeof(struct ahd_completion);
 if ((VAR_41->features & VAR_14) != 0) {
  VAR_41->targetcmds = (struct target_cmd *)VAR_42;
  VAR_42 += VAR_15 * sizeof(struct target_cmd);
  VAR_43 += VAR_15 * sizeof(struct target_cmd);
 }

 if ((VAR_41->bugs & VAR_7) != 0) {
  VAR_41->overrun_buf = VAR_42;
  VAR_42 += VAR_34;
  VAR_43 += VAR_34;
 }
 VAR_41->next_queued_hscb = (struct hardware_scb *)VAR_42;
 VAR_41->next_queued_hscb_map = &VAR_41->shared_data_map;
 VAR_41->next_queued_hscb->hscb_busaddr = FUNC_13(VAR_43);

 VAR_41->init_level++;


 if (FUNC_3(VAR_41) != 0)
  return (VAR_24);

 if ((VAR_41->flags & VAR_3) == 0)
  VAR_41->flags &= ~VAR_9;





 FUNC_5(VAR_41);


 FUNC_2(VAR_41);

 FUNC_0(VAR_41, VAR_5, VAR_5);

 if ((VAR_41->flags & VAR_1) == 0)
  goto init_done;





 VAR_46 = FUNC_9(VAR_41, VAR_27,
       VAR_23);
 if (VAR_46 != 0) {
  FUNC_17("%s: current sensing timeout 1\n", FUNC_4(VAR_41));
  goto init_done;
 }
 for (VAR_45 = 20, VAR_49 = VAR_30;
      (VAR_49 & VAR_30) != 0 && VAR_45; VAR_45--) {
  VAR_46 = FUNC_7(VAR_41, VAR_26, &VAR_49);
  if (VAR_46 != 0) {
   FUNC_17("%s: current sensing timeout 2\n",
          FUNC_4(VAR_41));
   goto init_done;
  }
 }
 if (VAR_45 == 0) {
  FUNC_17("%s: Timedout during current-sensing test\n",
         FUNC_4(VAR_41));
  goto init_done;
 }


 VAR_46 = FUNC_7(VAR_41, VAR_25, &VAR_48);
 if (VAR_46 != 0) {
  FUNC_17("%s: current sensing timeout 3\n", FUNC_4(VAR_41));
  goto init_done;
 }


 FUNC_9(VAR_41, VAR_27, 0);







 VAR_47 = 0;
 for (VAR_45 = 0; VAR_45 < 4; VAR_45++, VAR_48 >>= VAR_29) {
  u_int VAR_50;

  VAR_50 = (VAR_48 & VAR_28);
  switch (VAR_50) {
  case 129:
  case 128:
   VAR_47++;
  case 131:
  case 130:
   if (VAR_47 == 0 && VAR_38 == 0)
    break;
   FUNC_17("%s: %s Channel %s\n", FUNC_4(VAR_41),
          VAR_39[VAR_45], VAR_40[VAR_50]);
   break;
  }
 }
 if (VAR_47) {
  FUNC_17("%s: WARNING. Termination is not configured correctly.\n"
         "%s: WARNING. SCSI bus operations may FAIL.\n",
         FUNC_4(VAR_41), FUNC_4(VAR_41));
  FUNC_1(VAR_41);
 }
init_done:
 FUNC_8(VAR_41);
 FUNC_14(&VAR_41->stat_timer, VAR_13,
   VAR_37, VAR_41);
 return (0);
}
