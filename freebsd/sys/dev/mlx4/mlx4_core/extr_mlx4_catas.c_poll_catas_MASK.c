
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int timer; int * map; } ;
struct TYPE_6__ {TYPE_1__* comm; } ;
struct mlx4_priv {TYPE_3__ catas_err; TYPE_2__ mfunc; } ;
struct mlx4_dev {TYPE_4__* persist; } ;
struct TYPE_8__ {int state; int catas_work; int catas_wq; } ;
struct TYPE_5__ {int slave_read; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_4)
{
 struct mlx4_dev *VAR_5 = (struct mlx4_dev *) VAR_4;
 struct mlx4_priv *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;

 if (FUNC_2(VAR_5)) {
  VAR_7 = FUNC_9(FUNC_7(&VAR_6->mfunc.comm->slave_read));
  if (FUNC_1(VAR_7)) {
   FUNC_4(VAR_5, "Internal error detected on the communication channel\n");
   goto internal_err;
  }
 } else if (FUNC_7(VAR_6->catas_err.map)) {
  FUNC_0(VAR_5);
  goto internal_err;
 }

 if (VAR_5->persist->state & VAR_1) {
  FUNC_4(VAR_5, "Internal error mark was detected on device\n");
  goto internal_err;
 }

 FUNC_5(&VAR_6->catas_err.timer,
    FUNC_8(VAR_2 + VAR_0));
 return;

internal_err:
 if (VAR_3)
  FUNC_6(VAR_5->persist->catas_wq, &VAR_5->persist->catas_work);
}
