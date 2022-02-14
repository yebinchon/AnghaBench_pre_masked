
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_softc {int * mlx_sgtable; int mlx_sg_dmamap; int * mlx_sg_dmat; int mlx_dev; int mlx_parent_dmat; TYPE_1__* mlx_enq2; scalar_t__ mlx_sgbusaddr; } ;
struct mlx_sgentry {int dummy; } ;
struct TYPE_2__ {int me_max_commands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,size_t,int,int ,int ,int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,size_t,int ,struct mlx_softc*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,void**,int ,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct mlx_softc *VAR_6)
{
    size_t VAR_7;
    int VAR_8, VAR_9;

    FUNC_6(1);


    if (VAR_6->mlx_sgbusaddr)
 FUNC_3(VAR_6->mlx_sg_dmat, VAR_6->mlx_sg_dmamap);
    if (VAR_6->mlx_sgtable)
 FUNC_5(VAR_6->mlx_sg_dmat, VAR_6->mlx_sgtable, VAR_6->mlx_sg_dmamap);
    if (VAR_6->mlx_sg_dmat)
 FUNC_1(VAR_6->mlx_sg_dmat);
    VAR_6->mlx_sgbusaddr = 0;
    VAR_6->mlx_sgtable = ((void*)0);
    VAR_6->mlx_sg_dmat = ((void*)0);







    if (VAR_6->mlx_enq2 == ((void*)0)) {
 VAR_9 = 2;
    } else {
 VAR_9 = VAR_6->mlx_enq2->me_max_commands;
    }
    VAR_7 = sizeof(struct mlx_sgentry) * VAR_4 * VAR_9;
    VAR_8 = FUNC_0(VAR_6->mlx_parent_dmat,
          1, 0,
          VAR_1,
          VAR_1,
          ((void*)0), ((void*)0),
          VAR_7, 1,
          VAR_2,
          0,
          ((void*)0), ((void*)0),
          &VAR_6->mlx_sg_dmat);
    if (VAR_8 != 0) {
 FUNC_7(VAR_6->mlx_dev, "can't allocate scatter/gather DMA tag\n");
 return(VAR_3);
    }
    VAR_8 = FUNC_4(VAR_6->mlx_sg_dmat, (void **)&VAR_6->mlx_sgtable,
        VAR_0, &VAR_6->mlx_sg_dmamap);
    if (VAR_8) {
 FUNC_7(VAR_6->mlx_dev, "can't allocate s/g table\n");
 return(VAR_3);
    }
    (void)FUNC_2(VAR_6->mlx_sg_dmat, VAR_6->mlx_sg_dmamap, VAR_6->mlx_sgtable,
     VAR_7, VAR_5, VAR_6, 0);
    return(0);
}
