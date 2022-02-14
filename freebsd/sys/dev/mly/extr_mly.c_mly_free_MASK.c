
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int mly_lock; int * mly_regs_resource; int mly_regs_rid; int mly_dev; scalar_t__ mly_parent_dmat; int * mly_irq; int mly_irq_rid; scalar_t__ mly_mmbox_dmat; int mly_mmbox_dmamap; scalar_t__ mly_mmbox; scalar_t__ mly_sg_dmat; int mly_sg_dmamap; scalar_t__ mly_sg_table; scalar_t__ mly_buffer_dmat; int * mly_controllerparam; int * mly_controllerinfo; int mly_timeout; int mly_periodic; scalar_t__ mly_intr; int mly_dev_t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct mly_softc*) ;
 int FUNC_10 (struct mly_softc*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct mly_softc *VAR_3)
{

    FUNC_6(1);


    FUNC_7(VAR_3->mly_dev_t);

    if (VAR_3->mly_intr)
 FUNC_4(VAR_3->mly_dev, VAR_3->mly_irq, VAR_3->mly_intr);
    FUNC_5(&VAR_3->mly_periodic);





    FUNC_9(VAR_3);


    FUNC_10(VAR_3);


    if (VAR_3->mly_controllerinfo != ((void*)0))
 FUNC_8(VAR_3->mly_controllerinfo, VAR_0);


    if (VAR_3->mly_controllerparam != ((void*)0))
 FUNC_8(VAR_3->mly_controllerparam, VAR_0);


    if (VAR_3->mly_buffer_dmat)
 FUNC_0(VAR_3->mly_buffer_dmat);


    if (VAR_3->mly_sg_table) {
 FUNC_1(VAR_3->mly_sg_dmat, VAR_3->mly_sg_dmamap);
 FUNC_2(VAR_3->mly_sg_dmat, VAR_3->mly_sg_table, VAR_3->mly_sg_dmamap);
    }
    if (VAR_3->mly_sg_dmat)
 FUNC_0(VAR_3->mly_sg_dmat);


    if (VAR_3->mly_mmbox) {
 FUNC_1(VAR_3->mly_mmbox_dmat, VAR_3->mly_mmbox_dmamap);
 FUNC_2(VAR_3->mly_mmbox_dmat, VAR_3->mly_mmbox, VAR_3->mly_mmbox_dmamap);
    }
    if (VAR_3->mly_mmbox_dmat)
 FUNC_0(VAR_3->mly_mmbox_dmat);


    if (VAR_3->mly_irq != ((void*)0))
 FUNC_3(VAR_3->mly_dev, VAR_1, VAR_3->mly_irq_rid, VAR_3->mly_irq);


    if (VAR_3->mly_parent_dmat)
 FUNC_0(VAR_3->mly_parent_dmat);


    if (VAR_3->mly_regs_resource != ((void*)0))
 FUNC_3(VAR_3->mly_dev, VAR_2, VAR_3->mly_regs_rid, VAR_3->mly_regs_resource);

    FUNC_11(&VAR_3->mly_lock);
}
