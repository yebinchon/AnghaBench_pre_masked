
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int dev; int sm_lock; int * sm_ah; } ;
struct mlx4_ib_demux_ctx {int port; struct mlx4_ib_dev* dev; } ;
struct ib_mad {int dummy; } ;
struct ib_ah_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ib_ah_attr*) ;
 int FUNC_1 (struct mlx4_ib_dev*,int ,int,int ,int ,int,int ,struct ib_ah_attr*,int *,int,struct ib_mad*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mlx4_ib_demux_ctx *VAR_3, struct ib_mad *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = VAR_3->dev;
 struct ib_ah_attr VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_5->sm_lock, VAR_7);
 if (!VAR_5->sm_ah[VAR_3->port - 1]) {

  FUNC_4(&VAR_5->sm_lock, VAR_7);
  return -VAR_0;
 }
 FUNC_0(VAR_5->sm_ah[VAR_3->port - 1], &VAR_6);
 FUNC_4(&VAR_5->sm_lock, VAR_7);
 return FUNC_1(VAR_5, FUNC_2(VAR_5->dev),
        VAR_3->port, VAR_2, 0, 1, VAR_1,
        &VAR_6, ((void*)0), 0xffff, VAR_4);
}
