
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {int subdivision; int fragment_size; int max_fragments; int buffsize; } ;
struct TYPE_2__ {int min_fragment; int max_fragment; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static int FUNC_0(int VAR_6, struct dma_buffparms *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 if (VAR_8 == 0)
  return -VAR_2;

 if (VAR_7->subdivision != 0 ||
     VAR_7->fragment_size)
  return -VAR_1;

 VAR_9 = VAR_8 & 0xffff;
 VAR_10 = (VAR_8 >> 16) & 0x7fff;

 if (VAR_10 == 0)
  VAR_10 = VAR_3;
 else if (VAR_10 < VAR_3)
  VAR_10++;

 if (VAR_9 < 4 || VAR_9 > 17)
  return -VAR_1;

 if (VAR_10 < 2)
  return -VAR_1;

 if (VAR_5[VAR_6]->min_fragment > 0)
  if (VAR_9 < VAR_5[VAR_6]->min_fragment)
   VAR_9 = VAR_5[VAR_6]->min_fragment;

 if (VAR_5[VAR_6]->max_fragment > 0)
  if (VAR_9 > VAR_5[VAR_6]->max_fragment)
   VAR_9 = VAR_5[VAR_6]->max_fragment;






 VAR_7->fragment_size = (1 << VAR_9);
 VAR_7->max_fragments = VAR_10;

 if (VAR_7->fragment_size > VAR_7->buffsize)
  VAR_7->fragment_size = VAR_7->buffsize;

 if (VAR_7->fragment_size == VAR_7->buffsize &&
     VAR_5[VAR_6]->flags & VAR_0)
  VAR_7->fragment_size /= 2;

 VAR_7->subdivision = 1;
 return VAR_9 | ((VAR_10 - 1) << 16);
}
