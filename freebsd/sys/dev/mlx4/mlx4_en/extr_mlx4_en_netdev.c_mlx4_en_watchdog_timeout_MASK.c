
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_priv {int watchdog_timer; scalar_t__ port_up; int watchdog_task; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int workqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,void (*) (void*),struct mlx4_en_priv*) ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
        struct mlx4_en_priv *VAR_3 = VAR_2;
        struct mlx4_en_dev *VAR_4 = VAR_3->mdev;

        FUNC_1(VAR_0, VAR_3, "Scheduling watchdog\n");
        FUNC_2(VAR_4->workqueue, &VAR_3->watchdog_task);
        if (VAR_3->port_up)
                FUNC_0(&VAR_3->watchdog_timer, VAR_1,
                                FUNC_3, VAR_3);
}
