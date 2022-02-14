
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_9__ {int start; int end; } ;
typedef TYPE_1__ range_t ;
struct TYPE_10__ {scalar_t__ charset; int length; } ;
typedef TYPE_2__ graphic_t ;
typedef int escape_t ;
struct TYPE_11__ {int chlen; int* ch; int * inuse; } ;
typedef TYPE_3__ _HZState ;
typedef int _HZEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int * FUNC_8 (int ,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_9(_HZEncodingInfo * __restrict VAR_6,
    wchar_t * __restrict VAR_7, char ** __restrict VAR_8, size_t VAR_9,
    _HZState * __restrict VAR_10, size_t * __restrict VAR_11)
{
 escape_t *VAR_12, *VAR_13;
 graphic_t *VAR_14;
 const range_t *VAR_15;
 char *VAR_16;
 wchar_t VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 if (*VAR_8 == ((void*)0)) {
  FUNC_7(VAR_6, VAR_10);
  *VAR_11 = 1;
  return (0);
 }
 VAR_16 = *VAR_8;
 if (VAR_10->chlen < 0 || VAR_10->inuse == ((void*)0))
  return (VAR_1);

 VAR_17 = (wchar_t)0;
 VAR_18 = VAR_20 = VAR_22 = 0;
 VAR_14 = ((void*)0);
 for (VAR_21 = 0; VAR_21 <= VAR_4;) {
  if (VAR_10->chlen == VAR_22) {
   if (VAR_9-- < 1) {
    *VAR_8 = VAR_16;
    *VAR_11 = (size_t)-2;
    return (0);
   }
   VAR_10->ch[VAR_10->chlen++] = *VAR_16++;
   ++VAR_21;
  }
  VAR_19 = (unsigned char)VAR_10->ch[VAR_22++];
  if (VAR_22 == 1) {
   if ((VAR_19 & ~0x80) <= 0x1F) {
    if (VAR_10->inuse != FUNC_4(VAR_6))
     break;
    VAR_17 = (wchar_t)VAR_19;
    goto done;
   }
   if (VAR_19 & 0x80) {
    VAR_14 = FUNC_2(VAR_10->inuse);
    VAR_18 = 0x80;
    VAR_19 &= ~0x80;
   } else {
    VAR_14 = FUNC_1(VAR_10->inuse);
    if (VAR_19 == VAR_2)
     continue;
    VAR_18 = 0x0;
   }
   if (VAR_14 == ((void*)0))
    break;
  } else if (VAR_22 == 2 && VAR_10->ch[0] == VAR_2) {
   if (VAR_22 < VAR_10->chlen)
    return (VAR_1);
   if (VAR_19 == VAR_2) {
    ++VAR_20;
   } else if (VAR_19 == '\n') {
    if (VAR_10->inuse != FUNC_4(VAR_6))
     break;
    VAR_22 = VAR_10->chlen = 0;
    continue;
   } else {
    VAR_12 = ((void*)0);
    VAR_13 = FUNC_4(VAR_6);
    if (VAR_10->inuse == VAR_13) {
     VAR_13 = FUNC_5(VAR_6);
    } else if (FUNC_3(VAR_10->inuse) == VAR_13) {
     if (FUNC_0(VAR_13) != VAR_19)
      break;
     VAR_12 = VAR_13;
    }
    if (VAR_12 == ((void*)0)) {
     VAR_12 = FUNC_8(
         FUNC_6(VAR_10->inuse), VAR_19);
     if (VAR_12 == ((void*)0)) {
      if (VAR_13 == ((void*)0) ||
          FUNC_0(VAR_13) != VAR_19)
       break;
      VAR_12 = VAR_13;
     }
    }
    VAR_10->inuse = VAR_12;
    VAR_22 = VAR_10->chlen = 0;
    continue;
   }
  } else if (VAR_19 & 0x80) {
   if (VAR_14 != FUNC_2(VAR_10->inuse))
    break;
   VAR_19 &= ~0x80;
  } else {
   if (VAR_14 != FUNC_1(VAR_10->inuse))
    break;
  }
  VAR_15 = &VAR_5[(size_t)VAR_14->charset];
  if (VAR_15->start > VAR_19 || VAR_15->end < VAR_19)
   break;
  VAR_17 <<= 8;
  VAR_17 |= VAR_19;
  if (VAR_14->length == (VAR_22 - VAR_20)) {
   if (VAR_14->charset > VAR_3)
    VAR_18 |= FUNC_0(VAR_10->inuse) << 24;
   VAR_17 |= VAR_18;
   goto done;
  }
 }
 *VAR_11 = (size_t)-1;
 return (VAR_0);
done:
 if (VAR_22 < VAR_10->chlen)
  return (VAR_1);
 *VAR_8 = VAR_16;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_17;
 VAR_10->chlen = 0;
 *VAR_11 = (VAR_17 == 0) ? 0 : VAR_21;

 return (0);
}
