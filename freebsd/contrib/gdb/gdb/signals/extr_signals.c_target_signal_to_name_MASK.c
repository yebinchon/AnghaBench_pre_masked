
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

char *
FUNC_0 (enum target_signal VAR_3)
{
  if ((VAR_3 >= VAR_0) && (VAR_3 <= VAR_1)
      && VAR_2[VAR_3].name != ((void*)0))
    return VAR_2[VAR_3].name;
  else


    return "?";
}
