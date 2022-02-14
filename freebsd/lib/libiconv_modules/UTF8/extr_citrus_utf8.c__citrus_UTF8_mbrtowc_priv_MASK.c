
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint8_t ;
struct TYPE_4__ {int chlen; int* ch; } ;
typedef TYPE_1__ _UTF8State ;
typedef int _UTF8EncodingInfo ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(_UTF8EncodingInfo *VAR_2, wchar_t *VAR_3, char **VAR_4,
    size_t VAR_5, _UTF8State *VAR_6, size_t *VAR_7)
{
 char *VAR_8;
 wchar_t VAR_9;
 int VAR_10;
 uint8_t VAR_11;

 VAR_8 = *VAR_4;

 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_2, VAR_6);
  *VAR_7 = 0;
  return (0);
 }


 if (VAR_6->chlen == 0) {
  if (VAR_5-- < 1)
   goto restart;
  VAR_6->ch[VAR_6->chlen++] = *VAR_8++;
 }

 VAR_11 = VAR_1[VAR_6->ch[0] & 0xff];
 if (VAR_11 < 1 || VAR_11 < VAR_6->chlen)
  goto ilseq;

 if (VAR_11 == 1)
  VAR_9 = VAR_6->ch[0] & 0xff;
 else {
  while (VAR_6->chlen < VAR_11) {
   if (VAR_5-- < 1)
    goto restart;
   VAR_6->ch[VAR_6->chlen++] = *VAR_8++;
  }
  VAR_9 = VAR_6->ch[0] & (0x7f >> VAR_11);
  for (VAR_10 = 1; VAR_10 < VAR_11; VAR_10++) {
   if ((VAR_6->ch[VAR_10] & 0xc0) != 0x80)
    goto ilseq;
   VAR_9 <<= 6;
   VAR_9 |= (VAR_6->ch[VAR_10] & 0x3f);
  }
  if (FUNC_1(VAR_9) || FUNC_0(VAR_9) != VAR_11)
   goto ilseq;
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_9;
 *VAR_7 = (VAR_9 == 0) ? 0 : VAR_8 - *VAR_4;
 *VAR_4 = VAR_8;
 VAR_6->chlen = 0;

 return (0);

ilseq:
 *VAR_7 = (size_t)-1;
 return (VAR_0);

restart:
 *VAR_4 = VAR_8;
 *VAR_7 = (size_t)-2;
 return (0);
}
