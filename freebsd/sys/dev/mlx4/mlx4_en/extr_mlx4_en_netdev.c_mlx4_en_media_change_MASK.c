
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifmedia {int ifm_media; } ;
struct mlx4_en_priv {TYPE_2__* prof; scalar_t__ rx_mb_size; int port; TYPE_1__* mdev; struct ifmedia media; } ;
struct ifnet {struct mlx4_en_priv* if_softc; } ;
struct TYPE_4__ {int tx_pause; int rx_pause; int rx_ppp; int tx_ppp; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ,int ,scalar_t__,int,int ,int,int ) ;
 int FUNC_5 (struct mlx4_en_priv*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct ifnet *VAR_6)
{
 struct mlx4_en_priv *VAR_7;
        struct ifmedia *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = VAR_6->if_softc;
 VAR_8 = &VAR_7->media;
 VAR_9 = VAR_10 = 0;
 VAR_11 = 0;

 if (FUNC_2(VAR_8->ifm_media) != VAR_2)
  return (VAR_0);
        switch (FUNC_1(VAR_8->ifm_media)) {
        case 128:
  break;
 case 130:
 case 131:
 case 132:
 case 129:
  if ((FUNC_1(VAR_8->ifm_media)
   == FUNC_1(FUNC_5(VAR_7)))
   && (VAR_8->ifm_media & VAR_5))
   break;

 default:
                FUNC_6("%s: Only auto media type\n", FUNC_3(VAR_6));
                return (VAR_0);
 }

 if (FUNC_0(VAR_8->ifm_media) & VAR_3)
  VAR_9 = 1;
 if (FUNC_0(VAR_8->ifm_media) & VAR_4)
  VAR_10 = 1;
 if (VAR_7->prof->tx_pause != VAR_10 || VAR_7->prof->rx_pause != VAR_9) {
  VAR_7->prof->tx_pause = VAR_10;
  VAR_7->prof->rx_pause = VAR_9;
  VAR_11 = -FUNC_4(VAR_7->mdev->dev, VAR_7->port,
       VAR_7->rx_mb_size + VAR_1, VAR_7->prof->tx_pause,
       VAR_7->prof->tx_ppp, VAR_7->prof->rx_pause,
       VAR_7->prof->rx_ppp);
 }
 return (VAR_11);
}
