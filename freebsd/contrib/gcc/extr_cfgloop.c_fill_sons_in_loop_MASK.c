
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {int latch; } ;
typedef int * basic_block ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (struct loop const*,int *) ;
 int * FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4 (const struct loop *VAR_1, basic_block VAR_2,
     basic_block *VAR_3, int *VAR_4)
{
  basic_block VAR_5, VAR_6 = ((void*)0);

  VAR_3[(*VAR_4)++] = VAR_2;
  for (VAR_5 = FUNC_1 (VAR_0, VAR_2);
       VAR_5;
       VAR_5 = FUNC_3 (VAR_0, VAR_5))
    {
      if (!FUNC_2 (VAR_1, VAR_5))
 continue;

      if (FUNC_0 (VAR_0, VAR_1->latch, VAR_5))
 {
   VAR_6 = VAR_5;
   continue;
 }
      FUNC_4 (VAR_1, VAR_5, VAR_3, VAR_4);
    }

  if (VAR_6)
    FUNC_4 (VAR_1, VAR_6, VAR_3, VAR_4);
}
