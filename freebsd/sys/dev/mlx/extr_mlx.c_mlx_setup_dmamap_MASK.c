
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx_softc {int mlx_buffer_dmat; scalar_t__ mlx_sgbusaddr; struct mlx_sgentry* mlx_sgtable; TYPE_1__* mlx_enq2; } ;
struct mlx_sgentry {int sg_count; int sg_addr; } ;
struct mlx_command {int mc_slot; int mc_nsgent; int mc_flags; int mc_dmamap; int mc_dataphys; scalar_t__ mc_sgphys; struct mlx_softc* mc_sc; } ;
struct TYPE_5__ {int ds_len; int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {int me_max_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct mlx_command *VAR_5, bus_dma_segment_t *VAR_6, int VAR_7,
   int VAR_8)
{
    struct mlx_softc *VAR_9 = VAR_5->mc_sc;
    struct mlx_sgentry *VAR_10;
    int VAR_11;

    FUNC_1(1);


    if (VAR_9->mlx_enq2 && (VAR_7 > VAR_9->mlx_enq2->me_max_sg))
 FUNC_2("MLX: too many s/g segments (%d, max %d)", VAR_7,
       VAR_9->mlx_enq2->me_max_sg);


    VAR_10 = VAR_9->mlx_sgtable + (VAR_5->mc_slot * VAR_4);


    VAR_5->mc_nsgent = VAR_7;
    VAR_5->mc_sgphys = VAR_9->mlx_sgbusaddr +
     (VAR_5->mc_slot * VAR_4 * sizeof(struct mlx_sgentry));
    VAR_5->mc_dataphys = VAR_6[0].ds_addr;


    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++, VAR_10++) {
 VAR_10->sg_addr = VAR_6[VAR_11].ds_addr;
 VAR_10->sg_count = VAR_6[VAR_11].ds_len;
    }


    if (VAR_5->mc_flags & VAR_2)
 FUNC_0(VAR_9->mlx_buffer_dmat, VAR_5->mc_dmamap,
   VAR_0);
    if (VAR_5->mc_flags & VAR_3)
 FUNC_0(VAR_9->mlx_buffer_dmat, VAR_5->mc_dmamap,
   VAR_1);
}
