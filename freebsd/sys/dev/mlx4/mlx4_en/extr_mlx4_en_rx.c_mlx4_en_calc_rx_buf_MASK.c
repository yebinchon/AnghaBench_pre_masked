
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int if_mtu; } ;
struct mlx4_en_priv {int rx_mb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,unsigned int) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_9)
{
 struct mlx4_en_priv *VAR_10 = FUNC_2(VAR_9);
 int VAR_11 = VAR_9->if_mtu + VAR_2 + VAR_8 + VAR_1 +
     VAR_7;

 if (VAR_11 > VAR_4) {
  FUNC_1(VAR_10, "MTU(%u) is too big\n", (unsigned)VAR_9->if_mtu);
                VAR_11 = VAR_4;
        } else if (VAR_11 > VAR_5) {
                VAR_11 = VAR_4;
        } else if (VAR_11 > VAR_6) {
                VAR_11 = VAR_5;
        } else if (VAR_11 > VAR_3) {
                VAR_11 = VAR_6;
        } else {
                VAR_11 = VAR_3;
        }

 VAR_10->rx_mb_size = VAR_11;

 FUNC_0(VAR_0, VAR_10, "Effective RX MTU: %d bytes\n", VAR_11);
}
