
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

char *
FUNC_0 (enum target_signal VAR_4)
{
  if ((VAR_4 >= VAR_0) && (VAR_4 <= VAR_1))
    return VAR_3[VAR_4].string;
  else
    return VAR_3[VAR_2].string;
}
