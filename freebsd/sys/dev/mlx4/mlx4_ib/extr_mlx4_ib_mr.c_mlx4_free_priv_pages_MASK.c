
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ib_device* device; } ;
struct mlx4_ib_mr {int * pages; int page_map_size; int page_map; TYPE_1__ ibmr; } ;
struct ib_device {int dma_device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct mlx4_ib_mr *VAR_1)
{
 if (VAR_1->pages) {
  struct ib_device *VAR_2 = VAR_1->ibmr.device;

  FUNC_0(VAR_2->dma_device, VAR_1->page_map,
     VAR_1->page_map_size, VAR_0);
  FUNC_1((unsigned long)VAR_1->pages);
  VAR_1->pages = ((void*)0);
 }
}
