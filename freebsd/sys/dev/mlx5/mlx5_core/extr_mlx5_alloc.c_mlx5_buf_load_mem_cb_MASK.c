
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx5_buf {int dev; int load_done; int * page_list; } ;
struct TYPE_3__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, bus_dma_segment_t *VAR_4, int VAR_5, int VAR_6)
{
 struct mlx5_buf *VAR_7;
 uint8_t VAR_8;
 int VAR_9;

 VAR_7 = (struct mlx5_buf *)VAR_3;
 VAR_8 = FUNC_3(VAR_7->dev);

 if (!VAR_8)
  FUNC_2(VAR_7->dev);

 if (VAR_6 == 0) {
  for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++) {
   VAR_7->page_list[VAR_9] = VAR_4[VAR_9].ds_addr;
   FUNC_0(VAR_4[VAR_9].ds_len == VAR_2, ("Invalid segment size"));
  }
  VAR_7->load_done = VAR_1;
 } else {
  VAR_7->load_done = VAR_0;
 }
 FUNC_1(VAR_7->dev);

 if (!VAR_8)
  FUNC_4(VAR_7->dev);
}
