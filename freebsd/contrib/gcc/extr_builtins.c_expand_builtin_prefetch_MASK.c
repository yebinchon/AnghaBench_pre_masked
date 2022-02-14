
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int mode; int (* predicate ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 TYPE_2__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (scalar_t__,int ,int ) ;
 int FUNC_17 (int ,char*) ;

__attribute__((used)) static void
FUNC_18 (tree VAR_11)
{
  tree VAR_12, VAR_13, VAR_14;
  rtx VAR_15, VAR_16, VAR_17;

  if (!FUNC_16 (VAR_11, VAR_6, 0))
    return;

  VAR_12 = FUNC_5 (VAR_11);



  if (FUNC_3 (VAR_11))
    {
      VAR_13 = FUNC_5 (FUNC_3 (VAR_11));
      if (FUNC_3 (FUNC_3 (VAR_11)))
 VAR_14 = FUNC_5 (FUNC_3 (FUNC_3 (VAR_11)));
      else
 VAR_14 = FUNC_6 (VAR_5, 3);
    }
  else
    {
      VAR_13 = VAR_10;
      VAR_14 = FUNC_6 (VAR_5, 3);
    }


  VAR_15 = FUNC_10 (VAR_12, VAR_4, VAR_7, VAR_1);


  if (FUNC_4 (VAR_13) != VAR_3)
    {
      FUNC_9 ("second argument to %<__builtin_prefetch%> must be a constant");
      VAR_13 = VAR_10;
    }
  VAR_16 = FUNC_11 (VAR_13);

  if (FUNC_1 (VAR_16) != 0 && FUNC_1 (VAR_16) != 1)
    {
      FUNC_17 (0, "invalid second argument to %<__builtin_prefetch%>;"
        " using zero");
      VAR_16 = VAR_8;
    }


  if (FUNC_4 (VAR_14) != VAR_3)
    {
      FUNC_9 ("third argument to %<__builtin_prefetch%> must be a constant");
      VAR_14 = VAR_10;
    }
  VAR_17 = FUNC_11 (VAR_14);

  if (FUNC_1 (VAR_17) < 0 || FUNC_1 (VAR_17) > 3)
    {
      FUNC_17 (0, "invalid third argument to %<__builtin_prefetch%>; using zero");
      VAR_17 = VAR_8;
    }
  if (!FUNC_2 (VAR_15) && FUNC_14 (VAR_15))
    FUNC_8 (VAR_15);
}
