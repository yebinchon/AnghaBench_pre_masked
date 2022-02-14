
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ifm_media; } ;
struct TYPE_3__ {int rx_pauseframe_control; int tx_pauseframe_control; scalar_t__ tx_priority_flow_control; scalar_t__ rx_priority_flow_control; } ;
struct mlx5e_priv {int state; TYPE_2__ media; TYPE_1__ params; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ifnet {struct mlx5e_priv* if_softc; } ;
typedef int out ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (int ,int*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int VAR_9 ;
 int FUNC_8 (struct ifnet*,char*) ;
 int FUNC_9 (struct mlx5_core_dev*,int*,int,int ,int) ;
 int FUNC_10 (struct mlx5_core_dev*,int,int ,int) ;
 int FUNC_11 (struct mlx5_core_dev*,int ) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (struct mlx5e_priv*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(struct ifnet *VAR_12)
{
 struct mlx5e_priv *VAR_13 = VAR_12->if_softc;
 struct mlx5_core_dev *VAR_14 = VAR_13->mdev;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17[FUNC_4(VAR_11)];
 int VAR_18;
 int VAR_19;
 int VAR_20;
 bool VAR_21;

 VAR_19 = FUNC_6(VAR_13);
 if (!VAR_19)
  FUNC_5(VAR_13);

 if (FUNC_1(VAR_13->media.ifm_media) != VAR_2) {
  VAR_20 = VAR_0;
  goto done;
 }

 VAR_20 = FUNC_9(VAR_14, VAR_17, sizeof(VAR_17),
     VAR_8, 1);
 if (VAR_20 != 0) {
  FUNC_8(VAR_12, "Query port media capability failed\n");
  goto done;
 }

 VAR_21 = FUNC_2(VAR_14, VAR_10);
 VAR_16 = FUNC_12(FUNC_0(VAR_13->media.ifm_media), VAR_21);


 VAR_15 = FUNC_3(VAR_11, VAR_17, VAR_21,
     VAR_9);


 if (FUNC_0(VAR_13->media.ifm_media) == VAR_1) {
  VAR_16 = VAR_15;
  if (VAR_16 == 0) {
   FUNC_8(VAR_12, "Port media capability is zero\n");
   VAR_20 = VAR_0;
   goto done;
  }
 } else {
  VAR_16 = VAR_16 & VAR_15;
  if (VAR_16 == 0) {
   FUNC_8(VAR_12, "Not supported link mode requested\n");
   VAR_20 = VAR_0;
   goto done;
  }
 }
 if (VAR_13->media.ifm_media & (VAR_3 | VAR_4)) {

  if (VAR_13->params.rx_priority_flow_control ||
      VAR_13->params.tx_priority_flow_control) {
   FUNC_8(VAR_12, "PFC must be disabled before enabling global pauseframes.\n");
   VAR_20 = VAR_0;
   goto done;
  }
 }

 VAR_13->params.rx_pauseframe_control =
     (VAR_13->media.ifm_media & VAR_3) ? 1 : 0;
 VAR_13->params.tx_pauseframe_control =
     (VAR_13->media.ifm_media & VAR_4) ? 1 : 0;


 VAR_18 = FUNC_14(VAR_5, &VAR_13->state);


 FUNC_11(VAR_14, VAR_6);
 FUNC_10(VAR_14, VAR_16, VAR_8, VAR_21);
 VAR_20 = -FUNC_13(VAR_13);
 if (VAR_18)
  FUNC_11(VAR_14, VAR_7);

done:
 if (!VAR_19)
  FUNC_7(VAR_13);
 return (VAR_20);
}
