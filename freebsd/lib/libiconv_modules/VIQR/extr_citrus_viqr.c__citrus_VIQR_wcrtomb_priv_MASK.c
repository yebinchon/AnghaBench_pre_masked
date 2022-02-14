
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint32_t ;
struct TYPE_7__ {int child; } ;
typedef TYPE_1__ mnemonic_t ;
struct TYPE_8__ {scalar_t__ chlen; int* ch; } ;
typedef TYPE_2__ _VIQRState ;
struct TYPE_9__ {TYPE_1__* mroot; } ;
typedef TYPE_3__ _VIQREncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int*,scalar_t__) ;
 int * VAR_4 ;
 char* FUNC_1 (int,int *,int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int *,int) ;
 char** VAR_6 ;

__attribute__((used)) static int
FUNC_3(_VIQREncodingInfo * __restrict VAR_7,
    char * __restrict VAR_8, size_t VAR_9, wchar_t VAR_10,
    _VIQRState * __restrict VAR_11, size_t * __restrict VAR_12)
{
 mnemonic_t *VAR_13;
 const char *VAR_14;
 int VAR_15 = 0;

 switch (VAR_11->chlen) {
 case 0: case 1:
  break;
 default:
  return (VAR_2);
 }
 VAR_13 = ((void*)0);
 if ((uint32_t)VAR_10 <= 0xFF) {
  VAR_14 = VAR_6[VAR_10 & 0xFF];
  if (VAR_14 != ((void*)0))
   goto mnemonic_found;
  if (VAR_9-- < 1)
   goto e2big;
  VAR_15 = (unsigned int)VAR_10;
  VAR_13 = VAR_7->mroot;
  if (VAR_11->chlen > 0) {
   VAR_13 = FUNC_2(&VAR_13->child, VAR_11->ch[0]);
   if (VAR_13 == ((void*)0))
    return (VAR_2);
   VAR_11->ch[0] = VAR_3;
  }
  if (FUNC_2(&VAR_13->child, VAR_15) == ((void*)0)) {
   VAR_11->chlen = 0;
   VAR_13 = ((void*)0);
  }
  VAR_11->ch[VAR_11->chlen++] = VAR_15;
 } else {
  VAR_14 = FUNC_1(VAR_10, &VAR_4[0], VAR_5);
  if (VAR_14 == ((void*)0)) {
   *VAR_12 = (size_t)-1;
   return (VAR_1);
  } else {
mnemonic_found:
   VAR_11->chlen = 0;
   while (*VAR_14 != '\0') {
    if (VAR_9-- < 1)
     goto e2big;
    VAR_11->ch[VAR_11->chlen++] = *VAR_14++;
   }
  }
 }
 FUNC_0(VAR_8, VAR_11->ch, VAR_11->chlen);
 *VAR_12 = VAR_11->chlen;
 if (VAR_13 == VAR_7->mroot) {
  VAR_11->ch[0] = VAR_15;
  VAR_11->chlen = 1;
 } else
  VAR_11->chlen = 0;

 return (0);

e2big:
 *VAR_12 = (size_t)-1;
 return (VAR_0);
}
