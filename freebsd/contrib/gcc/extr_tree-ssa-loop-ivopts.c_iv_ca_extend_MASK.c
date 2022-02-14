
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {int dummy; } ;
struct iv_cand {int dummy; } ;
struct iv_ca_delta {int dummy; } ;
struct iv_ca {unsigned int upto; } ;
struct cost_pair {struct iv_cand* cand; } ;


 int FUNC_0 (struct cost_pair*,struct cost_pair*) ;
 struct cost_pair* FUNC_1 (struct ivopts_data*,struct iv_use*,struct iv_cand*) ;
 struct cost_pair* FUNC_2 (struct iv_ca*,struct iv_use*) ;
 unsigned int FUNC_3 (struct iv_ca*) ;
 struct iv_ca_delta* FUNC_4 (struct iv_use*,struct cost_pair*,struct cost_pair*,struct iv_ca_delta*) ;
 int FUNC_5 (struct ivopts_data*,struct iv_ca*,struct iv_ca_delta*,int) ;
 int FUNC_6 (struct iv_ca*,struct cost_pair*) ;
 unsigned int FUNC_7 (struct iv_ca*) ;
 struct iv_use* FUNC_8 (struct ivopts_data*,unsigned int) ;

__attribute__((used)) static unsigned
FUNC_9 (struct ivopts_data *VAR_0, struct iv_ca *VAR_1,
       struct iv_cand *VAR_2, struct iv_ca_delta **VAR_3,
       unsigned *VAR_4)
{
  unsigned VAR_5, VAR_6;
  struct iv_use *VAR_7;
  struct cost_pair *VAR_8, *VAR_9;

  *VAR_3 = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_1->upto; VAR_5++)
    {
      VAR_7 = FUNC_8 (VAR_0, VAR_5);
      VAR_8 = FUNC_2 (VAR_1, VAR_7);

      if (VAR_8
   && VAR_8->cand == VAR_2)
 continue;

      VAR_9 = FUNC_1 (VAR_0, VAR_7, VAR_2);
      if (!VAR_9)
 continue;

      if (!FUNC_6 (VAR_1, VAR_9))
 continue;

      if (!FUNC_0 (VAR_9, VAR_8))
 continue;

      *VAR_3 = FUNC_4 (VAR_7, VAR_8, VAR_9, *VAR_3);
    }

  FUNC_5 (VAR_0, VAR_1, *VAR_3, 1);
  VAR_6 = FUNC_3 (VAR_1);
  if (VAR_4)
    *VAR_4 = FUNC_7 (VAR_1);
  FUNC_5 (VAR_0, VAR_1, *VAR_3, 0);

  return VAR_6;
}
