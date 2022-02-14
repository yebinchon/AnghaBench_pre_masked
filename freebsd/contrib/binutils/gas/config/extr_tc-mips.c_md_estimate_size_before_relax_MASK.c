
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fr_var; int fr_subtype; int fr_symbol; } ;
typedef TYPE_1__ fragS ;
typedef int asection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 () ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;

int
FUNC_9 (fragS *VAR_6, asection *VAR_7)
{
  int VAR_8;

  if (FUNC_0 (VAR_6->fr_subtype))
    {

      VAR_6->fr_var = FUNC_8 (VAR_6, VAR_7, VAR_0);

      return VAR_6->fr_var;
    }

  if (FUNC_3 (VAR_6->fr_subtype))


    return (FUNC_2 (VAR_6->fr_subtype) ? 4 : 2);

  if (VAR_5 == VAR_1)
    VAR_8 = FUNC_6 (VAR_6->fr_symbol, 0);
  else if (VAR_5 == VAR_3)
    VAR_8 = FUNC_7 (VAR_6->fr_symbol, VAR_7);
  else if (VAR_5 == VAR_4)

    VAR_8 = 0;
  else
    FUNC_5 ();

  if (VAR_8)
    {
      VAR_6->fr_subtype |= VAR_2;
      return -FUNC_1 (VAR_6->fr_subtype);
    }
  else
    return -FUNC_4 (VAR_6->fr_subtype);
}
