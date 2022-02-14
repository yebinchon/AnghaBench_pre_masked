
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_4__ {int chlen; int* ch; } ;
typedef TYPE_1__ _EUCTWState ;
typedef int _EUCTWEncodingInfo ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(_EUCTWEncodingInfo * __restrict VAR_1,
    wchar_t * __restrict VAR_2, char ** __restrict VAR_3,
    size_t VAR_4, _EUCTWState * __restrict VAR_5, size_t * __restrict VAR_6)
{
 char *VAR_7;
 wchar_t VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = *VAR_3;

 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_1, VAR_5);
  *VAR_6 = 0;
  return (0);
 }

 VAR_10 = VAR_5->chlen;


 switch (VAR_5->chlen) {
 case 0:
  if (VAR_4 < 1)
   goto restart;
  VAR_5->ch[0] = *VAR_7++;
  VAR_5->chlen = 1;
  VAR_4--;
  break;
 case 1:
 case 2:
  break;
 default:

  goto ilseq;
 }

 VAR_9 = FUNC_0(VAR_11 = FUNC_1(VAR_5->ch[0] & 0xff));
 if (VAR_9 == 0)
  goto ilseq;
 while (VAR_5->chlen < VAR_9) {
  if (VAR_4 < 1)
   goto ilseq;
  VAR_5->ch[VAR_5->chlen] = *VAR_7++;
  VAR_5->chlen++;
  VAR_4--;
 }

 VAR_8 = 0;
 switch (VAR_11) {
 case 0:
  if (VAR_5->ch[0] & 0x80)
   goto ilseq;
  VAR_8 = VAR_5->ch[0] & 0xff;
  break;
 case 1:
  if (!(VAR_5->ch[0] & 0x80) || !(VAR_5->ch[1] & 0x80))
   goto ilseq;
  VAR_8 = ((VAR_5->ch[0] & 0xff) << 8) | (VAR_5->ch[1] & 0xff);
  VAR_8 |= 'G' << 24;
  break;
 case 2:
  if ((unsigned char)VAR_5->ch[1] < 0xa1 ||
      0xa7 < (unsigned char)VAR_5->ch[1])
   goto ilseq;
  if (!(VAR_5->ch[2] & 0x80) || !(VAR_5->ch[3] & 0x80))
   goto ilseq;
  VAR_8 = ((VAR_5->ch[2] & 0xff) << 8) | (VAR_5->ch[3] & 0xff);
  VAR_8 |= ('G' + VAR_5->ch[1] - 0xa1) << 24;
  break;
 default:
  goto ilseq;
 }

 *VAR_3 = VAR_7;
 VAR_5->chlen = 0;

 if (VAR_2)
  *VAR_2 = VAR_8;
 *VAR_6 = VAR_8 ? VAR_9 - VAR_10 : 0;
 return (0);

ilseq:
 VAR_5->chlen = 0;
 *VAR_6 = (size_t)-1;
 return (VAR_0);

restart:
 *VAR_3 = VAR_7;
 *VAR_6 = (size_t)-1;
 return (0);
}
