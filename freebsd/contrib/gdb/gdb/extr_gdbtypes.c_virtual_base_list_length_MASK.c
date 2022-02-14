
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbase {struct vbase* next; } ;
struct type {int dummy; } ;


 struct vbase* VAR_0 ;
 int FUNC_0 (struct type*) ;

int
FUNC_1 (struct type *VAR_1)
{
  int VAR_2;
  struct vbase *VAR_3;

  VAR_0 = ((void*)0);
  FUNC_0 (VAR_1);

  for (VAR_2 = 0, VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_2++, VAR_3 = VAR_3->next)
                  ;
  return VAR_2;
}
