
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivopts_data {int dummy; } ;
struct iv_use {int selected; } ;
struct iv_ca {int dummy; } ;
struct TYPE_2__ {int cand; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 struct iv_ca* FUNC_1 (struct ivopts_data*) ;
 TYPE_1__* FUNC_2 (struct iv_ca*,struct iv_use*) ;
 int FUNC_3 (struct iv_ca*) ;
 int FUNC_4 (struct ivopts_data*,scalar_t__,struct iv_ca*) ;
 struct iv_use* FUNC_5 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_6 (struct ivopts_data*) ;
 scalar_t__ FUNC_7 (struct ivopts_data*,struct iv_ca*) ;

__attribute__((used)) static struct iv_ca *
FUNC_8 (struct ivopts_data *VAR_3)
{
  unsigned VAR_4;
  struct iv_ca *VAR_5;
  struct iv_use *VAR_6;


  VAR_5 = FUNC_1 (VAR_3);
  if (!VAR_5)
    {
      if (VAR_1 && (VAR_2 & VAR_0))
 FUNC_0 (VAR_1, "Unable to substitute for ivs, failed.\n");
      return ((void*)0);
    }

  if (VAR_1 && (VAR_2 & VAR_0))
    {
      FUNC_0 (VAR_1, "Initial set of candidates:\n");
      FUNC_4 (VAR_3, VAR_1, VAR_5);
    }

  while (FUNC_7 (VAR_3, VAR_5))
    {
      if (VAR_1 && (VAR_2 & VAR_0))
 {
   FUNC_0 (VAR_1, "Improved to:\n");
   FUNC_4 (VAR_3, VAR_1, VAR_5);
 }
    }

  if (VAR_1 && (VAR_2 & VAR_0))
    FUNC_0 (VAR_1, "Final cost %d\n\n", FUNC_3 (VAR_5));

  for (VAR_4 = 0; VAR_4 < FUNC_6 (VAR_3); VAR_4++)
    {
      VAR_6 = FUNC_5 (VAR_3, VAR_4);
      VAR_6->selected = FUNC_2 (VAR_5, VAR_6)->cand;
    }

  return VAR_5;
}
