
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mlx5_cqe64 {int op_own; } ;
struct mlx5_cq {int cqe_sz; int resize_cqe_sz; int cons_index; int active_cqes; int resize_cqes; int active_buf; int resize_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (void*,void*,int) ;
 int VAR_2 ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct mlx5_cq *VAR_3)
{
 struct mlx5_cqe64 *VAR_4;
 struct mlx5_cqe64 *VAR_5;
 void *VAR_6;
 void *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 uint8_t VAR_12;

 VAR_9 = VAR_3->cqe_sz;
 VAR_10 = VAR_3->resize_cqe_sz;

 VAR_11 = VAR_3->cons_index;
 VAR_7 = FUNC_1(VAR_3->active_buf, VAR_11 & VAR_3->active_cqes, VAR_9);
 VAR_4 = VAR_9 == 64 ? VAR_7 : VAR_7 + 64;
 VAR_6 = VAR_7;
 if (FUNC_2(VAR_4->op_own, VAR_11, VAR_3->active_cqes)) {
  FUNC_0(VAR_2, "expected cqe in sw ownership\n");
  return;
 }

 while ((VAR_4->op_own >> 4) != VAR_1) {
  VAR_8 = FUNC_1(VAR_3->resize_buf, (VAR_11 + 1) & (VAR_3->resize_cqes - 1), VAR_10);
  VAR_5 = VAR_10 == 64 ? VAR_8 : VAR_8 + 64;
  VAR_12 = FUNC_4(VAR_11 + 1, VAR_3->resize_cqes);
  FUNC_3(VAR_8, VAR_7, VAR_9);
  VAR_5->op_own = (VAR_5->op_own & ~VAR_0) | VAR_12;

  ++VAR_11;
  VAR_7 = FUNC_1(VAR_3->active_buf, VAR_11 & VAR_3->active_cqes, VAR_9);
  VAR_4 = VAR_9 == 64 ? VAR_7 : VAR_7 + 64;
  if (FUNC_2(VAR_4->op_own, VAR_11, VAR_3->active_cqes)) {
   FUNC_0(VAR_2, "expected cqe in sw ownership\n");
   return;
  }

  if (VAR_7 == VAR_6) {
   FUNC_0(VAR_2, "resize CQ failed to get resize CQE\n");
   return;
  }
 }
 ++VAR_3->cons_index;
}
