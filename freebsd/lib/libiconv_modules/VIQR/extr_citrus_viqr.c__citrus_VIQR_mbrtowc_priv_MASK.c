
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef size_t ssize_t ;
struct TYPE_9__ {scalar_t__ value; struct TYPE_9__* parent; int child; } ;
typedef TYPE_1__ mnemonic_t ;
struct TYPE_10__ {size_t chlen; scalar_t__* ch; } ;
typedef TYPE_2__ _VIQRState ;
struct TYPE_11__ {scalar_t__ invalid; TYPE_1__* mroot; } ;
typedef TYPE_3__ _VIQREncodingInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 TYPE_1__* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(_VIQREncodingInfo * __restrict VAR_2,
    wchar_t * __restrict VAR_3, char ** __restrict VAR_4, size_t VAR_5,
    _VIQRState * __restrict VAR_6, size_t * __restrict VAR_7)
{
 mnemonic_t *VAR_8, *VAR_9;
 char *VAR_10;
 wchar_t VAR_11;
 ssize_t VAR_12;
 int VAR_13, VAR_14;

 if (*VAR_4 == ((void*)0)) {
  FUNC_0(VAR_2, VAR_6);
  *VAR_7 = (size_t)VAR_1;
  return (0);
 }
 VAR_10 = *VAR_4;

 VAR_12 = 0;
 VAR_8 = VAR_2->mroot;
 for (VAR_14 = 0;;) {
  if (VAR_6->chlen == VAR_12) {
   if (VAR_5-- < 1) {
    *VAR_4 = VAR_10;
    *VAR_7 = (size_t)-2;
    return (0);
   }
   VAR_6->ch[VAR_6->chlen++] = *VAR_10++;
  }
  VAR_13 = (unsigned char)VAR_6->ch[VAR_12++];
  if (VAR_13 == VAR_0) {
   if (VAR_8 != VAR_2->mroot)
    break;
   VAR_14 = 1;
   continue;
  }
  if (VAR_14 != 0)
   break;
  VAR_9 = FUNC_2(&VAR_8->child, VAR_13);
  if (VAR_9 == ((void*)0))
   break;
  VAR_8 = VAR_9;
 }
 while (VAR_8 != VAR_2->mroot) {
  --VAR_12;
  if (VAR_8->value != VAR_2->invalid)
   break;
  VAR_8 = VAR_8->parent;
 }
 if (VAR_13 == VAR_0 && VAR_8 != VAR_2->mroot)
  ++VAR_12;
 VAR_6->chlen -= VAR_12;
 FUNC_1(&VAR_6->ch[0], &VAR_6->ch[VAR_12], VAR_6->chlen);
 VAR_11 = (VAR_8 == VAR_2->mroot) ? (wchar_t)VAR_13 : VAR_8->value;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_11;
 *VAR_7 = (size_t)(VAR_11 == 0 ? 0 : VAR_10 - *VAR_4);
 *VAR_4 = VAR_10;

 return (0);
}
