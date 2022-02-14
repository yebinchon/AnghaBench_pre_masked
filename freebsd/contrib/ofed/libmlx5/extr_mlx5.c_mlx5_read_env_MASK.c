
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_context {int stall_enable; int stall_adaptive_enable; void* stall_cycles; } ;
struct ibv_device {int dummy; } ;


 void* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct ibv_device*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(struct ibv_device *VAR_5, struct mlx5_context *VAR_6)
{
 char *VAR_7;

 VAR_7 = FUNC_1("MLX5_STALL_CQ_POLL");
 if (VAR_7)

  VAR_6->stall_enable = (FUNC_3(VAR_7, "0")) ? 1 : 0;
 else

  VAR_6->stall_enable = FUNC_2(VAR_5);

 VAR_7 = FUNC_1("MLX5_STALL_NUM_LOOP");
 if (VAR_7)
  VAR_4 = FUNC_0(VAR_7);

 VAR_7 = FUNC_1("MLX5_STALL_CQ_POLL_MIN");
 if (VAR_7)
  VAR_3 = FUNC_0(VAR_7);

 VAR_7 = FUNC_1("MLX5_STALL_CQ_POLL_MAX");
 if (VAR_7)
  VAR_2 = FUNC_0(VAR_7);

 VAR_7 = FUNC_1("MLX5_STALL_CQ_INC_STEP");
 if (VAR_7)
  VAR_1 = FUNC_0(VAR_7);

 VAR_7 = FUNC_1("MLX5_STALL_CQ_DEC_STEP");
 if (VAR_7)
  VAR_0 = FUNC_0(VAR_7);

 VAR_6->stall_adaptive_enable = 0;
 VAR_6->stall_cycles = 0;

 if (VAR_4 < 0) {
  VAR_6->stall_adaptive_enable = 1;
  VAR_6->stall_cycles = VAR_3;
 }

}
