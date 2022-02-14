
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* wchar_t ;
struct xlocale_collate {TYPE_1__* info; } ;
typedef int int32_t ;
struct TYPE_2__ {int directive_count; int* directive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct xlocale_collate*,void* const*,int*,int*,int,int const**) ;
 int FUNC_1 (void* const*) ;
 int VAR_7 ;
 int FUNC_2 (void**) ;
 void** FUNC_3 (void* const*) ;
 int FUNC_4 (void**) ;

size_t
FUNC_5(struct xlocale_collate *VAR_8, const wchar_t *VAR_9, wchar_t *VAR_10,
    size_t VAR_11)
{
 int VAR_12;
 int VAR_13;
 const wchar_t *VAR_14;
 wchar_t *VAR_15 = ((void*)0);
 int VAR_16;
 int VAR_17;
 const int32_t *VAR_18;
 size_t VAR_19 = 0;
 size_t VAR_20 = 0;
 int VAR_21 = VAR_8->info->directive_count;

 FUNC_1(VAR_9);

 for (VAR_17 = 0; VAR_17 <= VAR_21; VAR_17++) {

  VAR_18 = ((void*)0);

  if (VAR_17 != 0) {

   if (VAR_11) {
    *VAR_10++ = 1;
    VAR_11--;
   }
   VAR_19++;
  }


  if (VAR_17 == VAR_21) {
   VAR_16 = VAR_2 | VAR_4;
  } else {
   VAR_16 = VAR_8->info->directive[VAR_17];
  }

  VAR_14 = VAR_9;

  if (VAR_16 & VAR_1) {
   wchar_t *VAR_22, *VAR_23, VAR_24;
   FUNC_2(VAR_15);
   if ((VAR_15 = FUNC_3(VAR_14)) == ((void*)0)) {
    VAR_7 = VAR_6;
    goto fail;
   }
   VAR_22 = VAR_15;
   VAR_23 = VAR_15 + FUNC_4(VAR_15) - 1;
   while (VAR_22 < VAR_23) {
    VAR_24 = *VAR_22;
    *VAR_22++ = *VAR_23;
    *VAR_23-- = VAR_24;
   }
   VAR_14 = (const wchar_t *)VAR_15;
  }

  if (VAR_16 & VAR_3) {
   while (*VAR_14 || VAR_18) {
    FUNC_0(VAR_8, VAR_14, &VAR_13, &VAR_12, VAR_17, &VAR_18);
    VAR_14 += VAR_13;
    if (VAR_12 <= 0) {
     if (VAR_12 < 0) {
      VAR_7 = VAR_5;
      goto fail;
     }
     VAR_18 = ((void*)0);
     VAR_12 = VAR_0;
    }
    if (VAR_11) {
     *VAR_10++ = VAR_12;
     VAR_11--;
    }
    VAR_19++;
    VAR_20 = VAR_19;
   }
  } else {
   while (*VAR_14 || VAR_18) {
    FUNC_0(VAR_8, VAR_14, &VAR_13, &VAR_12, VAR_17, &VAR_18);
    VAR_14 += VAR_13;
    if (VAR_12 <= 0) {
     if (VAR_12 < 0) {
      VAR_7 = VAR_5;
      goto fail;
     }
     VAR_18 = ((void*)0);
     continue;
    }
    if (VAR_11) {
     *VAR_10++ = VAR_12;
     VAR_11--;
    }
    VAR_19++;
    VAR_20 = VAR_19;
   }
  }
 }
 FUNC_2(VAR_15);
 return (VAR_20);

fail:
 FUNC_2(VAR_15);
 return ((size_t)(-1));
}
