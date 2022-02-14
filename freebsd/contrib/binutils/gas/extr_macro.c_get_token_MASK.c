
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,char) ;

__attribute__((used)) static int
FUNC_4 (int VAR_1, sb *VAR_2, sb *VAR_3)
{
  if (VAR_1 < VAR_2->len
      && FUNC_0 (VAR_2->ptr[VAR_1]))
    {
      FUNC_3 (VAR_3, VAR_2->ptr[VAR_1++]);
      while (VAR_1 < VAR_2->len
      && FUNC_2 (VAR_2->ptr[VAR_1]))
 {
   FUNC_3 (VAR_3, VAR_2->ptr[VAR_1++]);
 }
      if (VAR_1 < VAR_2->len
      && FUNC_1 (VAR_2->ptr[VAR_1]))
 {
   FUNC_3 (VAR_3, VAR_2->ptr[VAR_1++]);
 }
    }

  if (VAR_0 && VAR_1 < VAR_2->len && VAR_2->ptr[VAR_1] == '&')
    VAR_1++;
  return VAR_1;
}
