
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_io_lock; int mlx_config_lock; int * mlx_enq2; int * mlx_mem; int mlx_mem_rid; int mlx_mem_type; int mlx_dev; scalar_t__ mlx_parent_dmat; int * mlx_irq; scalar_t__ mlx_sg_dmat; int mlx_sg_dmamap; scalar_t__ mlx_sgtable; scalar_t__ mlx_sgbusaddr; scalar_t__ mlx_buffer_dmat; int mlx_timeout; int mlx_freecmds; scalar_t__ mlx_intr; int * mlx_dev_t; } ;
struct mlx_command {int dummy; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mlx_command* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mlx_command*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int VAR_2 ;
 int FUNC_14 (struct mlx_command*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void
FUNC_17(struct mlx_softc *VAR_3)
{
    struct mlx_command *VAR_4;

    FUNC_11(1);


    if (VAR_3->mlx_dev_t != ((void*)0))
 FUNC_12(VAR_3->mlx_dev_t);

    if (VAR_3->mlx_intr)
 FUNC_8(VAR_3->mlx_dev, VAR_3->mlx_irq, VAR_3->mlx_intr);


    FUNC_0(VAR_3);
    FUNC_10(&VAR_3->mlx_timeout);


    while ((VAR_4 = FUNC_2(&VAR_3->mlx_freecmds)) != ((void*)0)) {
 FUNC_3(&VAR_3->mlx_freecmds, VAR_4, VAR_2);
 FUNC_14(VAR_4);
    }
    FUNC_1(VAR_3);
    FUNC_9(&VAR_3->mlx_timeout);


    if (VAR_3->mlx_buffer_dmat)
 FUNC_4(VAR_3->mlx_buffer_dmat);


    if (VAR_3->mlx_sgbusaddr)
 FUNC_5(VAR_3->mlx_sg_dmat, VAR_3->mlx_sg_dmamap);
    if (VAR_3->mlx_sgtable)
 FUNC_6(VAR_3->mlx_sg_dmat, VAR_3->mlx_sgtable, VAR_3->mlx_sg_dmamap);
    if (VAR_3->mlx_sg_dmat)
 FUNC_4(VAR_3->mlx_sg_dmat);


    if (VAR_3->mlx_irq != ((void*)0))
 FUNC_7(VAR_3->mlx_dev, VAR_1, 0, VAR_3->mlx_irq);


    if (VAR_3->mlx_parent_dmat)
 FUNC_4(VAR_3->mlx_parent_dmat);


    if (VAR_3->mlx_mem != ((void*)0))
 FUNC_7(VAR_3->mlx_dev, VAR_3->mlx_mem_type, VAR_3->mlx_mem_rid, VAR_3->mlx_mem);


    if (VAR_3->mlx_enq2 != ((void*)0))
 FUNC_13(VAR_3->mlx_enq2, VAR_0);

    FUNC_16(&VAR_3->mlx_config_lock);
    FUNC_15(&VAR_3->mlx_io_lock);
}
