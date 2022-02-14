
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t wint_t ;
typedef int wctype_t ;
typedef int locale_t ;
struct TYPE_5__ {size_t __nranges; TYPE_3__* __ranges; } ;
typedef TYPE_1__ _RuneRange ;
struct TYPE_6__ {int* __runetype; TYPE_1__ __runetype_ext; } ;
typedef TYPE_2__ _RuneLocale ;
struct TYPE_7__ {size_t __min; size_t __max; int* __types; int __map; } ;
typedef TYPE_3__ _RuneEntry ;
struct TYPE_8__ {TYPE_2__* runes; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 size_t VAR_0 ;

wint_t
FUNC_2(wint_t VAR_1, wctype_t VAR_2, locale_t VAR_3)
{
 size_t VAR_4;
 FUNC_0(VAR_3);
 _RuneLocale *VAR_5 = FUNC_1(VAR_3)->runes;
 _RuneRange *VAR_6 = &VAR_5->__runetype_ext;
 _RuneEntry *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 if (VAR_1 < VAR_0) {
  VAR_1++;
  while (VAR_1 < VAR_0) {
   if (VAR_5->__runetype[VAR_1] & VAR_2)
    return (VAR_1);
   VAR_1++;
  }
  VAR_1--;
 }
 if (VAR_6->__ranges != ((void*)0) && VAR_1 < VAR_6->__ranges[0].__min) {
  VAR_1 = VAR_6->__ranges[0].__min;
  VAR_9 = 1;
 }


 VAR_7 = VAR_6->__ranges;
 for (VAR_4 = VAR_6->__nranges; VAR_4 != 0; VAR_4 >>= 1) {
  VAR_8 = VAR_7 + (VAR_4 >> 1);
  if (VAR_8->__min <= VAR_1 && VAR_1 <= VAR_8->__max)
   goto found;
  else if (VAR_1 > VAR_8->__max) {
   VAR_7 = VAR_8 + 1;
   VAR_4--;
  }
 }
 return (-1);
found:
 if (!VAR_9)
  VAR_1++;
 if (VAR_8->__min <= VAR_1 && VAR_1 <= VAR_8->__max) {
  if (VAR_8->__types != ((void*)0)) {
   for (; VAR_1 <= VAR_8->__max; VAR_1++)
    if (VAR_8->__types[VAR_1 - VAR_8->__min] & VAR_2)
     return (VAR_1);
  } else if (VAR_8->__map & VAR_2)
   return (VAR_1);
 }
 while (++VAR_8 < VAR_6->__ranges + VAR_6->__nranges) {
  VAR_1 = VAR_8->__min;
  if (VAR_8->__types != ((void*)0)) {
   for (; VAR_1 <= VAR_8->__max; VAR_1++)
    if (VAR_8->__types[VAR_1 - VAR_8->__min] & VAR_2)
     return (VAR_1);
  } else if (VAR_8->__map & VAR_2)
   return (VAR_1);
 }
 return (-1);
}
