
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int ptr; } ;


 int FUNC_0 (char*,int,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1 (char *VAR_2, int VAR_3)
{
  int VAR_4;
  VAR_4 = VAR_0->len - (VAR_1 - VAR_0->ptr);
  if (VAR_4 > VAR_3)
    VAR_4 = VAR_3;
  FUNC_0 (VAR_2, VAR_1, VAR_4);
  VAR_1 += VAR_4;
  return VAR_4;
}
