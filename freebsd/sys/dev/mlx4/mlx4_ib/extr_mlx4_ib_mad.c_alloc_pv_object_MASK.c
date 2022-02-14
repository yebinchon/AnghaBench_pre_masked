
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int ib_dev; } ;
struct mlx4_ib_demux_pv_ctx {int port; int slave; int * ib_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_ib_demux_pv_ctx* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_2, int VAR_3, int VAR_4,
          struct mlx4_ib_demux_pv_ctx **VAR_5)
{
 struct mlx4_ib_demux_pv_ctx *VAR_6;

 *VAR_5 = ((void*)0);
 VAR_6 = FUNC_0(sizeof (struct mlx4_ib_demux_pv_ctx), VAR_1);
 if (!VAR_6) {
  FUNC_1("failed allocating pv resource context "
         "for port %d, slave %d\n", VAR_4, VAR_3);
  return -VAR_0;
 }

 VAR_6->ib_dev = &VAR_2->ib_dev;
 VAR_6->port = VAR_4;
 VAR_6->slave = VAR_3;
 *VAR_5 = VAR_6;
 return 0;
}
