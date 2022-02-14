
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbase {struct vbase* next; struct type* vbasetype; } ;
struct type {int dummy; } ;


 struct vbase* VAR_0 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct vbase*) ;
 scalar_t__ FUNC_2 (int) ;

struct type **
FUNC_3 (struct type *VAR_1)
{
  struct vbase *VAR_2;
  struct vbase *VAR_3;
  int VAR_4;
  int VAR_5;
  struct type **VAR_6;

  VAR_0 = ((void*)0);
  FUNC_0 (VAR_1);

  for (VAR_4 = 0, VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_4++, VAR_2 = VAR_2->next)
                  ;

  VAR_5 = VAR_4;

  VAR_6 = (struct type **) FUNC_2 ((VAR_5 + 1) * sizeof (struct type *));

  for (VAR_4 = VAR_5 - 1, VAR_2 = VAR_0; VAR_4 >= 0; VAR_4--, VAR_2 = VAR_2->next)
    VAR_6[VAR_4] = VAR_2->vbasetype;


  VAR_3 = VAR_2 = VAR_0;
  while (VAR_2)
    {
      VAR_2 = VAR_2->next;
      FUNC_1 (VAR_3);
      VAR_3 = VAR_2;
    }

  VAR_6[VAR_5] = ((void*)0);
  return VAR_6;
}
