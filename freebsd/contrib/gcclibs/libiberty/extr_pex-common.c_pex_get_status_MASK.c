
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {int count; int * status; } ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct pex_obj*,int ,char const**,int*) ;

int
FUNC_3 (struct pex_obj *VAR_0, int VAR_1, int *VAR_2)
{
  if (VAR_0->status == ((void*)0))
    {
      const char *VAR_3;
      int VAR_4;

      if (!FUNC_2 (VAR_0, 0, &VAR_3, &VAR_4))
 return 0;
    }

  if (VAR_1 > VAR_0->count)
    {
      FUNC_1 (VAR_2 + VAR_0->count, 0, (VAR_1 - VAR_0->count) * sizeof (int));
      VAR_1 = VAR_0->count;
    }

  FUNC_0 (VAR_2, VAR_0->status, VAR_1 * sizeof (int));

  return 1;
}
