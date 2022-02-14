
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_rebuild_status {int rs_code; } ;
struct mlx_softc {int mlx_background; struct mlx_rebuild_status mlx_rebuildstat; int mlx_dev; } ;
struct mlx_command {int mc_status; scalar_t__ mc_data; struct mlx_softc* mc_sc; } ;





 int FUNC_0 (struct mlx_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mlx_command*) ;

__attribute__((used)) static void
FUNC_4(struct mlx_command *VAR_2)
{
    struct mlx_softc *VAR_3 = VAR_2->mc_sc;
    struct mlx_rebuild_status *VAR_4 = (struct mlx_rebuild_status *)VAR_2->mc_data;

    FUNC_0(VAR_3);
    switch(VAR_2->mc_status) {
    case 0:
 VAR_3->mlx_rebuildstat = *VAR_4;


 if (VAR_3->mlx_background == 0) {
     VAR_3->mlx_background = 128;
     FUNC_1(VAR_3->mlx_dev, "background check/rebuild operation started\n");
 }
 break;

    case 0x0105:
 switch(VAR_3->mlx_background) {
 case 130:
     FUNC_1(VAR_3->mlx_dev, "consistency check completed\n");
     break;
 case 129:
     FUNC_1(VAR_3->mlx_dev, "drive rebuild completed\n");
     break;
 case 128:
 default:

     if (VAR_3->mlx_rebuildstat.rs_code != VAR_0) {
  FUNC_1(VAR_3->mlx_dev, "background check/rebuild operation completed\n");
     }
 }
 VAR_3->mlx_background = 0;
 VAR_3->mlx_rebuildstat.rs_code = VAR_0;
 break;
    }
    FUNC_2(VAR_2->mc_data, VAR_1);
    FUNC_3(VAR_2);
}
