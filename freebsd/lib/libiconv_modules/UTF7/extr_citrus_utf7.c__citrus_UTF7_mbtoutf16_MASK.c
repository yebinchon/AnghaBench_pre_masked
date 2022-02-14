
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int chlen; int mode; int bits; int cache; scalar_t__* ch; } ;
typedef TYPE_1__ _UTF7State ;
typedef int _UTF7EncodingInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_3(_UTF7EncodingInfo * __restrict VAR_7,
    uint16_t * __restrict VAR_8, char ** __restrict VAR_9, size_t VAR_10,
    _UTF7State * __restrict VAR_11, size_t * __restrict VAR_12)
{
 char *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 *VAR_12 = 0;
 VAR_13 = *VAR_9;

 for (VAR_15 = 0, VAR_14 = 0; VAR_14 == 0; VAR_15++) {
  if (VAR_15 == VAR_11->chlen) {
   if (VAR_10-- < 1) {
    *VAR_12 = (size_t)-2;
    *VAR_9 = VAR_13;
    return (0);
   }
   VAR_11->ch[VAR_11->chlen++] = *VAR_13++;
  }
  if (FUNC_2((int)VAR_11->ch[VAR_15]))
   goto ilseq;
  if (!VAR_11->mode) {
   if (VAR_11->bits > 0 || VAR_11->cache > 0)
    return (VAR_4);
   if (VAR_11->ch[VAR_15] == VAR_1)
    VAR_11->mode = 1;
   else {
    if (!FUNC_1(VAR_7, (int)VAR_11->ch[VAR_15]))
     goto ilseq;
    *VAR_8 = (uint16_t)VAR_11->ch[VAR_15];
    VAR_14 = 1;
    continue;
   }
  } else {
   if (VAR_11->ch[VAR_15] == VAR_2 && VAR_11->cache == 0) {
    VAR_11->mode = 0;
    *VAR_8 = (uint16_t)VAR_1;
    VAR_14 = 1;
    continue;
   }
   VAR_16 = FUNC_0(VAR_7, (int)VAR_11->ch[VAR_15]);
   if (VAR_16 < 0) {
    if (VAR_11->bits >= VAR_0)
     return (VAR_4);
    VAR_11->mode = 0;
    VAR_11->bits = VAR_11->cache = 0;
    if (VAR_11->ch[VAR_15] != VAR_2) {
     if (!FUNC_1(VAR_7, (int)VAR_11->ch[VAR_15]))
      goto ilseq;
     *VAR_8 = (uint16_t)VAR_11->ch[VAR_15];
     VAR_14 = 1;
    } else {
     VAR_11->chlen--;
     VAR_15--;
    }
   } else {
    VAR_11->cache =
        (VAR_11->cache << VAR_0) | VAR_16;
    switch (VAR_11->bits) {
    case 0: case 2: case 4: case 6: case 8:
     VAR_11->bits += VAR_0;
     break;
    case 10: case 12: case 14:
     VAR_11->bits -= (VAR_5 - VAR_0);
     *VAR_8 = (VAR_11->cache >> VAR_11->bits) &
         VAR_6;
     VAR_14 = 1;
     break;
    default:
     return (VAR_4);
    }
   }
  }
 }

 if (VAR_11->chlen > VAR_15)
  return (VAR_4);
 VAR_11->chlen = 0;
 *VAR_12 = (size_t)((*VAR_8 == 0) ? 0 : VAR_13 - *VAR_9);
 *VAR_9 = VAR_13;

 return (0);

ilseq:
 *VAR_12 = (size_t)-1;
 return (VAR_3);
}
