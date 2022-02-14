
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_state; int mlx_dev; } ;
struct mlx_command {scalar_t__ mc_status; int * mc_complete; int mc_dataphys; int mc_command; struct mlx_softc* mc_sc; } ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mlx_command*) ;
 int FUNC_2 (struct mlx_command*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlx_command*) ;
 int FUNC_4 (struct mlx_command*,int *,int,int) ;
 int FUNC_5 (struct mlx_command*) ;
 scalar_t__ FUNC_6 (struct mlx_command*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
    struct mlx_softc *VAR_5;
    struct mlx_command *VAR_6;

    VAR_6 = (struct mlx_command *)VAR_1;
    if (VAR_4)
 return;

    FUNC_4(VAR_6, VAR_2, VAR_3, VAR_4);


    VAR_5 = VAR_6->mc_sc;
    FUNC_2(VAR_6, VAR_6->mc_command, 0, 0, 0, 0, 0, 0, VAR_6->mc_dataphys, 0);


    if (VAR_6->mc_complete != ((void*)0)) {
 if ((VAR_4 = FUNC_5(VAR_6)) != 0)
     return;
    } else {

 if ((VAR_5->mlx_state & VAR_0) ? FUNC_6(VAR_6) :
      FUNC_3(VAR_6))
     return;


 if (VAR_6->mc_status != 0) {
     FUNC_0(VAR_5->mlx_dev, "ENQUIRY failed - %s\n",
     FUNC_1(VAR_6));
     return;
 }
    }
}
