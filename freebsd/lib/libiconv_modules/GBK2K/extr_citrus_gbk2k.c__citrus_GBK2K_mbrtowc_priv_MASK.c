
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {int chlen; char* ch; } ;
typedef TYPE_1__ _GBK2KState ;
struct TYPE_6__ {int mb_cur_max; } ;
typedef TYPE_2__ _GBK2KEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(_GBK2KEncodingInfo * __restrict VAR_3,
    wchar_t * __restrict VAR_4, char ** __restrict VAR_5, size_t VAR_6,
    _GBK2KState * __restrict VAR_7, size_t * __restrict VAR_8)
{
 char *VAR_9, *VAR_10;
 wchar_t VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = *VAR_5;

 if (VAR_9 == ((void*)0)) {

  VAR_7->chlen = 0;
  *VAR_8 = 0;
  return (0);
 }

 VAR_12 = VAR_7->chlen;

 switch (VAR_7->chlen) {
 case 3:
  if (!FUNC_1 (VAR_2))
   goto invalid;

 case 2:
  if (!FUNC_3(VAR_2) || FUNC_4(VAR_2))
   goto invalid;

 case 1:
  if (!FUNC_1 (VAR_2))
   goto invalid;

 case 0:
  break;
 default:
  goto invalid;
 }

 for (;;) {
  if (VAR_6-- < 1)
   goto restart;

  FUNC_0(*VAR_9++);

  switch (VAR_7->chlen) {
  case 1:
   if (FUNC_2(VAR_2))
    goto convert;
   if (FUNC_1 (VAR_2))
    continue;
   goto ilseq;
  case 2:
   if (FUNC_4 (VAR_2))
    goto convert;
   if (VAR_3->mb_cur_max == 4 &&
       FUNC_3 (VAR_2))
    continue;
   goto ilseq;
  case 3:
   if (FUNC_1 (VAR_2))
    continue;
   goto ilseq;
  case 4:
   if (FUNC_3 (VAR_2))
    goto convert;
   goto ilseq;
  }
 }

convert:
 VAR_13 = VAR_7->chlen;
 VAR_10 = &VAR_7->ch[0];
 VAR_11 = 0;
 while (VAR_13-- > 0)
  VAR_11 = (VAR_11 << 8) | (*VAR_10++ & 0xff);

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_11;
 *VAR_5 = VAR_9;
 *VAR_8 = (VAR_11 == 0) ? 0 : VAR_7->chlen - VAR_12;

 VAR_7->chlen = 0;

 return (0);

restart:
 *VAR_5 = VAR_9;
 *VAR_8 = (size_t)-2;

 return (0);

invalid:
 return (VAR_1);

ilseq:
 *VAR_8 = (size_t)-1;
 return (VAR_0);
}
