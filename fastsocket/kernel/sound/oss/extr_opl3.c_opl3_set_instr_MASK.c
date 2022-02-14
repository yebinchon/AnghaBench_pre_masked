
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_voice; int * i_map; int ** act_i; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0 (int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_1->nr_voice)
  return 0;
 if (VAR_4 < 0 || VAR_4 >= VAR_0)
  VAR_4 = 0;

 VAR_1->act_i[VAR_3] = &VAR_1->i_map[VAR_4];
 return 0;
}
