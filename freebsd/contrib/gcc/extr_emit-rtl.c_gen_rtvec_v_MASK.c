
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtx ;
typedef TYPE_1__* rtvec ;
struct TYPE_5__ {int * elem; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

rtvec
FUNC_1 (int VAR_1, rtx *VAR_2)
{
  int VAR_3;
  rtvec VAR_4;

  if (VAR_1 == 0)
    return VAR_0;

  VAR_4 = FUNC_0 (VAR_1);

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    VAR_4->elem[VAR_3] = *VAR_2++;

  return VAR_4;
}
