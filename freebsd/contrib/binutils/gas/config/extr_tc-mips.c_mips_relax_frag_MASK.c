
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_5__ {int fr_var; int fr_subtype; } ;
typedef TYPE_1__ fragS ;
typedef int asection ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,long) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;

int
FUNC_7 (asection *VAR_1, fragS *VAR_2, long VAR_3)
{
  if (FUNC_0 (VAR_2->fr_subtype))
    {
      offsetT VAR_4 = VAR_2->fr_var;

      VAR_2->fr_var = FUNC_6 (VAR_2, VAR_1, VAR_0);

      return VAR_2->fr_var - VAR_4;
    }

  if (! FUNC_4 (VAR_2->fr_subtype))
    return 0;

  if (FUNC_5 (VAR_2, ((void*)0), VAR_3))
    {
      if (FUNC_2 (VAR_2->fr_subtype))
 return 0;
      VAR_2->fr_subtype = FUNC_3 (VAR_2->fr_subtype);
      return 2;
    }
  else
    {
      if (! FUNC_2 (VAR_2->fr_subtype))
 return 0;
      VAR_2->fr_subtype = FUNC_1 (VAR_2->fr_subtype);
      return -2;
    }

  return 0;
}
