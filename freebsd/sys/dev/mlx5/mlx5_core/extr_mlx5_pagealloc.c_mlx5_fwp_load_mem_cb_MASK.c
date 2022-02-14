
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx5_fw_page {int dev; int load_done; int dma_addr; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(void *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
 struct mlx5_fw_page *VAR_6;
 uint8_t VAR_7;

 VAR_6 = (struct mlx5_fw_page *)VAR_2;
 VAR_7 = FUNC_3(VAR_6->dev);

 if (!VAR_7)
  FUNC_2(VAR_6->dev);

 if (VAR_5 == 0) {
  FUNC_0(VAR_4 == 1, ("Number of segments is different from 1"));
  VAR_6->dma_addr = VAR_3->ds_addr;
  VAR_6->load_done = VAR_1;
 } else {
  VAR_6->load_done = VAR_0;
 }
 FUNC_1(VAR_6->dev);

 if (!VAR_7)
  FUNC_4(VAR_6->dev);
}
