
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_voice; unsigned short* map; } ;
struct TYPE_4__ {TYPE_1__ alloc; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
 unsigned short VAR_4;
 int VAR_5;

 VAR_4 = (VAR_2 << 8) | (VAR_3 + 1);
 for (VAR_5 = 0; VAR_5 < VAR_0[VAR_1]->alloc.max_voice; VAR_5++)
  if (VAR_0[VAR_1]->alloc.map[VAR_5] == VAR_4)
   return VAR_5;
 return -1;
}
