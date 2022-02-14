
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int out; int in; } ;
struct TYPE_6__ {int out; int in; } ;
struct TYPE_5__ {int out; int in; } ;
struct TYPE_8__ {int out; int in; } ;
struct mlx5dv_obj {TYPE_3__ rwq; TYPE_2__ srq; TYPE_1__ cq; TYPE_4__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct mlx5dv_obj *VAR_4, uint64_t VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5 & VAR_1)
  VAR_6 = FUNC_1(VAR_4->qp.in, VAR_4->qp.out);
 if (!VAR_6 && (VAR_5 & VAR_0))
  VAR_6 = FUNC_0(VAR_4->cq.in, VAR_4->cq.out);
 if (!VAR_6 && (VAR_5 & VAR_3))
  VAR_6 = FUNC_3(VAR_4->srq.in, VAR_4->srq.out);
 if (!VAR_6 && (VAR_5 & VAR_2))
  VAR_6 = FUNC_2(VAR_4->rwq.in, VAR_4->rwq.out);

 return VAR_6;
}
