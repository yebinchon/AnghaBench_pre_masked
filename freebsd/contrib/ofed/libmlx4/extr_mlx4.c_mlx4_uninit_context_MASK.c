
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct verbs_device {int device; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
struct mlx4_context {TYPE_1__ core_clock; scalar_t__ hca_core_clock; scalar_t__ bf_page; scalar_t__ uar; } ;
struct ibv_context {int dummy; } ;
struct TYPE_4__ {int page_size; } ;


 int FUNC_0 (scalar_t__,int ) ;
 struct mlx4_context* FUNC_1 (struct ibv_context*) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct verbs_device *VAR_0,
     struct ibv_context *VAR_1)
{
 struct mlx4_context *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->uar, FUNC_2(&VAR_0->device)->page_size);
 if (VAR_2->bf_page)
  FUNC_0(VAR_2->bf_page, FUNC_2(&VAR_0->device)->page_size);
 if (VAR_2->hca_core_clock)
  FUNC_0(VAR_2->hca_core_clock - VAR_2->core_clock.offset,
         FUNC_2(&VAR_0->device)->page_size);
}
