
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_4__ {int chlen; int* ch; } ;
typedef TYPE_1__ _JOHABState ;
typedef int _JOHABEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int

FUNC_4(_JOHABEncodingInfo * __restrict VAR_3,
    wchar_t * __restrict VAR_4, char ** __restrict VAR_5, size_t VAR_6,
    _JOHABState * __restrict VAR_7, size_t * __restrict VAR_8)
{
 char *VAR_9;
 int VAR_10, VAR_11;

 if (*VAR_5 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_7);
  *VAR_8 = VAR_2;
  return (0);
 }
 VAR_9 = *VAR_5;

 switch (VAR_7->chlen) {
 case 0:
  if (VAR_6-- < 1)
   goto restart;
  VAR_10 = *VAR_9++ & 0xFF;
  if (VAR_10 <= 0x7F) {
   if (VAR_4 != ((void*)0))
    *VAR_4 = (wchar_t)VAR_10;
   *VAR_8 = (VAR_10 == 0) ? 0 : 1;
   *VAR_5 = VAR_9;
   return (0);
  }
  VAR_7->ch[VAR_7->chlen++] = VAR_10;
  break;
 case 1:
  VAR_10 = VAR_7->ch[0] & 0xFF;
  break;
 default:
  return (VAR_1);
 }
 if (VAR_6-- < 1) {
restart:
  *VAR_8 = (size_t)-2;
  *VAR_5 = VAR_9;
  return (0);
 }
 VAR_11 = *VAR_9++ & 0xFF;
 if (!FUNC_1(VAR_10, VAR_11) && !FUNC_3(VAR_10, VAR_11) && !FUNC_2(VAR_10, VAR_11)) {
  *VAR_8 = (size_t)-1;
  return (VAR_0);
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = (wchar_t)(VAR_10 << 8 | VAR_11);
 *VAR_8 = VAR_9 - *VAR_5;
 *VAR_5 = VAR_9;
 VAR_7->chlen = 0;

 return (0);
}
