
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int chlen; int* ch; } ;
typedef TYPE_1__ _MSKanjiState ;
typedef int _MSKanjiEncodingInfo ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int

FUNC_3(_MSKanjiEncodingInfo * __restrict VAR_1,
    wchar_t * __restrict VAR_2, char ** __restrict VAR_3, size_t VAR_4,
    _MSKanjiState * __restrict VAR_5, size_t * __restrict VAR_6)
{
 char *VAR_7;
 wchar_t VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = *VAR_3;

 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_1, VAR_5);
  *VAR_6 = 0;
  return (0);
 }

 VAR_9 = VAR_5->chlen;


 switch (VAR_5->chlen) {
 case 0:
  if (VAR_4 < 1)
   goto restart;
  VAR_5->ch[0] = *VAR_7++;
  VAR_5->chlen = 1;
  VAR_4--;
  break;
 case 1:
  break;
 default:

  goto encoding_error;
 }

 VAR_10 = FUNC_1(VAR_5->ch[0] & 0xff) ? 2 : 1;
 while (VAR_5->chlen < VAR_10) {
  if (VAR_4 < 1)
   goto restart;
  VAR_5->ch[VAR_5->chlen] = *VAR_7++;
  VAR_5->chlen++;
  VAR_4--;
 }

 *VAR_3 = VAR_7;

 switch (VAR_10) {
 case 1:
  VAR_8 = VAR_5->ch[0] & 0xff;
  break;
 case 2:
  if (!FUNC_2(VAR_5->ch[1] & 0xff))
   goto encoding_error;
  VAR_8 = ((VAR_5->ch[0] & 0xff) << 8) | (VAR_5->ch[1] & 0xff);
  break;
 default:

  goto encoding_error;
 }

 VAR_5->chlen = 0;

 if (VAR_2)
  *VAR_2 = VAR_8;
 *VAR_6 = VAR_8 ? VAR_10 - VAR_9 : 0;
 return (0);

encoding_error:
 VAR_5->chlen = 0;
 *VAR_6 = (size_t)-1;
 return (VAR_0);

restart:
 *VAR_6 = (size_t)-2;
 *VAR_3 = VAR_7;
 return (0);
}
