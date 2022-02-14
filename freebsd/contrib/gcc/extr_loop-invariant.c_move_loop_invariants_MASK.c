
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; scalar_t__* parray; struct loop* tree_root; } ;
struct loop {struct loop* outer; struct loop* inner; struct loop* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct loop*) ;
 int FUNC_5 () ;

void
FUNC_6 (struct loops *VAR_4)
{
  struct loop *VAR_5;
  unsigned VAR_6;

  VAR_3 = FUNC_2 (VAR_1 | VAR_0);
  FUNC_0 (VAR_3, VAR_2);


  VAR_5 = VAR_4->tree_root;
  while (VAR_5->inner)
    VAR_5 = VAR_5->inner;

  while (VAR_5 != VAR_4->tree_root)
    {
      FUNC_4 (VAR_5);

      if (VAR_5->next)
 {
   VAR_5 = VAR_5->next;
   while (VAR_5->inner)
     VAR_5 = VAR_5->inner;
 }
      else
 VAR_5 = VAR_5->outer;
    }

  for (VAR_6 = 1; VAR_6 < VAR_4->num; VAR_6++)
    if (VAR_4->parray[VAR_6])
      FUNC_3 (VAR_4->parray[VAR_6]);

  FUNC_1 (VAR_3);
  VAR_3 = ((void*)0);




}
