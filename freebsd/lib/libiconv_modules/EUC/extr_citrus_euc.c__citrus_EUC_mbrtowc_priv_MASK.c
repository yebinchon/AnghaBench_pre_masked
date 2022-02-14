
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int chlen; int* ch; } ;
typedef TYPE_1__ _EUCState ;
struct TYPE_8__ {int* count; int mask; int* bits; } ;
typedef TYPE_2__ _EUCEncodingInfo ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(_EUCEncodingInfo *VAR_1, wchar_t *VAR_2, char **VAR_3,
    size_t VAR_4, _EUCState *VAR_5, size_t *VAR_6)
{
 wchar_t VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 char *VAR_12, *VAR_13 = ((void*)0);

 VAR_12 = *VAR_3;

 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_1, VAR_5);
  *VAR_6 = 0;
  return (0);
 }

 VAR_9 = VAR_5->chlen;


 switch (VAR_5->chlen) {
 case 0:
  if (VAR_4 < 1)
   goto restart;
  VAR_5->ch[0] = *VAR_12++;
  VAR_5->chlen = 1;
  VAR_4--;
  break;
 case 1:
 case 2:
  break;
 default:

  goto encoding_error;
 }

 VAR_8 = VAR_1->count[VAR_10 = FUNC_0(VAR_5->ch[0] & 0xff)];
 if (VAR_8 == 0)
  goto encoding_error;
 while (VAR_5->chlen < VAR_8) {
  if (VAR_4 < 1)
   goto restart;
  VAR_5->ch[VAR_5->chlen] = *VAR_12++;
  VAR_5->chlen++;
  VAR_4--;
 }
 *VAR_3 = VAR_12;

 switch (VAR_10) {
 case 3:
 case 2:

  VAR_11 = VAR_8 - 1;
  VAR_13 = &VAR_5->ch[1];
  break;
 case 1:
 case 0:
  VAR_11 = VAR_8;
  VAR_13 = &VAR_5->ch[0];
  break;
 default:
  goto encoding_error;
 }
 VAR_7 = 0;
 while (VAR_11-- > 0)
  VAR_7 = (VAR_7 << 8) | (*VAR_13++ & 0xff);
 VAR_7 = (VAR_7 & ~VAR_1->mask) | VAR_1->bits[VAR_10];

 VAR_5->chlen = 0;
 if (VAR_2)
  *VAR_2 = VAR_7;
 *VAR_6 = VAR_7 ? (size_t)(VAR_8 - VAR_9) : 0;
 return (0);

encoding_error:
 VAR_5->chlen = 0;
 *VAR_6 = (size_t)-1;
 return (VAR_0);

restart:
 *VAR_6 = (size_t)-2;
 *VAR_3 = VAR_12;
 return (0);
}
