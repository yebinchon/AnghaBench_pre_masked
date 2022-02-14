
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* vf_admin; } ;
struct TYPE_5__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_1__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
typedef int guid ;
typedef int __be64 ;
struct TYPE_8__ {TYPE_2__* vport; } ;
struct TYPE_6__ {int guid; } ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (char*,int) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

void FUNC_3(struct mlx4_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_2(VAR_0);
 __be64 VAR_4;


 if (VAR_1 == 0)
  return;

 FUNC_1((char *)&VAR_4, sizeof(VAR_4));
 VAR_4 &= ~(FUNC_0(1ULL << 56));
 VAR_4 |= FUNC_0(1ULL << 57);
 VAR_3->mfunc.master.vf_admin[VAR_1].vport[VAR_2].guid = VAR_4;
}
