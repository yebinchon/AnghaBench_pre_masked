
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int16_t ;
struct cam_devq {int dummy; } ;
typedef int device_t ;
struct TYPE_6__ {int * psim; int * irq; scalar_t__ ih; scalar_t__ buffer_dmat; scalar_t__ sense_dmat; int sense_dmamap; scalar_t__ sense_buffers; scalar_t__ srb_dmat; int srb_dmamap; scalar_t__ pFreeSRB; scalar_t__ sg_dmat; int * iores; int ppath; } ;
typedef TYPE_1__* PACB ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int *,int ,TYPE_1__*,scalar_t__*) ;
 int FUNC_7 (int ,int *,scalar_t__) ;
 int * FUNC_8 (int ,int ,char*,TYPE_1__*,int,int *,int,int ,struct cam_devq*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 struct cam_devq* FUNC_11 (int ) ;
 int FUNC_12 (struct cam_devq*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (TYPE_1__*) ;
 TYPE_1__* FUNC_17 (int ,int ) ;
 int VAR_16 ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int *,int ,int ) ;
 scalar_t__ FUNC_20 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_17)
{
 struct cam_devq *VAR_18;
 u_long VAR_19;
 PACB VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = FUNC_13(VAR_17);

 VAR_19 = FUNC_14(VAR_17);



 if ((VAR_20 = FUNC_17((u_int16_t) VAR_22,
         VAR_17)) == ((void*)0)) {
  FUNC_15("trm%d: trm_init error!\n",VAR_22);
  return (VAR_4);
 }







 VAR_20->irq = FUNC_1(VAR_17, VAR_10, &VAR_21,
     VAR_8 | VAR_7);
     if (VAR_20->irq == ((void*)0) ||
     FUNC_6(VAR_17, VAR_20->irq,
     VAR_6, ((void*)0), VAR_14, VAR_20, &VAR_20->ih)) {
  FUNC_15("trm%d: register Interrupt handler error!\n", VAR_22);
  goto bad;
 }
 VAR_18 = FUNC_11(VAR_11);
 if (VAR_18 == ((void*)0)){
  FUNC_15("trm%d: device_Q == NULL !\n",VAR_22);
  goto bad;
 }
 VAR_20->psim = FUNC_8(VAR_15,
     VAR_16,
     "trm",
     VAR_20,
     VAR_22,
     &VAR_5,
     1,
     VAR_12,
     VAR_18);
 if (VAR_20->psim == ((void*)0)) {
  FUNC_15("trm%d: SIM allocate fault !\n",VAR_22);
  FUNC_12(VAR_18);
  goto bad;
 }
 if (FUNC_19(VAR_20->psim, VAR_17, 0) != VAR_2) {
  FUNC_15("trm%d: xpt_bus_register fault !\n",VAR_22);
  goto bad;
 }
 if (FUNC_20(&VAR_20->ppath,
       ((void*)0),
       FUNC_10(VAR_20->psim),
       VAR_3,
       VAR_0) != VAR_1) {
  FUNC_15("trm%d: xpt_create_path fault !\n",VAR_22);
  FUNC_18(FUNC_10(VAR_20->psim));
  goto bad;
 }
 return (0);
bad:
 if (VAR_20->iores)
  FUNC_5(VAR_17, VAR_9, FUNC_0(0),
      VAR_20->iores);
 if (VAR_20->sg_dmat) {
  FUNC_16(VAR_20);
  FUNC_2(VAR_20->sg_dmat);
 }

 if (VAR_20->pFreeSRB) {
  FUNC_3(VAR_20->srb_dmat, VAR_20->srb_dmamap);
  FUNC_4(VAR_20->srb_dmat, VAR_20->pFreeSRB,
      VAR_20->srb_dmamap);
 }
 if (VAR_20->srb_dmat)
  FUNC_2(VAR_20->srb_dmat);
 if (VAR_20->sense_buffers) {
      FUNC_3(VAR_20->sense_dmat, VAR_20->sense_dmamap);
    FUNC_4(VAR_20->sense_dmat, VAR_20->sense_buffers,
        VAR_20->sense_dmamap);
 }
 if (VAR_20->sense_dmat)
  FUNC_2(VAR_20->sense_dmat);
 if (VAR_20->buffer_dmat)
  FUNC_2(VAR_20->buffer_dmat);
 if (VAR_20->ih)
  FUNC_7(VAR_17, VAR_20->irq, VAR_20->ih);
 if (VAR_20->irq)
  FUNC_5(VAR_17, VAR_10, 0, VAR_20->irq);
 if (VAR_20->psim)
  FUNC_9(VAR_20->psim, VAR_13);

 return (VAR_4);

}
