
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct verbs_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
struct mlx5_context {TYPE_1__ core_clock; scalar_t__ hca_core_clock; scalar_t__* uar; int bfs; } ;
struct ibv_context {int device; } ;
struct TYPE_4__ {int page_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_context*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 struct mlx5_context* FUNC_3 (struct ibv_context*) ;
 TYPE_2__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct verbs_device *VAR_1,
     struct ibv_context *VAR_2)
{
 struct mlx5_context *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = FUNC_4(VAR_2->device)->page_size;
 int VAR_5;

 FUNC_1(VAR_3->bfs);
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_3->uar[VAR_5])
   FUNC_2(VAR_3->uar[VAR_5], VAR_4);
 }
 if (VAR_3->hca_core_clock)
  FUNC_2(VAR_3->hca_core_clock - VAR_3->core_clock.offset,
         VAR_4);
 FUNC_0(VAR_3);
}
