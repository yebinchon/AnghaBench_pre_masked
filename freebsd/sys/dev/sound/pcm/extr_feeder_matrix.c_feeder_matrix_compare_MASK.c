
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pcmchan_matrix {scalar_t__ channels; scalar_t__ ext; scalar_t__ mask; scalar_t__* offset; TYPE_1__* map; } ;
struct TYPE_2__ {size_t type; scalar_t__ members; } ;


 int VAR_0 ;
 size_t VAR_1 ;

int
FUNC_0(struct pcmchan_matrix *VAR_2, struct pcmchan_matrix *VAR_3)
{
 uint32_t VAR_4;

 if (VAR_2 == VAR_3)
  return (0);

 if (VAR_2->channels != VAR_3->channels || VAR_2->ext != VAR_3->ext ||
     VAR_2->mask != VAR_3->mask)
  return (1);

 for (VAR_4 = 0; VAR_4 < (sizeof(VAR_2->map) / sizeof(VAR_2->map[0])); VAR_4++) {
  if (VAR_2->map[VAR_4].type != VAR_3->map[VAR_4].type)
   return (1);
  if (VAR_2->map[VAR_4].type == VAR_1)
   break;
  if (VAR_2->map[VAR_4].members != VAR_3->map[VAR_4].members)
   return (1);
  if (VAR_4 <= VAR_0) {
   if (VAR_2->offset[VAR_2->map[VAR_4].type] !=
       VAR_3->offset[VAR_3->map[VAR_4].type])
    return (1);
  }
 }

 return (0);
}
