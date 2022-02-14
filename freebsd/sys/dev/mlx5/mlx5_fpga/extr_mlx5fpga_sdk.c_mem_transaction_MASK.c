
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5_fpga_device {scalar_t__ shell_conn; } ;
struct TYPE_2__ {size_t size; int direction; int complete1; scalar_t__ conn; int addr; void* data; } ;
struct mem_transfer {scalar_t__ status; int comp; TYPE_1__ t; } ;
typedef enum mlx5_fpga_direction { ____Placeholder_mlx5_fpga_direction } mlx5_fpga_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5_fpga_device *VAR_3, size_t VAR_4, u64 VAR_5,
      void *VAR_6, enum mlx5_fpga_direction VAR_7)
{
 int VAR_8;
 struct mem_transfer VAR_9;

 if (!VAR_3->shell_conn) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_9.t.data = VAR_6;
 VAR_9.t.size = VAR_4;
 VAR_9.t.addr = VAR_5;
 VAR_9.t.conn = VAR_3->shell_conn;
 VAR_9.t.direction = VAR_7;
 VAR_9.t.complete1 = VAR_2;
 FUNC_0(&VAR_9.comp);
 VAR_8 = FUNC_2(&VAR_9.t);
 if (VAR_8) {
  FUNC_1(VAR_3, "Transfer execution failed: %d\n", VAR_8);
  goto out;
 }
 FUNC_3(&VAR_9.comp);
 if (VAR_9.status != 0)
  VAR_8 = -VAR_0;

out:
 return VAR_8;
}
