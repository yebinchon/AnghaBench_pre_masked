
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_slaves_pport {int slaves; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
typedef enum slave_port_gen_event { ____Placeholder_slave_port_gen_event } slave_port_gen_event ;
struct TYPE_2__ {int num_vfs; } ;


 struct mlx4_slaves_pport FUNC_0 (struct mlx4_dev*,int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int ,int,int*) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx4_dev *VAR_0, u8 VAR_1, int VAR_2)
{
 int VAR_3;
 enum slave_port_gen_event VAR_4;
 struct mlx4_slaves_pport VAR_5 = FUNC_0(VAR_0,
           VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0->persist->num_vfs + 1; VAR_3++)
  if (FUNC_2(VAR_3, VAR_5.slaves))
   FUNC_1(VAR_0, VAR_3, VAR_1,
            VAR_2, &VAR_4);
}
