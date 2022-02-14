
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {int stmt; } ;
struct iv_cand {int dummy; } ;
typedef int bitmap ;


 int FUNC_0 (struct ivopts_data*,struct iv_use*,struct iv_cand*,int,int *,int ) ;

__attribute__((used)) static unsigned
FUNC_1 (struct ivopts_data *VAR_0,
        struct iv_use *VAR_1, struct iv_cand *VAR_2,
        bool VAR_3, bitmap *VAR_4)
{
  return FUNC_0 (VAR_0,
      VAR_1, VAR_2, VAR_3, VAR_4, VAR_1->stmt);
}
