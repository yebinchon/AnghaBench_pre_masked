
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pcmchan_matrix {int mask; int channels; scalar_t__ ext; size_t* offset; TYPE_1__* map; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t*,int,int) ;
 int* VAR_7 ;

int
FUNC_1(struct pcmchan_matrix *VAR_8,
    unsigned long long *VAR_9)
{
 struct pcmchan_matrix VAR_10;
 uint32_t VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || (VAR_8->mask & ~VAR_4) ||
     VAR_8->channels > VAR_3 || (*VAR_9 & 0xffffffff00000000ULL))
  return (VAR_0);

 VAR_10 = *VAR_8;
 VAR_10.channels = 0;
 VAR_10.ext = 0;
 VAR_10.mask = 0;
 FUNC_0(VAR_10.offset, -1, sizeof(VAR_10.offset));
 VAR_14 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_13 = (*VAR_9 >> (VAR_12 * 4)) & 0xf;
  if (VAR_13 < VAR_1) {
   if (VAR_14 == 0 && VAR_8->map[VAR_12].type != VAR_6)
    return (VAR_0);
   VAR_14++;
   VAR_10.map[VAR_12] = VAR_8->map[VAR_12];
   continue;
  } else if (VAR_13 > VAR_2)
   return (VAR_0);
  else if (VAR_14 != 0)
   return (VAR_0);
  VAR_13 = VAR_7[VAR_13];
  VAR_11 = 1 << VAR_13;

  if (!(VAR_11 & VAR_8->mask))
   return (VAR_0);

  if (VAR_11 & VAR_10.mask)
   return (VAR_0);
  VAR_10.map[VAR_12] = VAR_8->map[VAR_8->offset[VAR_13]];
  if (VAR_10.map[VAR_12].type != VAR_13)
   return (VAR_0);
  VAR_10.offset[VAR_13] = VAR_12;
  VAR_10.mask |= VAR_11;
  VAR_10.channels++;
  if (VAR_11 & VAR_5)
   VAR_10.ext++;
 }

 if (VAR_10.channels != VAR_8->channels || VAR_10.ext != VAR_8->ext ||
     VAR_10.mask != VAR_8->mask ||
     VAR_10.map[VAR_8->channels].type != VAR_6)
  return (VAR_0);

 *VAR_8 = VAR_10;

 return (0);
}
