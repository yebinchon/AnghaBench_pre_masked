
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource_allocator {int* allocated; int* guaranteed; int* res_port_free; int* res_port_rsvd; int res_free; int res_reserved; int alloc_lock; } ;
struct TYPE_5__ {struct resource_allocator* res_alloc; } ;
struct TYPE_6__ {TYPE_1__ res_tracker; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {TYPE_4__* persist; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;
struct TYPE_8__ {int num_vfs; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct mlx4_dev *VAR_0, int VAR_1,
        enum mlx4_resource VAR_2, int VAR_3,
        int VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_0(VAR_0);
 struct resource_allocator *VAR_6 =
  &VAR_5->mfunc.master.res_tracker.res_alloc[VAR_2];
 int VAR_7, VAR_8, VAR_9;

 if (VAR_1 > VAR_0->persist->num_vfs)
  return;

 FUNC_1(&VAR_6->alloc_lock);

 VAR_7 = (VAR_4 > 0) ?
  VAR_6->allocated[(VAR_4 - 1) *
  (VAR_0->persist->num_vfs + 1) + VAR_1] :
  VAR_6->allocated[VAR_1];
 VAR_8 = VAR_6->guaranteed[VAR_1];

 if (VAR_7 - VAR_3 >= VAR_8) {
  VAR_9 = 0;
 } else {

  if (VAR_7 - VAR_8 > 0)
   VAR_9 = VAR_3 - (VAR_7 - VAR_8);
  else
   VAR_9 = VAR_3;
 }

 if (VAR_4 > 0) {
  VAR_6->allocated[(VAR_4 - 1) *
  (VAR_0->persist->num_vfs + 1) + VAR_1] -= VAR_3;
  VAR_6->res_port_free[VAR_4 - 1] += VAR_3;
  VAR_6->res_port_rsvd[VAR_4 - 1] += VAR_9;
 } else {
  VAR_6->allocated[VAR_1] -= VAR_3;
  VAR_6->res_free += VAR_3;
  VAR_6->res_reserved += VAR_9;
 }

 FUNC_2(&VAR_6->alloc_lock);
 return;
}
