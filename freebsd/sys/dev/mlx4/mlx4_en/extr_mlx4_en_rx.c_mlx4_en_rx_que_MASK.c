
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct mlx4_en_cq {TYPE_1__* dev; int curr_poll_rx_cpu_id; } ;
struct TYPE_2__ {int if_softc; } ;


 scalar_t__ VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_0 (int ,struct mlx4_en_cq*) ;
 scalar_t__ FUNC_1 (struct mlx4_en_cq*,scalar_t__) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;

void FUNC_5(void *VAR_2, int VAR_3)
{
        struct mlx4_en_cq *VAR_4;
 struct thread *VAR_5;

        VAR_4 = VAR_2;
 VAR_5 = VAR_1;

 FUNC_3(VAR_5);
 FUNC_2(VAR_5, VAR_4->curr_poll_rx_cpu_id);
 FUNC_4(VAR_5);

        while (FUNC_1(VAR_4, VAR_0)
                        == VAR_0);
        FUNC_0(VAR_4->dev->if_softc, VAR_4);
}
