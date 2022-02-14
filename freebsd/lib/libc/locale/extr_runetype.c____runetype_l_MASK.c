
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int locale_t ;
typedef scalar_t__ __ct_rune_t ;
struct TYPE_6__ {size_t __nranges; TYPE_3__* __ranges; } ;
typedef TYPE_2__ _RuneRange ;
struct TYPE_7__ {scalar_t__ __min; scalar_t__ __max; unsigned long* __types; unsigned long __map; } ;
typedef TYPE_3__ _RuneEntry ;
struct TYPE_8__ {TYPE_1__* runes; } ;
struct TYPE_5__ {TYPE_2__ __runetype_ext; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;

unsigned long
FUNC_2(__ct_rune_t VAR_1, locale_t VAR_2)
{
 size_t VAR_3;
 FUNC_0(VAR_2);
 _RuneRange *VAR_4 = &(FUNC_1(VAR_2)->runes->__runetype_ext);
 _RuneEntry *VAR_5, *VAR_6;

 if (VAR_1 < 0 || VAR_1 == VAR_0)
  return(0L);


 VAR_5 = VAR_4->__ranges;
 for (VAR_3 = VAR_4->__nranges; VAR_3 != 0; VAR_3 >>= 1) {
  VAR_6 = VAR_5 + (VAR_3 >> 1);
  if (VAR_6->__min <= VAR_1 && VAR_1 <= VAR_6->__max) {
   if (VAR_6->__types)
       return(VAR_6->__types[VAR_1 - VAR_6->__min]);
   else
       return(VAR_6->__map);
  } else if (VAR_1 > VAR_6->__max) {
   VAR_5 = VAR_6 + 1;
   VAR_3--;
  }
 }

 return(0L);
}
