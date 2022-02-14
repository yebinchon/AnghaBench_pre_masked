
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_cq {int tot_rx; struct net_device* dev; } ;


 int FUNC_0 (struct net_device*,struct mlx4_en_cq*,int) ;

__attribute__((used)) static int FUNC_1(struct mlx4_en_cq *VAR_0, int VAR_1)
{
        struct net_device *VAR_2 = VAR_0->dev;
        int VAR_3;

        VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1);
        VAR_0->tot_rx += VAR_3;

        return VAR_3;

}
