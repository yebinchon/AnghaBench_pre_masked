
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ida_softc {int regs_res_id; int ih; int * irq; int irq_res_type; int parent_dmat; int * regs; int regs_res_type; int lock; int ch; int flags; int cmd; int dev; } ;
struct ida_board {int flags; int * accessor; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct ida_softc*,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ida_softc*) ;
 int VAR_16 ;
 struct ida_board* FUNC_9 (int ) ;
 int FUNC_10 (struct ida_softc*) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_17)
{
 struct ida_board *VAR_18 = FUNC_9(VAR_17);
 u_int32_t VAR_19 = FUNC_12(VAR_17);
 struct ida_softc *VAR_20;
 int VAR_21, VAR_22;

 VAR_20 = (struct ida_softc *)FUNC_6(VAR_17);
 VAR_20->dev = VAR_17;
 VAR_20->cmd = *VAR_18->accessor;
 VAR_20->flags = VAR_18->flags;
 FUNC_11(&VAR_20->lock, "ida", ((void*)0), VAR_11);
 FUNC_5(&VAR_20->ch, &VAR_20->lock, 0);

 VAR_20->regs_res_type = VAR_15;
 VAR_20->regs_res_id = VAR_7;
 if (VAR_19 == VAR_6)
  VAR_20->regs_res_id = FUNC_0(0);

 VAR_20->regs = FUNC_1(VAR_17, VAR_20->regs_res_type,
     &VAR_20->regs_res_id, VAR_12);
 if (VAR_20->regs == ((void*)0)) {
  FUNC_7(VAR_17, "can't allocate memory resources\n");
  return (VAR_5);
 }

 VAR_21 = FUNC_2(
               FUNC_3(VAR_17),
                  1,
                 0,
                VAR_2,
                 VAR_1,
               ((void*)0),
                  ((void*)0),
                VAR_3,
                  VAR_4,
                   VAR_3,
              VAR_0,
                 ((void*)0),
                ((void*)0),
  &VAR_20->parent_dmat);
 if (VAR_21 != 0) {
  FUNC_7(VAR_17, "can't allocate DMA tag\n");
  FUNC_8(VAR_20);
  return (VAR_5);
 }

 VAR_22 = 0;
 VAR_20->irq_res_type = VAR_14;
 VAR_20->irq = FUNC_1(VAR_17, VAR_20->irq_res_type, &VAR_22,
     VAR_12 | VAR_13);
 if (VAR_20->irq == ((void*)0)) {
         FUNC_8(VAR_20);
         return (VAR_5);
 }
 VAR_21 = FUNC_4(VAR_17, VAR_20->irq, VAR_10 | VAR_8 | VAR_9,
     ((void*)0), VAR_16, VAR_20, &VAR_20->ih);
 if (VAR_21) {
  FUNC_7(VAR_17, "can't setup interrupt\n");
  FUNC_8(VAR_20);
  return (VAR_5);
 }

 VAR_21 = FUNC_10(VAR_20);
 if (VAR_21) {
         FUNC_8(VAR_20);
         return (VAR_21);
 }

 return (0);
}
