
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int dummy; } ;
struct mlx5_ib_pd {struct ib_pd ibpd; int pdn; } ;
struct mlx5_ib_alloc_pd_resp {int pdn; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int resp ;
struct TYPE_2__ {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_pd* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ib_udata*,struct mlx5_ib_alloc_pd_resp*,int) ;
 int FUNC_2 (struct mlx5_ib_pd*) ;
 struct mlx5_ib_pd* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (struct ib_device*) ;

__attribute__((used)) static struct ib_pd *FUNC_7(struct ib_device *VAR_3,
          struct ib_ucontext *VAR_4,
          struct ib_udata *VAR_5)
{
 struct mlx5_ib_alloc_pd_resp VAR_6;
 struct mlx5_ib_pd *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_4(FUNC_6(VAR_3)->mdev, &VAR_7->pdn);
 if (VAR_8) {
  FUNC_2(VAR_7);
  return FUNC_0(VAR_8);
 }

 if (VAR_4) {
  VAR_6.pdn = VAR_7->pdn;
  if (FUNC_1(VAR_5, &VAR_6, sizeof(VAR_6))) {
   FUNC_5(FUNC_6(VAR_3)->mdev, VAR_7->pdn);
   FUNC_2(VAR_7);
   return FUNC_0(-VAR_0);
  }
 }

 return &VAR_7->ibpd;
}
