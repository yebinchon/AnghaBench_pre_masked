
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int dummy; } ;
typedef TYPE_1__* edge ;
struct TYPE_4__ {scalar_t__ src; int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct loop*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (struct loop *VAR_5, tree VAR_6)
{
  edge VAR_7 = FUNC_3 (VAR_5);
  tree VAR_8;

  while (1)
    {
      VAR_8 = FUNC_2 (VAR_7->src);
      if (VAR_8
   && FUNC_1 (VAR_8) == VAR_0
   && FUNC_4 (FUNC_0 (VAR_8), VAR_6, 0))
 return (VAR_7->flags & VAR_1
  ? VAR_4
  : VAR_3);

      if (!FUNC_6 (VAR_7->src))
 return VAR_6;

      VAR_7 = FUNC_5 (VAR_7->src);
      if (VAR_7->src == VAR_2)
 return VAR_6;
    }
}
