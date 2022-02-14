
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_5__ {int chlen; char* ch; } ;
typedef TYPE_1__ _ISO2022State ;
typedef int _ISO2022EncodingInfo ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,size_t,char**,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(_ISO2022EncodingInfo * __restrict VAR_3,
    wchar_t * __restrict VAR_4, char ** __restrict VAR_5,
    size_t VAR_6, _ISO2022State * __restrict VAR_7, size_t * __restrict VAR_8)
{
 char *VAR_9, *VAR_10, *VAR_11;
 wchar_t VAR_12;
 int VAR_13, VAR_14;

 if (*VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3, VAR_7);
  *VAR_8 = VAR_1;
  return (0);
 }
 VAR_11 = *VAR_5;
 VAR_13 = 0;
 VAR_14 = VAR_7->chlen;





 if (VAR_7->chlen > sizeof(VAR_7->ch)) {

  FUNC_1(VAR_3, VAR_7);
  goto encoding_error;
 }
 if (VAR_7->chlen == 0)
  goto emptybuf;


 VAR_9 = VAR_7->ch;
 while (VAR_7->chlen < sizeof(VAR_7->ch)) {
  if (VAR_6 > 0) {
   VAR_7->ch[VAR_7->chlen++] = *VAR_11++;
   VAR_6--;
  }

  VAR_12 = FUNC_0(VAR_3, VAR_9, VAR_7->chlen - (VAR_9-VAR_7->ch),
      &VAR_10, VAR_7);
  VAR_13 += VAR_10 - VAR_9;
  if (VAR_12 != VAR_2) {
   if (VAR_7->chlen > (size_t)VAR_13)
    FUNC_3(VAR_7->ch, VAR_10, VAR_7->chlen - VAR_13);
   if (VAR_7->chlen < (size_t)VAR_13)
    VAR_7->chlen = 0;
   else
    VAR_7->chlen -= VAR_13;
   goto output;
  }

  if (VAR_6 == 0) {
   if ((size_t)(VAR_10 - VAR_9) == VAR_7->chlen)

    VAR_7->chlen = 0;
   goto restart;
  }

  VAR_9 = VAR_10;
 }


 goto encoding_error;

emptybuf:
 VAR_12 = FUNC_0(VAR_3, VAR_11, VAR_6, &VAR_10, VAR_7);
 if (VAR_12 != VAR_2) {
  VAR_13 += VAR_10 - VAR_11;
  VAR_7->chlen = 0;
  VAR_11 = VAR_10;
  goto output;
 }
 if (VAR_10 > VAR_11) {
  VAR_13 += (VAR_10 - VAR_11);
  VAR_6 -= (VAR_10 - VAR_11);
  VAR_11 = VAR_10;
  if (VAR_6 > 0)
   goto emptybuf;

  goto restart;
 }
 VAR_6 += VAR_13;
 if (VAR_6 < sizeof(VAR_7->ch)) {
  FUNC_2(VAR_7->ch, VAR_11 - VAR_13, VAR_6);
  VAR_7->chlen = VAR_6;
  VAR_11 = VAR_10;
  goto restart;
 }



encoding_error:
 VAR_7->chlen = 0;
 *VAR_8 = (size_t)-1;
 return (VAR_0);

output:
 *VAR_5 = VAR_11;
 if (VAR_4)
  *VAR_4 = VAR_12;
 *VAR_8 = VAR_12 ? VAR_13 - VAR_14 : 0;
 return (0);

restart:
 *VAR_5 = VAR_11;
 *VAR_8 = (size_t)-2;

 return (0);
}
