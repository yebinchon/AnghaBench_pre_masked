
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_cand {int dummy; } ;
struct iv_ca_delta {int dummy; } ;
struct iv_ca {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct iv_ca*,struct iv_cand*) ;
 unsigned int FUNC_2 (struct iv_ca*) ;
 int FUNC_3 (struct ivopts_data*,struct iv_ca*,struct iv_ca_delta*,int) ;
 int FUNC_4 (struct iv_ca_delta**) ;
 struct iv_ca_delta* FUNC_5 (struct iv_ca_delta*,struct iv_ca_delta*) ;
 unsigned int FUNC_6 (struct ivopts_data*,struct iv_ca*,struct iv_cand*,struct iv_ca_delta**,unsigned int*) ;
 unsigned int FUNC_7 (struct ivopts_data*,struct iv_ca*,struct iv_cand*,struct iv_ca_delta**) ;
 struct iv_cand* FUNC_8 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_9 (struct ivopts_data*) ;

__attribute__((used)) static bool
FUNC_10 (struct ivopts_data *VAR_1, struct iv_ca *VAR_2)
{
  unsigned VAR_3, VAR_4, VAR_5 = FUNC_2 (VAR_2), VAR_6;
  struct iv_ca_delta *VAR_7 = ((void*)0), *VAR_8, *VAR_9;
  struct iv_cand *VAR_10;


  for (VAR_3 = 0; VAR_3 < FUNC_9 (VAR_1); VAR_3++)
    {
      VAR_10 = FUNC_8 (VAR_1, VAR_3);

      if (FUNC_1 (VAR_2, VAR_10))
 continue;

      VAR_4 = FUNC_6 (VAR_1, VAR_2, VAR_10, &VAR_8, &VAR_6);
      if (!VAR_8)
 continue;



      if (VAR_6 <= VAR_0)
       {
   FUNC_3 (VAR_1, VAR_2, VAR_8, 1);
   VAR_4 = FUNC_7 (VAR_1, VAR_2, VAR_10, &VAR_9);
   FUNC_3 (VAR_1, VAR_2, VAR_8, 0);
   VAR_8 = FUNC_5 (VAR_8, VAR_9);
 }

      if (VAR_4 < VAR_5)
 {
   VAR_5 = VAR_4;
   FUNC_4 (&VAR_7);
   VAR_7 = VAR_8;
 }
      else
 FUNC_4 (&VAR_8);
    }

  if (!VAR_7)
    {

      VAR_5 = FUNC_7 (VAR_1, VAR_2, ((void*)0), &VAR_7);


      if (!VAR_7)
 return 0;
    }

  FUNC_3 (VAR_1, VAR_2, VAR_7, 1);
  FUNC_0 (VAR_5 == FUNC_2 (VAR_2));
  FUNC_4 (&VAR_7);
  return 1;
}
