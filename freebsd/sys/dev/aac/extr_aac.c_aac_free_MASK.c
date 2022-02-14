
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {scalar_t__ aac_hwif; int * aac_regs_res1; int aac_dev; int * aac_regs_res0; scalar_t__ aac_parent_dmat; scalar_t__ aac_buffer_dmat; int * aac_irq; scalar_t__ aac_intr; scalar_t__ aac_common_dmat; int aac_common_dmamap; scalar_t__ aac_common; int aac_commands; scalar_t__ aac_fib_dmat; int * aac_dev_t; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aac_softc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct aac_softc*,char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct aac_softc *VAR_5)
{

 FUNC_8(VAR_5, VAR_1, "");


 if (VAR_5->aac_dev_t != ((void*)0))
  FUNC_6(VAR_5->aac_dev_t);


 FUNC_0(VAR_5);
 if (VAR_5->aac_fib_dmat)
  FUNC_1(VAR_5->aac_fib_dmat);

 FUNC_7(VAR_5->aac_commands, VAR_2);


 if (VAR_5->aac_common) {
  FUNC_2(VAR_5->aac_common_dmat, VAR_5->aac_common_dmamap);
  FUNC_3(VAR_5->aac_common_dmat, VAR_5->aac_common,
    VAR_5->aac_common_dmamap);
 }
 if (VAR_5->aac_common_dmat)
  FUNC_1(VAR_5->aac_common_dmat);


 if (VAR_5->aac_intr)
  FUNC_5(VAR_5->aac_dev, VAR_5->aac_irq, VAR_5->aac_intr);
 if (VAR_5->aac_irq != ((void*)0)) {
  FUNC_4(VAR_5->aac_dev, VAR_3,
      FUNC_10(VAR_5->aac_irq), VAR_5->aac_irq);
  FUNC_9(VAR_5->aac_dev);
 }


 if (VAR_5->aac_buffer_dmat)
  FUNC_1(VAR_5->aac_buffer_dmat);


 if (VAR_5->aac_parent_dmat)
  FUNC_1(VAR_5->aac_parent_dmat);


 if (VAR_5->aac_regs_res0 != ((void*)0))
  FUNC_4(VAR_5->aac_dev, VAR_4,
      FUNC_10(VAR_5->aac_regs_res0), VAR_5->aac_regs_res0);
 if (VAR_5->aac_hwif == VAR_0 && VAR_5->aac_regs_res1 != ((void*)0))
  FUNC_4(VAR_5->aac_dev, VAR_4,
      FUNC_10(VAR_5->aac_regs_res1), VAR_5->aac_regs_res1);
}
