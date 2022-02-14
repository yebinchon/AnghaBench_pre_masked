
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int chlen; int* ch; } ;
typedef TYPE_1__ _DECHanyuState ;
typedef int _DECHanyuEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int

FUNC_6(_DECHanyuEncodingInfo * __restrict VAR_4,
    wchar_t * __restrict VAR_5, char ** __restrict VAR_6, size_t VAR_7,
    _DECHanyuState * __restrict VAR_8, size_t * __restrict VAR_9)
{
 char *VAR_10;
 wchar_t VAR_11;
 int VAR_12;

 if (*VAR_6 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_8);
  *VAR_9 = VAR_3;
  return (0);
 }
 VAR_10 = *VAR_6;

 VAR_11 = (wchar_t)0;
 switch (VAR_8->chlen) {
 case 0:
  if (VAR_7-- < 1)
   goto restart;
  VAR_12 = *VAR_10++ & 0xFF;
  if (FUNC_4(VAR_12)) {
   if (VAR_5 != ((void*)0))
    *VAR_5 = (wchar_t)VAR_12;
   *VAR_9 = (size_t)((VAR_12 == 0) ? 0 : 1);
   *VAR_6 = VAR_10;
   return (0);
  }
  if (!FUNC_3(VAR_12))
   goto ilseq;
  VAR_8->ch[VAR_8->chlen++] = VAR_12;
  break;
 case 1:
  VAR_12 = VAR_8->ch[0] & 0xFF;
  if (!FUNC_3(VAR_12))
   return (VAR_1);
  break;
 case 2: case 3:
  VAR_12 = VAR_8->ch[0] & 0xFF;
  if (FUNC_1(VAR_12)) {
   VAR_12 = VAR_8->ch[1] & 0xFF;
   if (FUNC_2(VAR_12)) {
    VAR_11 |= (wchar_t)VAR_2;
    break;
   }
  }

 default:
  return (VAR_1);
 }

 switch (VAR_8->chlen) {
 case 1:
  if (FUNC_1(VAR_12)) {
   if (VAR_7-- < 1)
    goto restart;
   VAR_12 = *VAR_10++ & 0xFF;
   if (!FUNC_2(VAR_12))
    goto ilseq;
   VAR_8->ch[VAR_8->chlen++] = VAR_12;
   VAR_11 |= (wchar_t)VAR_2;
   if (VAR_7-- < 1)
    goto restart;
   VAR_12 = *VAR_10++ & 0xFF;
   if (!FUNC_3(VAR_12))
    goto ilseq;
   VAR_8->ch[VAR_8->chlen++] = VAR_12;
  }
  break;
 case 2:
  if (VAR_7-- < 1)
   goto restart;
  VAR_12 = *VAR_10++ & 0xFF;
  if (!FUNC_3(VAR_12))
   goto ilseq;
  VAR_8->ch[VAR_8->chlen++] = VAR_12;
  break;
 case 3:
  VAR_12 = VAR_8->ch[2] & 0xFF;
  if (!FUNC_3(VAR_12))
   return (VAR_1);
 }
 if (VAR_7-- < 1)
  goto restart;
 VAR_11 |= (wchar_t)(VAR_12 << 8);
 VAR_12 = *VAR_10++ & 0xFF;
 if (!FUNC_5(VAR_12))
  goto ilseq;
 VAR_11 |= (wchar_t)VAR_12;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_11;
 *VAR_9 = (size_t)(VAR_10 - *VAR_6);
 *VAR_6 = VAR_10;
 VAR_8->chlen = 0;

 return (0);

restart:
 *VAR_9 = (size_t)-2;
 *VAR_6 = VAR_10;
 return (0);

ilseq:
 *VAR_9 = (size_t)-1;
 return (VAR_0);
}
