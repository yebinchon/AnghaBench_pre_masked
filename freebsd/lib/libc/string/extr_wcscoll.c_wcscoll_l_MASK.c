
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct xlocale_collate {TYPE_1__* info; scalar_t__ __collate_load_error; } ;
typedef TYPE_2__* locale_t ;
typedef int int32_t ;
struct TYPE_6__ {scalar_t__* components; } ;
struct TYPE_5__ {int directive_count; int* directive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_5 ;
 int FUNC_1 (struct xlocale_collate*,scalar_t__ const*,int*,int*,int,int const**) ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__ const*,scalar_t__ const*) ;
 scalar_t__* FUNC_4 (scalar_t__ const*) ;
 int FUNC_5 (scalar_t__*) ;

int
FUNC_6(const wchar_t *VAR_7, const wchar_t *VAR_8, locale_t VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 wchar_t *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 int VAR_16, VAR_17;
 int VAR_18 = FUNC_3(VAR_7, VAR_8);

 FUNC_0(VAR_9);
 struct xlocale_collate *VAR_19 =
  (struct xlocale_collate*)VAR_9->components[VAR_5];

 if (VAR_19->__collate_load_error || VAR_18 == 0)
  return (VAR_18);

 if (*VAR_7 == 0 && *VAR_8 != 0)
  return (-1);
 if (*VAR_7 != 0 && *VAR_8 == 0)
  return (1);
 for (VAR_17 = 0; VAR_17 <= VAR_19->info->directive_count; VAR_17++) {

  const int32_t *VAR_20 = ((void*)0);
  const int32_t *VAR_21 = ((void*)0);
  const wchar_t *VAR_22 = VAR_7;
  const wchar_t *VAR_23 = VAR_8;


  if (VAR_17 == VAR_19->info->directive_count) {
   VAR_16 = VAR_2;
  } else {
   VAR_16 = VAR_19->info->directive[VAR_17];
  }

  if (VAR_16 & VAR_1) {
   wchar_t *VAR_24, *VAR_25, VAR_26;
   FUNC_2(VAR_14);
   if ((VAR_14 = FUNC_4(VAR_22)) == ((void*)0))
    goto end;
   VAR_24 = VAR_14;
   VAR_25 = VAR_14 + FUNC_5(VAR_14) - 1;
   while (VAR_24 < VAR_25) {
    VAR_26 = *VAR_24;
    *VAR_24++ = *VAR_25;
    *VAR_25-- = VAR_26;
   }
   FUNC_2(VAR_15);
   if ((VAR_15 = FUNC_4(VAR_23)) == ((void*)0))
    goto end;
   VAR_24 = VAR_15;
   VAR_25 = VAR_15 + FUNC_5(VAR_15) - 1;
   while (VAR_24 < VAR_25) {
    VAR_26 = *VAR_24;
    *VAR_24++ = *VAR_25;
    *VAR_25-- = VAR_26;
   }
   VAR_22 = VAR_14;
   VAR_23 = VAR_15;
  }

  if (VAR_16 & VAR_3) {
   int VAR_27, VAR_28;
   while (*VAR_22 && *VAR_23) {
    VAR_12 = VAR_13 = 0;
    VAR_27 = VAR_28 = 1;
    while ((VAR_12 == VAR_13) && (VAR_27 || VAR_28)) {
     if (VAR_27) {
      FUNC_1(VAR_19, VAR_22, &VAR_10,
          &VAR_12, VAR_17, &VAR_20);
      if (VAR_12 < 0) {
       VAR_6 = VAR_4;
       goto end;
      }
      if (!VAR_12) {
       VAR_12 = VAR_0;
       VAR_20 = ((void*)0);
      }
      VAR_27 = (VAR_20 != ((void*)0));
     }
     if (VAR_28) {
      FUNC_1(VAR_19, VAR_23, &VAR_11,
          &VAR_13, VAR_17, &VAR_21);
      if (VAR_13 < 0) {
       VAR_6 = VAR_4;
       goto end;
      }
      if (!VAR_13) {
       VAR_13 = VAR_0;
       VAR_21 = ((void*)0);
      }
      VAR_28 = (VAR_21 != ((void*)0));
     }
    }
    if (VAR_12 != VAR_13) {
     VAR_18 = VAR_12 - VAR_13;
     goto end;
    }
    VAR_22 += VAR_10;
    VAR_23 += VAR_11;
   }
   if (!*VAR_22) {
    if (*VAR_23) {
     VAR_18 = -(int)*VAR_23;
     goto end;
    }
   } else {
    VAR_18 = *VAR_22;
    goto end;
   }
  } else {
   int VAR_29 = 0, VAR_30 = 0;
   while (*VAR_22 || *VAR_23 || VAR_20 || VAR_21) {
    VAR_12 = 1;
    while (*VAR_22 || VAR_20) {
     FUNC_1(VAR_19, VAR_22, &VAR_10, &VAR_12,
         VAR_17, &VAR_20);
     VAR_22 += VAR_10;
     if (VAR_12 > 0) {
      VAR_29++;
      break;
     }

     if (VAR_12 < 0) {
      VAR_6 = VAR_4;
      goto end;
     }
     VAR_20 = ((void*)0);
    }
    VAR_13 = 1;
    while (*VAR_23 || VAR_21) {
     FUNC_1(VAR_19, VAR_23, &VAR_11, &VAR_13,
         VAR_17, &VAR_21);
     VAR_23 += VAR_11;
     if (VAR_13 > 0) {
      VAR_30++;
      break;
     }
     if (VAR_13 < 0) {
      VAR_6 = VAR_4;
      goto end;
     }
     VAR_21 = ((void*)0);
    }
    if ((!VAR_12 || !VAR_13) && (VAR_29 == VAR_30))
     break;
    if (VAR_12 != VAR_13) {
     VAR_18 = VAR_12 - VAR_13;
     goto end;
    }
   }
   if (VAR_29 && !VAR_30) {
    VAR_18 = 1;
    goto end;
   }
   if (!VAR_29 && VAR_30) {
    VAR_18 = -1;
    goto end;
   }
  }
 }
 VAR_18 = 0;

end:
 FUNC_2(VAR_14);
 FUNC_2(VAR_15);

 return (VAR_18);
}
