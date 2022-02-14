
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef char u_char ;
struct bios_oem_signature {char* anchor; size_t offset; size_t totlen; } ;
struct TYPE_2__ {scalar_t__ from; scalar_t__ to; } ;
struct bios_oem {TYPE_1__ range; struct bios_oem_signature* signature; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t,size_t,size_t,size_t,...) ;
 size_t FUNC_3 (char*) ;

int
FUNC_4(struct bios_oem *VAR_2, u_char *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 0;
 struct bios_oem_signature *VAR_6;
 u_int VAR_7, VAR_8;
 u_char VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15, VAR_16, VAR_17;

 if ( !VAR_2 || !VAR_3 || VAR_4<2 )
  return(-1);

 VAR_6 = VAR_2->signature;
 if (!VAR_6)
  return(-2);

 VAR_7 = VAR_2->range.from;
 VAR_8 = VAR_2->range.to;
 if ( (VAR_8<=VAR_7) || (VAR_7<VAR_1) || (VAR_8>(VAR_1+VAR_0)) )
  return(-3);

 while (VAR_6->anchor != ((void*)0)) {
  VAR_12 = VAR_6->anchor;
  VAR_16 = FUNC_3(VAR_12);
  VAR_15 = VAR_6->offset;
  VAR_17 = VAR_6->totlen;

  if ( (VAR_8+VAR_15)>(VAR_1+VAR_0) ||
     ((VAR_7+VAR_15)<VAR_1) ) {
   FUNC_2("sys/i386/i386/bios.c: sig '%s' "
    "from 0x%0x to 0x%0x offset %d "
    "out of BIOS bounds 0x%0x - 0x%0x\n",
    VAR_12, VAR_7, VAR_8, VAR_15,
    VAR_1, VAR_1+VAR_0);
   return(-4);
  }

  if (VAR_5 + VAR_17 > VAR_4 - 1) {
   FUNC_2("sys/i386/i386/bios.c: sig '%s' "
    "idx %d + tot %d = %d > maxlen-1 %d\n",
    VAR_12, VAR_5, VAR_17, VAR_5+VAR_17, VAR_4-1);
   return(-5);
  }
  VAR_13 = ((void*)0);
  VAR_10 = (u_char *)FUNC_0(VAR_7);
  VAR_11 = (u_char *)FUNC_0(VAR_8-VAR_16);
  for (; VAR_10<VAR_11; VAR_10++) {
   if (!FUNC_1(VAR_12, VAR_10, VAR_16)) {
    VAR_13 = VAR_10;
    break;
   }
  }




  if (VAR_13) {
   for (VAR_14=0; VAR_14<VAR_17; VAR_14++) {
    VAR_9 = VAR_13[VAR_14+VAR_15];
    if ( (VAR_9 < 0x20) || (VAR_9 > 0x7E) )
     VAR_9 = ' ';
    if (VAR_5 == 0) {
     if (VAR_9 != ' ')
      VAR_3[VAR_5++] = VAR_9;
    } else if ( (VAR_9 != ' ') ||
     ((VAR_9 == ' ') && (VAR_3[VAR_5-1] != ' ')) )
      VAR_3[VAR_5++] = VAR_9;
   }
  }
  VAR_6++;
 }

 if ( (VAR_5 > 1) && (VAR_3[VAR_5-1] == ' ') )
  VAR_5--;
 VAR_3[VAR_5] = '\0';
 return (VAR_5);
}
