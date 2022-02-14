
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mp_when; int mp_howlong; int mp_which; } ;
struct mlx_softc {int mlx_dev; TYPE_2__ mlx_pause; TYPE_1__* mlx_enq2; } ;
struct mlx_command {struct mlx_softc* mc_private; int mc_complete; int mc_flags; } ;
struct TYPE_3__ {int me_actual_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (int ,char*,char*,int) ;
 struct mlx_command* FUNC_2 (struct mlx_softc*) ;
 scalar_t__ FUNC_3 (struct mlx_command*) ;
 int FUNC_4 (struct mlx_command*,int,int,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct mlx_command*) ;
 scalar_t__ FUNC_6 (struct mlx_command*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(struct mlx_softc *VAR_5)
{
    struct mlx_command *VAR_6;
    int VAR_7, VAR_8, VAR_9;

    FUNC_0(VAR_5);


    if (VAR_5->mlx_pause.mp_when == 0) {
 VAR_9 = VAR_1;
 VAR_7 = 0;

    } else {
 VAR_9 = VAR_2;






 VAR_7 = ((VAR_5->mlx_pause.mp_howlong - VAR_4) + 5) / 30;
 if (VAR_7 > 0xf) {
     VAR_7 = 0xf;
     VAR_5->mlx_pause.mp_howlong = VAR_4 + (0xf * 30) - 5;
 }
    }


    for (VAR_8 = 0; VAR_8 < VAR_5->mlx_enq2->me_actual_channels; VAR_8++) {
 if ((1 << VAR_8) & VAR_5->mlx_pause.mp_which) {


     if ((VAR_6 = FUNC_2(VAR_5)) == ((void*)0))
  goto fail;

     VAR_6->mc_flags |= VAR_0;
     if (FUNC_3(VAR_6))
  goto fail;


     FUNC_4(VAR_6, VAR_9, (VAR_7 << 4) | VAR_8, 0, 0, 0, 0, 0, 0, 0);
     VAR_6->mc_complete = VAR_3;
     VAR_6->mc_private = VAR_5;
     if (FUNC_6(VAR_6))
  goto fail;

     return;

 fail:
     FUNC_1(VAR_5->mlx_dev, "%s failed for channel %d\n",
     VAR_9 == VAR_2 ? "pause" : "resume", VAR_8);
     if (VAR_6 != ((void*)0))
  FUNC_5(VAR_6);
 }
    }
}
