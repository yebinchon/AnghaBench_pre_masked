
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int flagword ;
struct TYPE_3__ {int flags; scalar_t__ lma; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const* const) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_2, const void *VAR_3)
{
  const asection *const *VAR_4 = VAR_2;
  const asection *const *VAR_5 = VAR_3;
  flagword VAR_6, VAR_7;


  VAR_6 = (*VAR_4)->flags;
  VAR_7 = (*VAR_5)->flags;
  if ((VAR_6 & VAR_0) == 0
      || (VAR_6 & VAR_1) == 0)
    {
      if ((VAR_7 & VAR_0) != 0
   && (VAR_7 & VAR_1) != 0)
 return -1;
    }
  else
    {
      if ((VAR_7 & VAR_0) == 0
   || (VAR_7 & VAR_1) == 0)
 return 1;
    }


  if ((*VAR_4)->lma > (*VAR_5)->lma)
    return 1;
  else if ((*VAR_4)->lma < (*VAR_5)->lma)
    return -1;


  if (FUNC_0 (*VAR_4) > FUNC_0 (*VAR_5))
    return 1;
  else if (FUNC_0 (*VAR_4) < FUNC_0 (*VAR_5))
    return -1;

  return 0;
}
