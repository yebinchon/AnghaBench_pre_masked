
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mp_howlong; } ;
struct mlx_softc {int mlx_dev; TYPE_1__ mlx_pause; } ;
struct mlx_command {int* mc_mailbox; scalar_t__ mc_status; struct mlx_softc* mc_sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mlx_command*) ;
 int FUNC_3 (struct mlx_command*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct mlx_command *VAR_2)
{
    struct mlx_softc *VAR_3 = VAR_2->mc_sc;
    int VAR_4 = VAR_2->mc_mailbox[0];
    int VAR_5 = VAR_2->mc_mailbox[2] & 0xf;

    FUNC_0(VAR_3);
    if (VAR_2->mc_status != 0) {
 FUNC_1(VAR_3->mlx_dev, "%s command failed - %s\n",
        VAR_4 == VAR_0 ? "pause" : "resume", FUNC_2(VAR_2));
    } else if (VAR_4 == VAR_0) {
 FUNC_1(VAR_3->mlx_dev, "channel %d pausing for %ld seconds\n",
        VAR_5, (long)(VAR_3->mlx_pause.mp_howlong - VAR_1));
    } else {
 FUNC_1(VAR_3->mlx_dev, "channel %d resuming\n", VAR_5);
    }
    FUNC_3(VAR_2);
}
