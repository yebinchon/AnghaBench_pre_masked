
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
typedef int wchar_t ;
struct TYPE_4__ {int chlen; int* ch; } ;
typedef TYPE_1__ _BIG5State ;
typedef int _BIG5EncodingInfo ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int

FUNC_4(_BIG5EncodingInfo * __restrict VAR_1,
    wchar_t * __restrict VAR_2,
    char ** __restrict VAR_3, size_t VAR_4,
    _BIG5State * __restrict VAR_5,
    size_t * __restrict VAR_6)
{
 wchar_t VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = *VAR_3;

 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_1, VAR_5);
  *VAR_6 = 0;
  return (0);
 }

 VAR_10 = VAR_5->chlen;


 switch (VAR_5->chlen) {
 case 0:
  if (VAR_4 < 1)
   goto restart;
  VAR_5->ch[0] = *VAR_8++;
  VAR_5->chlen = 1;
  VAR_4--;
  break;
 case 1:
  break;
 default:

  goto ilseq;
 }

 VAR_9 = FUNC_0(VAR_1, VAR_5->ch[0] & 0xff);
 if (VAR_9 == 0)
  goto ilseq;
 while (VAR_5->chlen < VAR_9) {
  if (VAR_4 < 1) {
   goto restart;
  }
  VAR_5->ch[VAR_5->chlen] = *VAR_8++;
  VAR_5->chlen++;
  VAR_4--;
 }

 switch (VAR_9) {
 case 1:
  VAR_7 = VAR_5->ch[0] & 0xff;
  break;
 case 2:
  if (!FUNC_1(VAR_1, VAR_5->ch[1] & 0xff))
   goto ilseq;
  VAR_7 = ((VAR_5->ch[0] & 0xff) << 8) | (VAR_5->ch[1] & 0xff);
  break;
 default:

  goto ilseq;
 }

 if (FUNC_2(VAR_1, (wint_t)VAR_7) != 0)
  goto ilseq;

 *VAR_3 = VAR_8;
 VAR_5->chlen = 0;
 if (VAR_2)
  *VAR_2 = VAR_7;
 *VAR_6 = VAR_7 ? VAR_9 - VAR_10 : 0;

 return (0);

ilseq:
 VAR_5->chlen = 0;
 *VAR_6 = (size_t)-1;
 return (VAR_0);

restart:
 *VAR_3 = VAR_8;
 *VAR_6 = (size_t)-2;
 return (0);
}
