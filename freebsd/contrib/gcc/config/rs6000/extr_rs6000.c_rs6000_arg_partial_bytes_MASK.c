
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_5__ {scalar_t__ nargs_prototype; scalar_t__ fregno; int words; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,scalar_t__,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int,scalar_t__,int ) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_8 (CUMULATIVE_ARGS *VAR_12, enum machine_mode VAR_13,
     tree VAR_14, bool VAR_15)
{
  int VAR_16 = 0;
  int VAR_17;

  if (VAR_3 == VAR_1)
    return 0;

  if (FUNC_2 (VAR_12, VAR_13, VAR_14, VAR_15)
      && VAR_12->nargs_prototype >= 0)
    return 0;


  if (VAR_10 && VAR_13 == VAR_2
      && FUNC_1 (VAR_14) == VAR_6
      && FUNC_5 (VAR_14) > 0)
    return 0;

  VAR_17 = FUNC_7 (VAR_13, VAR_14, VAR_12->words);

  if (FUNC_3 (VAR_12, VAR_13, VAR_14))
    {




      if (VAR_14
   && (VAR_12->nargs_prototype <= 0
       || (VAR_3 == VAR_0
    && VAR_9
    && VAR_17 >= VAR_5)))
 return 0;
      else if (VAR_12->fregno + ((FUNC_0 (VAR_13) + 7) >> 3)
        > VAR_4 + 1)
 VAR_16 = (VAR_4 + 1 - VAR_12->fregno) * 8;
      else if (VAR_12->nargs_prototype >= 0)
 return 0;
    }

  if (VAR_17 < VAR_5
      && VAR_5 < VAR_17 + FUNC_6 (VAR_13, VAR_14))
    VAR_16 = (VAR_5 - VAR_17) * (VAR_7 ? 4 : 8);

  if (VAR_16 != 0 && VAR_8)
    FUNC_4 (VAR_11, "rs6000_arg_partial_bytes: %d\n", VAR_16);

  return VAR_16;
}
