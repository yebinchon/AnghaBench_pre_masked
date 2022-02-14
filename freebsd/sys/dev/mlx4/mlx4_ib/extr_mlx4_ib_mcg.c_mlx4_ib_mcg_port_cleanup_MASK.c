
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_demux_ctx {int flushing; } ;
struct clean_work {int destroy_wq; int work; struct mlx4_ib_demux_ctx* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mlx4_ib_demux_ctx*,int) ;
 int VAR_1 ;
 struct clean_work* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct mlx4_ib_demux_ctx *VAR_3, int VAR_4)
{
 struct clean_work *VAR_5;

 if (VAR_3->flushing)
  return;

 VAR_3->flushing = 1;

 if (VAR_4) {
  FUNC_1(VAR_3, VAR_4);
  VAR_3->flushing = 0;
  return;
 }

 VAR_5 = FUNC_2(sizeof *VAR_5, VAR_0);
 if (!VAR_5) {
  VAR_3->flushing = 0;
  FUNC_3("failed allocating work for cleanup\n");
  return;
 }

 VAR_5->ctx = VAR_3;
 VAR_5->destroy_wq = VAR_4;
 FUNC_0(&VAR_5->work, VAR_2);
 FUNC_4(VAR_1, &VAR_5->work);
}
