
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_func {int rsvd_uars; int rsvd_eqs; int max_eq; } ;
struct mlx4_dev_cap {int reserved_uars; int reserved_eqs; int max_eqs; } ;
struct TYPE_2__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_func*,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_2, struct mlx4_dev_cap *VAR_3)
{
 int VAR_4 = 0;
 struct mlx4_func VAR_5;

 if (VAR_2->caps.flags2 & VAR_0) {
  VAR_4 = FUNC_0(VAR_2, &VAR_5, 0);
  if (VAR_4) {
   FUNC_1(VAR_2, "QUERY_DEV_CAP command failed, aborting.\n");
   return VAR_4;
  }
  VAR_3->max_eqs = VAR_5.max_eq;
  VAR_3->reserved_eqs = VAR_5.rsvd_eqs;
  VAR_3->reserved_uars = VAR_5.rsvd_uars;
  VAR_4 |= VAR_1;
 }
 return VAR_4;
}
