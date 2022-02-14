
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {struct target_ops* beneath; } ;


 int FUNC_0 (struct target_ops*,int ) ;
 struct target_ops* VAR_0 ;
 int FUNC_1 () ;

int
FUNC_2 (struct target_ops *VAR_1)
{
  struct target_ops **VAR_2;
  struct target_ops *VAR_3;




  for (VAR_2 = &VAR_0; (*VAR_2) != ((void*)0); VAR_2 = &(*VAR_2)->beneath)
    {
      if ((*VAR_2) == VAR_1)
 break;
    }

  if ((*VAR_2) == ((void*)0))
    return 0;







  FUNC_0 (VAR_1, 0);


  VAR_3 = (*VAR_2);
  (*VAR_2) = (*VAR_2)->beneath;
  VAR_3->beneath = ((void*)0);

  FUNC_1 ();

  return 1;
}
