
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {int dummy; } ;
struct iv_use {int type; int iv; } ;





 int FUNC_0 (struct ivopts_data*,int ,struct iv_use*) ;
 int FUNC_1 () ;
 struct iv_use* FUNC_2 (struct ivopts_data*,unsigned int) ;
 unsigned int FUNC_3 (struct ivopts_data*) ;

__attribute__((used)) static void
FUNC_4 (struct ivopts_data *VAR_0)
{
  unsigned VAR_1;

  for (VAR_1 = 0; VAR_1 < FUNC_3 (VAR_0); VAR_1++)
    {
      struct iv_use *VAR_2 = FUNC_2 (VAR_0, VAR_1);

      if (!VAR_2)
 continue;

      switch (VAR_2->type)
 {
 case 128:
 case 129:
 case 130:

   FUNC_0 (VAR_0, VAR_2->iv, VAR_2);
   break;

 default:
   FUNC_1 ();
 }
    }
}
