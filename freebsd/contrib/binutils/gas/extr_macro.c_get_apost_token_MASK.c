
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int* ptr; } ;
typedef TYPE_1__ sb ;


 int FUNC_0 (int,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1 (int VAR_2, sb *VAR_3, sb *VAR_4, int VAR_5)
{
  VAR_2 = FUNC_0 (VAR_2, VAR_3, VAR_4);
  if (VAR_2 < VAR_3->len
      && VAR_3->ptr[VAR_2] == VAR_5
      && (! VAR_0 || VAR_1)
      && (! VAR_1 || VAR_5 == '@'))
    VAR_2++;
  return VAR_2;
}
