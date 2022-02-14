
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbase {int vbasetype; struct vbase* next; } ;
struct type {int dummy; } ;


 struct type* FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 struct vbase* VAR_0 ;
 scalar_t__ FUNC_2 (int ,struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;

int
FUNC_5 (struct type *VAR_1)
{
  int VAR_2;
  struct vbase *VAR_3;
  struct type *VAR_4;

  VAR_4 = FUNC_1 (VAR_1) ? FUNC_0 (VAR_1) : ((void*)0);

  if (!VAR_4)
    return FUNC_4 (VAR_1);

  VAR_0 = ((void*)0);
  FUNC_3 (VAR_1);

  for (VAR_2 = 0, VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      if (FUNC_2 (VAR_3->vbasetype, VAR_4) >= 0)
 continue;
      VAR_2++;
    }
  return VAR_2;
}
