
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_time {int dummy; } ;
struct pex_obj {int count; int * time; int * status; } ;


 int FUNC_0 (struct pex_time*,int *,int) ;
 int FUNC_1 (struct pex_time*,int ,int) ;
 int FUNC_2 (struct pex_obj*,int ,char const**,int*) ;

int
FUNC_3 (struct pex_obj *VAR_0, int VAR_1, struct pex_time *VAR_2)
{
  if (VAR_0->status == ((void*)0))
    {
      const char *VAR_3;
      int VAR_4;

      if (!FUNC_2 (VAR_0, 0, &VAR_3, &VAR_4))
 return 0;
    }

  if (VAR_0->time == ((void*)0))
    return 0;

  if (VAR_1 > VAR_0->count)
    {
      FUNC_1 (VAR_2 + VAR_0->count, 0,
       (VAR_1 - VAR_0->count) * sizeof (struct pex_time));
      VAR_1 = VAR_0->count;
    }

  FUNC_0 (VAR_2, VAR_0->time, VAR_1 * sizeof (struct pex_time));

  return 1;
}
