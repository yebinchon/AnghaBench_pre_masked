
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {struct df_ref* next_ref; } ;


 int FUNC_0 () ;

__attribute__((used)) static struct df_ref *
FUNC_1 (struct df_ref *VAR_0, struct df_ref *VAR_1)
{
  struct df_ref *VAR_2 = VAR_0;
  struct df_ref *VAR_3 = ((void*)0);
  while (VAR_0)
    {
      if (VAR_0 == VAR_1)
 {
   if (VAR_3)
     {
       VAR_3->next_ref = VAR_1->next_ref;
       VAR_1->next_ref = ((void*)0);
       return VAR_2;
     }
   else
     {
       VAR_0 = VAR_1->next_ref;
       VAR_1->next_ref = ((void*)0);
       return VAR_0;
     }
 }

      VAR_3 = VAR_0;
      VAR_0 = VAR_0->next_ref;
    }


  FUNC_0 ();
  return ((void*)0);
}
