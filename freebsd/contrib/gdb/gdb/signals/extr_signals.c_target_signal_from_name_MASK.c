
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (char*,int *) ;

enum target_signal
FUNC_1 (char *VAR_4)
{
  enum target_signal VAR_5;







  for (VAR_5 = VAR_0;
       VAR_5 < VAR_1;
       VAR_5 = (enum target_signal) ((int) VAR_5 + 1))
    if (VAR_3[VAR_5].name != ((void*)0)
 && FUNC_0 (VAR_4, VAR_3[VAR_5].name) == 0)
      return VAR_5;
  return VAR_2;
}
