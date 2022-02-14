
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_cand {int cost; } ;


 int VAR_0 ;
 int FUNC_0 (struct ivopts_data*,struct iv_cand*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,char*,...) ;
 struct iv_cand* FUNC_2 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_3 (struct ivopts_data*) ;

__attribute__((used)) static void
FUNC_4 (struct ivopts_data *VAR_3)
{
  unsigned VAR_4;

  if (VAR_1 && (VAR_2 & VAR_0))
    {
      FUNC_1 (VAR_1, "Candidate costs:\n");
      FUNC_1 (VAR_1, "  cand\tcost\n");
    }

  for (VAR_4 = 0; VAR_4 < FUNC_3 (VAR_3); VAR_4++)
    {
      struct iv_cand *VAR_5 = FUNC_2 (VAR_3, VAR_4);

      FUNC_0 (VAR_3, VAR_5);

      if (VAR_1 && (VAR_2 & VAR_0))
 FUNC_1 (VAR_1, "  %d\t%d\n", VAR_4, VAR_5->cost);
    }

if (VAR_1 && (VAR_2 & VAR_0))
      FUNC_1 (VAR_1, "\n");
}
