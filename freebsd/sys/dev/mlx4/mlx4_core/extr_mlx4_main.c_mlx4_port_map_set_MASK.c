
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int port1; int port2; } ;
struct mlx4_priv {int bond_mutex; TYPE_2__ v2p; } ;
struct mlx4_port_map {int port1; int port2; } ;
struct TYPE_3__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_1 (struct mlx4_dev*,char*,int) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mlx4_dev *VAR_4, struct mlx4_port_map *VAR_5)
{
 u8 VAR_6 = VAR_5->port1;
 u8 VAR_7 = VAR_5->port2;
 struct mlx4_priv *VAR_8 = FUNC_2(VAR_4);
 int VAR_9;

 if (!(VAR_4->caps.flags2 & VAR_2))
  return -VAR_1;

 FUNC_4(&VAR_8->bond_mutex);


 if (VAR_6 == 0)
  VAR_6 = VAR_8->v2p.port1;
 if (VAR_7 == 0)
  VAR_7 = VAR_8->v2p.port2;

 if ((VAR_6 < 1) || (VAR_6 > VAR_3) ||
     (VAR_7 < 1) || (VAR_7 > VAR_3) ||
     (VAR_6 == 2 && VAR_7 == 1)) {


  VAR_9 = -VAR_0;
 } else if ((VAR_6 == VAR_8->v2p.port1) &&
   (VAR_7 == VAR_8->v2p.port2)) {
  VAR_9 = 0;
 } else {
  VAR_9 = FUNC_3(VAR_4, VAR_6, VAR_7);
  if (!VAR_9) {
   FUNC_0(VAR_4, "port map changed: [%d][%d]\n",
     VAR_6, VAR_7);
   VAR_8->v2p.port1 = VAR_6;
   VAR_8->v2p.port2 = VAR_7;
  } else {
   FUNC_1(VAR_4, "Failed to change port mape: %d\n", VAR_9);
  }
 }

 FUNC_5(&VAR_8->bond_mutex);
 return VAR_9;
}
