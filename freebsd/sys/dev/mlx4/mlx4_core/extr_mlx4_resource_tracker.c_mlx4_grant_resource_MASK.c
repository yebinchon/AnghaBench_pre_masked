
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource_allocator {int* allocated; int* res_port_free; int res_free; int* res_port_rsvd; int res_reserved; int* guaranteed; int* quota; int alloc_lock; } ;
struct TYPE_5__ {struct resource_allocator* res_alloc; } ;
struct TYPE_6__ {TYPE_1__ res_tracker; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {TYPE_4__* persist; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;
struct TYPE_8__ {int num_vfs; } ;


 int VAR_0 ;
 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,char*,int,int,int ,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct mlx4_dev *VAR_1, int VAR_2,
          enum mlx4_resource VAR_3, int VAR_4,
          int VAR_5)
{
 struct mlx4_priv *VAR_6 = FUNC_0(VAR_1);
 struct resource_allocator *VAR_7 =
  &VAR_6->mfunc.master.res_tracker.res_alloc[VAR_3];
 int VAR_8 = -VAR_0;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (VAR_2 > VAR_1->persist->num_vfs)
  return -VAR_0;

 FUNC_3(&VAR_7->alloc_lock);
 VAR_9 = (VAR_5 > 0) ?
  VAR_7->allocated[(VAR_5 - 1) *
  (VAR_1->persist->num_vfs + 1) + VAR_2] :
  VAR_7->allocated[VAR_2];
 VAR_10 = (VAR_5 > 0) ? VAR_7->res_port_free[VAR_5 - 1] :
  VAR_7->res_free;
 VAR_11 = (VAR_5 > 0) ? VAR_7->res_port_rsvd[VAR_5 - 1] :
  VAR_7->res_reserved;
 VAR_12 = VAR_7->guaranteed[VAR_2];

 if (VAR_9 + VAR_4 > VAR_7->quota[VAR_2]) {
  FUNC_1(VAR_1, "VF %d port %d res %s: quota exceeded, count %d alloc %d quota %d\n",
     VAR_2, VAR_5, FUNC_2(VAR_3), VAR_4,
     VAR_9, VAR_7->quota[VAR_2]);
  goto out;
 }

 if (VAR_9 + VAR_4 <= VAR_12) {
  VAR_8 = 0;
  VAR_14 = VAR_4;
 } else {

  if (VAR_12 - VAR_9 > 0)
   VAR_13 = VAR_4 - (VAR_12 - VAR_9);
  else
   VAR_13 = VAR_4;

  VAR_14 = VAR_4 - VAR_13;

  if (VAR_10 - VAR_13 >= VAR_11)
   VAR_8 = 0;
  else
   FUNC_1(VAR_1, "VF %d port %d res %s: free pool empty, free %d from_free %d rsvd %d\n",
      VAR_2, VAR_5, FUNC_2(VAR_3), VAR_10,
      VAR_13, VAR_11);
 }

 if (!VAR_8) {

  if (VAR_5 > 0) {
   VAR_7->allocated[(VAR_5 - 1) *
   (VAR_1->persist->num_vfs + 1) + VAR_2] += VAR_4;
   VAR_7->res_port_free[VAR_5 - 1] -= VAR_4;
   VAR_7->res_port_rsvd[VAR_5 - 1] -= VAR_14;
  } else {
   VAR_7->allocated[VAR_2] += VAR_4;
   VAR_7->res_free -= VAR_4;
   VAR_7->res_reserved -= VAR_14;
  }
 }

out:
 FUNC_4(&VAR_7->alloc_lock);
 return VAR_8;
}
