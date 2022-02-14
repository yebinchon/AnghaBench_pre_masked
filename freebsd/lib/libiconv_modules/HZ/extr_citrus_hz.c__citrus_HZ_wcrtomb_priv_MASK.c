
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint32_t ;
struct TYPE_18__ {int start; int end; } ;
typedef TYPE_1__ range_t ;
struct TYPE_19__ {size_t length; scalar_t__ charset; TYPE_3__* escape; } ;
typedef TYPE_2__ graphic_t ;
struct TYPE_20__ {TYPE_2__* right; TYPE_2__* left; } ;
typedef TYPE_3__ escape_t ;
struct TYPE_21__ {scalar_t__ chlen; int* ch; TYPE_3__* inuse; } ;
typedef TYPE_4__ _HZState ;
struct TYPE_22__ {TYPE_2__* gb2312; TYPE_2__* ascii; } ;
typedef TYPE_5__ _HZEncodingInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (TYPE_3__*) ;
 void* VAR_4 ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,int) ;
 int FUNC_7 (char*,int*,scalar_t__) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_8(_HZEncodingInfo * __restrict VAR_6,
    char * __restrict VAR_7, size_t VAR_8, wchar_t VAR_9,
    _HZState * __restrict VAR_10, size_t * __restrict VAR_11)
{
 escape_t *VAR_12, *VAR_13;
 graphic_t *VAR_14;
 const range_t *VAR_15;
 size_t VAR_16;
 int VAR_17, VAR_18;

 if (VAR_10->chlen != 0 || VAR_10->inuse == ((void*)0))
  return (VAR_3);
 if (VAR_9 & 0x80) {
  VAR_17 = 0x80;
  VAR_9 &= ~0x80;
 } else {
  VAR_17 = 0x0;
 }
 if ((uint32_t)VAR_9 <= 0x1F) {
  VAR_12 = FUNC_4(VAR_6);
  VAR_14 = (VAR_17 == 0) ? VAR_12->left : VAR_12->right;
  if (VAR_14 == ((void*)0))
   goto ilseq;
  VAR_15 = &VAR_5[(size_t)VAR_0];
  VAR_16 = 1;
 } else if ((uint32_t)VAR_9 <= 0x7F) {
  VAR_14 = VAR_6->ascii;
  if (VAR_14 == ((void*)0))
   goto ilseq;
  VAR_12 = VAR_14->escape;
  VAR_15 = &VAR_5[(size_t)VAR_14->charset];
  VAR_16 = VAR_14->length;
 } else if ((uint32_t)VAR_9 <= 0x7F7F) {
  VAR_14 = VAR_6->gb2312;
  if (VAR_14 == ((void*)0))
   goto ilseq;
  VAR_12 = VAR_14->escape;
  VAR_15 = &VAR_5[(size_t)VAR_14->charset];
  VAR_16 = VAR_14->length;
 } else {
  VAR_18 = (VAR_9 >> 24) & 0xFF;
  VAR_12 = FUNC_6(FUNC_0(VAR_6), VAR_18);
  if (VAR_12 == ((void*)0)) {
   VAR_12 = FUNC_6(FUNC_1(VAR_6), VAR_18);
   if (VAR_12 == ((void*)0))
    goto ilseq;
  }
  VAR_9 &= ~0xFF000000;
  VAR_14 = (VAR_17 == 0) ? VAR_12->left : VAR_12->right;
  if (VAR_14 == ((void*)0))
   goto ilseq;
  VAR_15 = &VAR_5[(size_t)VAR_14->charset];
  VAR_16 = VAR_14->length;
 }
 if (VAR_10->inuse != VAR_12) {
  VAR_13 = FUNC_4(VAR_6);
  if (FUNC_5(VAR_10->inuse) == FUNC_5(VAR_12)) {
   if (FUNC_3(VAR_10->inuse) != VAR_13 ||
       VAR_10->inuse == VAR_13 || VAR_12 == VAR_13)
    VAR_13 = ((void*)0);
  } else if (VAR_12 == (VAR_13 = FUNC_3(VAR_12))) {
   VAR_13 = ((void*)0);
  }
  if (VAR_13 != ((void*)0)) {
   if (VAR_8 < 2)
    return (VAR_1);
   VAR_8 -= 2;
   VAR_10->ch[VAR_10->chlen++] = VAR_4;
   VAR_10->ch[VAR_10->chlen++] = FUNC_2(VAR_13);
  }
  if (VAR_8 < 2)
   return (VAR_1);
  VAR_8 -= 2;
  VAR_10->ch[VAR_10->chlen++] = VAR_4;
  VAR_10->ch[VAR_10->chlen++] = FUNC_2(VAR_12);
  VAR_10->inuse = VAR_12;
 }
 if (VAR_8 < VAR_16)
  return (VAR_1);
 while (VAR_16-- > 0) {
  VAR_18 = (VAR_9 >> (VAR_16 * 8)) & 0xFF;
  if (VAR_15->start > VAR_18 || VAR_15->end < VAR_18)
   goto ilseq;
  VAR_10->ch[VAR_10->chlen++] = VAR_18 | VAR_17;
 }
 FUNC_7(VAR_7, VAR_10->ch, VAR_10->chlen);
 *VAR_11 = VAR_10->chlen;
 VAR_10->chlen = 0;

 return (0);

ilseq:
 *VAR_11 = (size_t)-1;
 return (VAR_2);
}
