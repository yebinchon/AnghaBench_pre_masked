
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uword ;
struct object {int dummy; } ;


 int FUNC_0 (void*,struct object*) ;
 struct object* FUNC_1 (int) ;

void
FUNC_2 (void *VAR_0)
{
  struct object *VAR_1;


  if (*(uword *) VAR_0 == 0)
    return;

  VAR_1 = FUNC_1 (sizeof (struct object));
  FUNC_0 (VAR_0, VAR_1);
}
