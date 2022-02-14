
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {void* amr_ccb; void* amr_sgtable; int * amr_reg; int amr_dev; scalar_t__ amr_parent_dmat; int * amr_irq; scalar_t__ amr_intr; scalar_t__ amr_mailbox_dmat; int amr_mailbox_dmamap; scalar_t__ amr_mailbox; scalar_t__ amr_mailbox64; scalar_t__ amr_sg_dmat; int amr_sg_dmamap; scalar_t__ amr_ccb_dmat; int amr_ccb_dmamap; scalar_t__ amr_buffer64_dmat; scalar_t__ amr_buffer_dmat; } ;


 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct amr_softc*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,void*,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int *,scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct amr_softc *VAR_3)
{
    void *VAR_4;

    FUNC_8(1);

    FUNC_2(VAR_3);


    if (VAR_3->amr_buffer_dmat)
 FUNC_3(VAR_3->amr_buffer_dmat);
    if (VAR_3->amr_buffer64_dmat)
 FUNC_3(VAR_3->amr_buffer64_dmat);


    if (VAR_3->amr_ccb) {
 FUNC_4(VAR_3->amr_ccb_dmat, VAR_3->amr_ccb_dmamap);
 FUNC_5(VAR_3->amr_ccb_dmat, VAR_3->amr_ccb, VAR_3->amr_ccb_dmamap);
    }
    if (VAR_3->amr_ccb_dmat)
 FUNC_3(VAR_3->amr_ccb_dmat);


    if (VAR_3->amr_sgtable) {
 FUNC_4(VAR_3->amr_sg_dmat, VAR_3->amr_sg_dmamap);
 FUNC_5(VAR_3->amr_sg_dmat, VAR_3->amr_sgtable, VAR_3->amr_sg_dmamap);
    }
    if (VAR_3->amr_sg_dmat)
 FUNC_3(VAR_3->amr_sg_dmat);


    VAR_4 = (void *)(uintptr_t)(volatile void *)VAR_3->amr_mailbox64;
    if (VAR_3->amr_mailbox) {
 FUNC_4(VAR_3->amr_mailbox_dmat, VAR_3->amr_mailbox_dmamap);
 FUNC_5(VAR_3->amr_mailbox_dmat, VAR_4, VAR_3->amr_mailbox_dmamap);
    }
    if (VAR_3->amr_mailbox_dmat)
 FUNC_3(VAR_3->amr_mailbox_dmat);


    if (VAR_3->amr_intr)
 FUNC_7(VAR_3->amr_dev, VAR_3->amr_irq, VAR_3->amr_intr);
    if (VAR_3->amr_irq != ((void*)0))
 FUNC_6(VAR_3->amr_dev, VAR_1, 0, VAR_3->amr_irq);


    if (VAR_3->amr_parent_dmat)
 FUNC_3(VAR_3->amr_parent_dmat);


    if (VAR_3->amr_reg != ((void*)0))
 FUNC_6(VAR_3->amr_dev,
        FUNC_0(VAR_3) ? VAR_2 : VAR_0,
        FUNC_1(0), VAR_3->amr_reg);
}
