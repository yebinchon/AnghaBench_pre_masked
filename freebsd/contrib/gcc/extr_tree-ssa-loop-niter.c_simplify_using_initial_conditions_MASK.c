
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {scalar_t__ header; } ;
typedef TYPE_1__* edge ;
typedef scalar_t__ basic_block ;
struct TYPE_3__ {int flags; int src; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_9 (struct loop *VAR_8, tree VAR_9,
       tree *VAR_10)
{
  edge VAR_11;
  basic_block VAR_12;
  tree VAR_13, VAR_14;
  int VAR_15 = 0;

  if (FUNC_1 (VAR_9) == VAR_4)
    return VAR_9;




  for (VAR_12 = VAR_8->header;
       VAR_12 != VAR_3 && VAR_15 < VAR_5;
       VAR_12 = FUNC_3 (VAR_0, VAR_12))
    {
      if (!FUNC_7 (VAR_12))
 continue;
      VAR_11 = FUNC_6 (VAR_12);

      if (!(VAR_11->flags & (VAR_2 | VAR_1)))
 continue;

      VAR_14 = FUNC_0 (FUNC_5 (VAR_11->src));
      if (VAR_11->flags & VAR_1)
 VAR_14 = FUNC_4 (VAR_14);
      VAR_13 = FUNC_8 (VAR_14, VAR_9);

      if (VAR_13 != VAR_9)
 *VAR_10 = FUNC_2 (VAR_6,
       VAR_7,
       *VAR_10,
       VAR_14);

      VAR_9 = VAR_13;
      ++VAR_15;
    }

  return VAR_9;
}
