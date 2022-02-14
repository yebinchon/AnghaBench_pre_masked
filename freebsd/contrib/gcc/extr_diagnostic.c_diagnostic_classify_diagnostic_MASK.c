
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ diagnostic_t ;
struct TYPE_3__ {scalar_t__* classify_diagnostic; } ;
typedef TYPE_1__ diagnostic_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

diagnostic_t
FUNC_0 (diagnostic_context *VAR_3,
    int VAR_4,
    diagnostic_t VAR_5)
{
  diagnostic_t VAR_6;

  if (VAR_4 <= 0
      || VAR_4 >= VAR_2
      || VAR_5 >= VAR_0)
    return VAR_1;

  VAR_6 = VAR_3->classify_diagnostic[VAR_4];
  VAR_3->classify_diagnostic[VAR_4] = VAR_5;
  return VAR_6;
}
