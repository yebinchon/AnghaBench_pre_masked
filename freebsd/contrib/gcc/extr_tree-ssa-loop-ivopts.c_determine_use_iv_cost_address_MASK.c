
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {int dummy; } ;
struct iv_cand {int dummy; } ;
typedef int bitmap ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct ivopts_data*,struct iv_use*,struct iv_cand*,int,int *) ;
 int FUNC_1 (struct ivopts_data*,struct iv_use*,struct iv_cand*,unsigned int,int ,int ) ;

__attribute__((used)) static bool
FUNC_2 (struct ivopts_data *VAR_2,
          struct iv_use *VAR_3, struct iv_cand *VAR_4)
{
  bitmap VAR_5;
  unsigned VAR_6 = FUNC_0 (VAR_2, VAR_3, VAR_4, 1, &VAR_5);

  FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_6, VAR_5, VAR_1);

  return VAR_6 != VAR_0;
}
