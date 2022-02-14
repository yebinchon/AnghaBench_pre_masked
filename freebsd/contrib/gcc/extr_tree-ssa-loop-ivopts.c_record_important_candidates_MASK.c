
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int consider_all_candidates; int important_candidates; } ;
struct iv_use {int related_cands; } ;
struct iv_cand {scalar_t__ important; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned int) ;
 struct iv_cand* FUNC_3 (struct ivopts_data*,unsigned int) ;
 struct iv_use* FUNC_4 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_5 (struct ivopts_data*) ;
 unsigned int FUNC_6 (struct ivopts_data*) ;

__attribute__((used)) static void
FUNC_7 (struct ivopts_data *VAR_1)
{
  unsigned VAR_2;
  struct iv_use *VAR_3;

  for (VAR_2 = 0; VAR_2 < FUNC_5 (VAR_1); VAR_2++)
    {
      struct iv_cand *VAR_4 = FUNC_3 (VAR_1, VAR_2);

      if (VAR_4->important)
 FUNC_2 (VAR_1->important_candidates, VAR_2);
    }

  VAR_1->consider_all_candidates = (FUNC_5 (VAR_1)
       <= VAR_0);

  if (VAR_1->consider_all_candidates)
    {


      for (VAR_2 = 0; VAR_2 < FUNC_6 (VAR_1); VAR_2++)
 {
   VAR_3 = FUNC_4 (VAR_1, VAR_2);
   FUNC_0 (VAR_3->related_cands);
 }
    }
  else
    {

      for (VAR_2 = 0; VAR_2 < FUNC_6 (VAR_1); VAR_2++)
 FUNC_1 (FUNC_4 (VAR_1, VAR_2)->related_cands,
    VAR_1->important_candidates);
    }
}
