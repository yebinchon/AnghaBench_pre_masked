
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* wchar_t ;
typedef void* uint8_t ;
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct xlocale_collate*,void* const*,int*,int*,int,int const**) ;
 int FUNC_1 (void* const*) ;
 int VAR_9 ;
 int FUNC_2 (void**) ;
 void** FUNC_3 (void* const*) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (struct xlocale_collate*,void**,int,int) ;

size_t
FUNC_6(struct xlocale_collate *VAR_10, const wchar_t *VAR_11, char *VAR_12,
    size_t VAR_13)
{
 int VAR_14;
 int VAR_15;
 const wchar_t *VAR_16;
 wchar_t *VAR_17 = ((void*)0);
 int VAR_18;
 int VAR_19;
 const int32_t *VAR_20;
 size_t VAR_21 = 0;
 size_t VAR_22 = 0;
 int VAR_23;
 uint8_t VAR_24[VAR_7];
 int VAR_25 = VAR_10->info->directive_count;

 FUNC_1(VAR_11);

 for (VAR_19 = 0; VAR_19 <= VAR_25; VAR_19++) {

  VAR_20 = ((void*)0);

  if (VAR_19 != 0) {

   if (VAR_13) {
    *VAR_12++ = VAR_8;
    VAR_13--;
   }
   VAR_21++;
  }


  if (VAR_19 == VAR_25) {
   VAR_18 = VAR_2 | VAR_4;
  } else {
   VAR_18 = VAR_10->info->directive[VAR_19];
  }

  VAR_16 = VAR_11;

  if (VAR_18 & VAR_1) {
   wchar_t *VAR_26, *VAR_27, VAR_28;
   FUNC_2(VAR_17);
   if ((VAR_17 = FUNC_3(VAR_16)) == ((void*)0)) {
    VAR_9 = VAR_6;
    goto fail;
   }
   VAR_26 = VAR_17;
   VAR_27 = VAR_17 + FUNC_4(VAR_17) - 1;
   while (VAR_26 < VAR_27) {
    VAR_28 = *VAR_26;
    *VAR_26++ = *VAR_27;
    *VAR_27-- = VAR_28;
   }
   VAR_16 = (const wchar_t *)VAR_17;
  }

  if (VAR_18 & VAR_3) {
   while (*VAR_16 || VAR_20) {

    FUNC_0(VAR_10, VAR_16, &VAR_15, &VAR_14, VAR_19, &VAR_20);
    VAR_16 += VAR_15;
    if (VAR_14 <= 0) {
     if (VAR_14 < 0) {
      VAR_9 = VAR_5;
      goto fail;
     }
     VAR_20 = ((void*)0);
     VAR_14 = VAR_0;
    }

    VAR_23 = FUNC_5(VAR_10, VAR_24, VAR_14, VAR_19);
    VAR_21 += VAR_23;
    if (VAR_13) {
     while (VAR_23) {
      VAR_23--;
      if (VAR_13) {
       *VAR_12++ = VAR_24[VAR_23];
       VAR_13--;
      }
     }
    }
    VAR_22 = VAR_21;
   }
  } else {
   while (*VAR_16 || VAR_20) {
    FUNC_0(VAR_10, VAR_16, &VAR_15, &VAR_14, VAR_19, &VAR_20);
    VAR_16 += VAR_15;
    if (VAR_14 <= 0) {
     if (VAR_14 < 0) {
      VAR_9 = VAR_5;
      goto fail;
     }
     VAR_20 = ((void*)0);
     continue;
    }

    VAR_23 = FUNC_5(VAR_10, VAR_24, VAR_14, VAR_19);
    VAR_21 += VAR_23;
    if (VAR_13) {

     while (VAR_23) {
      VAR_23--;
      if (VAR_13) {
       *VAR_12++ = VAR_24[VAR_23];
       VAR_13--;
      }
     }
    }
    VAR_22 = VAR_21;
   }
  }
 }
 FUNC_2(VAR_17);
 return (VAR_22);

fail:
 FUNC_2(VAR_17);
 return ((size_t)(-1));
}
