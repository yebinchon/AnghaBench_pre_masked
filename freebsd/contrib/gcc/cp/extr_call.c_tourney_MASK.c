
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_candidate {struct z_candidate* next; } ;


 int FUNC_0 (struct z_candidate*,struct z_candidate*,int ) ;

__attribute__((used)) static struct z_candidate *
FUNC_1 (struct z_candidate *VAR_0)
{
  struct z_candidate *VAR_1 = VAR_0, *VAR_2;
  int VAR_3;
  int VAR_4 = 0;




  for (VAR_2 = VAR_1->next; VAR_2; )
    {
      VAR_3 = FUNC_0 (VAR_1, VAR_2, 0);
      if (VAR_3 == 1)
 VAR_2 = VAR_2->next;
      else
 {
   if (VAR_3 == 0)
     {
       VAR_1 = VAR_2->next;
       if (VAR_1 == 0)
  return ((void*)0);
       VAR_4 = 0;
     }
   else
     {
       VAR_1 = VAR_2;
       VAR_4 = 1;
     }

   VAR_2 = VAR_1->next;
 }
    }




  for (VAR_2 = VAR_0;
       VAR_2 != VAR_1
  && !(VAR_4 && VAR_2->next == VAR_1);
       VAR_2 = VAR_2->next)
    {
      VAR_3 = FUNC_0 (VAR_1, VAR_2, 0);
      if (VAR_3 != 1)
 return ((void*)0);
    }

  return VAR_1;
}
