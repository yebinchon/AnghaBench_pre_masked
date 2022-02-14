
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct ivopts_data {int dummy; } ;
struct TYPE_3__ {int step; int base; } ;
typedef TYPE_1__ affine_iv ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ivopts_data*,int ,TYPE_1__*) ;
 int FUNC_2 (struct ivopts_data*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct ivopts_data *VAR_0, tree VAR_1)
{
  affine_iv VAR_2;

  if (!FUNC_1 (VAR_0, VAR_1, &VAR_2))
    return;

  FUNC_2 (VAR_0, FUNC_0 (VAR_1, 0), VAR_2.base, VAR_2.step);
}
