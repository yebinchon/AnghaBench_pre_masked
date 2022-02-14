
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_3__* prof; scalar_t__ port_up; TYPE_2__** tx_ring; TYPE_1__** rx_ring; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;
struct TYPE_6__ {int tx_ring_size; int rx_ring_size; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int actual_size; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct mlx4_en_priv*) ;
 int FUNC_4 (struct mlx4_en_priv*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mlx4_en_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5,
    int VAR_6, int VAR_7)
{
        struct mlx4_en_priv *VAR_8 = FUNC_9(VAR_5);
        struct mlx4_en_dev *VAR_9 = VAR_8->mdev;
        int VAR_10 = 0;
        int VAR_11 = 0;

        VAR_6 = FUNC_10(VAR_6);
        VAR_6 = FUNC_1(VAR_4, VAR_6, VAR_2);
        VAR_6 = FUNC_2(VAR_4, VAR_6, VAR_0);
        VAR_7 = FUNC_10(VAR_7);
        VAR_7 = FUNC_1(VAR_4, VAR_7, VAR_3);
        VAR_7 = FUNC_2(VAR_4, VAR_7, VAR_1);

        if (VAR_6 == (VAR_8->port_up ?
            VAR_8->rx_ring[0]->actual_size : VAR_8->rx_ring[0]->size) &&
            VAR_7 == VAR_8->tx_ring[0]->size)
                return 0;
        FUNC_7(&VAR_9->state_lock);
        if (VAR_8->port_up) {
                VAR_10 = 1;
                FUNC_6(VAR_5);
        }
        FUNC_4(VAR_8);
        VAR_8->prof->tx_ring_size = VAR_7;
        VAR_8->prof->rx_ring_size = VAR_6;
        VAR_11 = FUNC_3(VAR_8);
        if (VAR_11) {
                FUNC_0(VAR_8, "Failed reallocating port resources\n");
                goto out;
        }
        if (VAR_10) {
                VAR_11 = FUNC_5(VAR_5);
                if (VAR_11)
                        FUNC_0(VAR_8, "Failed starting port\n");
        }
out:
        FUNC_8(&VAR_9->state_lock);
        return VAR_11;
}
