
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pcmchan_matrix {int mask; scalar_t__ channels; TYPE_1__* map; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

int
FUNC_0(struct pcmchan_matrix *VAR_5,
    unsigned long long *VAR_6)
{
 unsigned long long VAR_7;
 uint32_t VAR_8;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || (VAR_5->mask & ~VAR_2) ||
     VAR_5->channels > VAR_1)
  return (VAR_0);

 VAR_7 = 0x0000000000000000ULL;

 for (VAR_8 = 0; VAR_8 < VAR_1 && VAR_5->map[VAR_8].type != VAR_3;
     VAR_8++) {
  if ((1 << VAR_5->map[VAR_8].type) & ~VAR_2)
   return (VAR_0);
  VAR_7 |=
      (unsigned long long)VAR_4[VAR_5->map[VAR_8].type] <<
      (VAR_8 * 4);
 }

 *VAR_6 = VAR_7;

 return (0);
}
