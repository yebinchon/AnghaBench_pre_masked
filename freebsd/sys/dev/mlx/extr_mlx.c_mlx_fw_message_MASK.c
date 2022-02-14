
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_flags; int mlx_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct mlx_softc *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    switch(VAR_2) {
    case 0x00:
 FUNC_0(VAR_1->mlx_dev, "physical drive %d:%d not responding\n", VAR_4, VAR_3);
 break;
    case 0x08:

 if (!(VAR_1->mlx_flags & VAR_0)) {
     FUNC_0(VAR_1->mlx_dev, "spinning up drives...\n");
     VAR_1->mlx_flags |= VAR_0;
 }
 break;
    case 0x30:
 FUNC_0(VAR_1->mlx_dev, "configuration checksum error\n");
 break;
    case 0x60:
 FUNC_0(VAR_1->mlx_dev, "mirror race recovery failed\n");
 break;
    case 0x70:
 FUNC_0(VAR_1->mlx_dev, "mirror race recovery in progress\n");
 break;
    case 0x90:
 FUNC_0(VAR_1->mlx_dev, "physical drive %d:%d COD mismatch\n", VAR_4, VAR_3);
 break;
    case 0xa0:
 FUNC_0(VAR_1->mlx_dev, "logical drive installation aborted\n");
 break;
    case 0xb0:
 FUNC_0(VAR_1->mlx_dev, "mirror race on a critical system drive\n");
 break;
    case 0xd0:
 FUNC_0(VAR_1->mlx_dev, "new controller configuration found\n");
 break;
    case 0xf0:
 FUNC_0(VAR_1->mlx_dev, "FATAL MEMORY PARITY ERROR\n");
 return(1);
    default:
 FUNC_0(VAR_1->mlx_dev, "unknown firmware initialisation error %02x:%02x:%02x\n", VAR_2, VAR_3, VAR_4);
 break;
    }
    return(0);
}
