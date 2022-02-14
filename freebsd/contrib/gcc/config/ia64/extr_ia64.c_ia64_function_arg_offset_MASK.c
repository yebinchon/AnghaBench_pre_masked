
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {int words; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2 (CUMULATIVE_ARGS *VAR_3, tree VAR_4, int VAR_5)
{
  if ((VAR_3->words & 1) == 0)
    return 0;

  if (VAR_4
      && FUNC_0 (VAR_4) != VAR_1
      && FUNC_0 (VAR_4) != VAR_2)
    return FUNC_1 (VAR_4) > 8 * VAR_0;
  else
    return VAR_5 > 1;
}
