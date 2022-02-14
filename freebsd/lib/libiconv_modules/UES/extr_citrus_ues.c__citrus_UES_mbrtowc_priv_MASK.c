
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint32_t ;
struct TYPE_7__ {int chlen; char* ch; } ;
typedef TYPE_1__ _UESState ;
struct TYPE_8__ {int mode; } ;
typedef TYPE_2__ _UESEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(_UESEncodingInfo * __restrict VAR_4,
    wchar_t * __restrict VAR_5, char ** __restrict VAR_6, size_t VAR_7,
    _UESState * __restrict VAR_8, size_t * __restrict VAR_9)
{
 char *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 wchar_t VAR_15, VAR_16;

 if (*VAR_6 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_8);
  *VAR_9 = 0;
  return (0);
 }
 VAR_10 = *VAR_6;

 VAR_15 = (wchar_t)0;
 VAR_14 = 0;

surrogate:
 VAR_16 = (wchar_t)0;
 VAR_12 = VAR_14;
 if (VAR_8->chlen == VAR_12) {
  if (VAR_7-- < 1)
   goto restart;
  VAR_8->ch[VAR_8->chlen++] = *VAR_10++;
 }
 VAR_11 = (unsigned char)VAR_8->ch[VAR_12++];
 if (VAR_11 == VAR_1) {
  if (VAR_8->chlen == VAR_12) {
   if (VAR_7-- < 1)
    goto restart;
   VAR_8->ch[VAR_8->chlen++] = *VAR_10++;
  }
  switch (VAR_8->ch[VAR_12]) {
  case 129:
   VAR_14 += 6;
   break;
  case 128:
   if (VAR_4->mode & VAR_2) {
    VAR_14 = 10;
    break;
   }

  default:
   VAR_14 = 0;
  }
  ++VAR_12;
 }
 for (; VAR_12 < VAR_14; ++VAR_12) {
  if (VAR_8->chlen == VAR_12) {
   if (VAR_7-- < 1) {
restart:
    *VAR_6 = VAR_10;
    *VAR_9 = (size_t)-2;
    return (0);
   }
   VAR_8->ch[VAR_8->chlen++] = *VAR_10++;
  }
  VAR_13 = FUNC_6((int)(unsigned char)VAR_8->ch[VAR_12]);
  if (VAR_13 < 0) {
   VAR_14 = 0;
   break;
  }
  VAR_16 = (VAR_16 << 4) | VAR_13;
 }
 VAR_12 = 0;
 switch (VAR_14) {
 case 0:
  break;
 case 6:
  if (VAR_15 != (wchar_t)0)
   break;
  if ((VAR_4->mode & VAR_2) == 0) {
   if (FUNC_2(VAR_16) != 0) {
    VAR_15 = VAR_16;
    goto surrogate;
   }
   if ((uint32_t)VAR_16 <= 0x7F ||
       FUNC_3(VAR_16) != 0)
    break;
   goto done;
  }

 case 10:
  if (FUNC_1(VAR_16) == 0 && (uint32_t)VAR_16 <= VAR_3 &&
      FUNC_2(VAR_16) == 0 && FUNC_3(VAR_16) == 0)
   goto done;
  *VAR_9 = (size_t)-1;
  return (VAR_0);
 case 12:
  if (FUNC_3(VAR_16) == 0)
   break;
  VAR_16 = FUNC_5(VAR_15, VAR_16);
  goto done;
 }
 VAR_11 = (unsigned char)VAR_8->ch[0];
 VAR_12 = VAR_8->chlen;
 if (--VAR_12 > 0)
  FUNC_4(&VAR_8->ch[0], &VAR_8->ch[1], VAR_12);
 VAR_16 = (wchar_t)VAR_11;
done:
 VAR_8->chlen = VAR_12;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_16;
 *VAR_9 = (size_t)((VAR_16 == 0) ? 0 : (VAR_10 - *VAR_6));
 *VAR_6 = VAR_10;

 return (0);
}
