
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_fpga_device {int fdev_state; int mdev; int state_lock; int load_event; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;






 int VAR_0 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mlx5_fpga_device*,char*,int,int,char const*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct mlx5_fpga_device*,char*,int,char const*) ;
 int FUNC_6 (struct mlx5_fpga_device*,char*,int,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct mlx5_core_dev *VAR_3, u8 VAR_4, void *VAR_5)
{
 struct mlx5_fpga_device *VAR_6 = VAR_3->fpga;
 const char *VAR_7;
 bool VAR_8 = 0;
 unsigned long VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 switch (VAR_4) {
 case 131:
  VAR_11 = FUNC_0(VAR_1, VAR_5, VAR_11);
  VAR_7 = FUNC_4(VAR_11);
  break;
 case 130:
  VAR_11 = FUNC_0(VAR_2, VAR_5, VAR_11);
  VAR_7 = FUNC_3(VAR_11);
  VAR_10 = FUNC_0(VAR_2, VAR_5, VAR_10);
  FUNC_2(VAR_6, "Error %u on QP %u: %s\n",
         VAR_11, VAR_10, VAR_7);
  break;
 default:
  FUNC_6(VAR_6, "Unexpected event %u\n",
        VAR_4);
  return;
 }

 FUNC_8(&VAR_6->state_lock, VAR_9);
 switch (VAR_6->fdev_state) {
 case 128:
  FUNC_5(VAR_6, "Error %u: %s\n", VAR_11, VAR_7);
  VAR_8 = 1;
  break;
 case 129:
  if (VAR_11 != VAR_0)
   FUNC_5(VAR_6, "Error while loading %u: %s\n",
           VAR_11, VAR_7);
  FUNC_1(&VAR_6->load_event);
  break;
 default:
  FUNC_6(VAR_6, "Unexpected error event %u: %s\n",
        VAR_11, VAR_7);
 }
 FUNC_9(&VAR_6->state_lock, VAR_9);





 if (VAR_8)
  FUNC_7(VAR_6->mdev);
}
