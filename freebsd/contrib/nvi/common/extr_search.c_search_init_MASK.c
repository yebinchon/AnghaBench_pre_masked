
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef scalar_t__ recno_t ;
typedef void* dir_t ;
struct TYPE_7__ {int lno; scalar_t__* re; size_t re_len; void* searchdir; int re_c; } ;
typedef TYPE_1__ SCR ;
typedef scalar_t__ CHAR_T ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__*,size_t,scalar_t__**,size_t*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(
 SCR *VAR_12,
 dir_t VAR_13,
 CHAR_T *VAR_14,
 size_t VAR_15,
 CHAR_T **VAR_16,
 u_int VAR_17)
{
 recno_t VAR_18;
 int VAR_19;
 CHAR_T *VAR_20, *VAR_21;


 if (VAR_12->lno <= 1) {
  if (FUNC_2(VAR_12, &VAR_18))
   return (1);
  if (VAR_18 == 0) {
   if (FUNC_1(VAR_6))
    FUNC_4(VAR_12, VAR_10);
   return (1);
  }
 }

 if (FUNC_1(VAR_7)) {
  if (VAR_14 == ((void*)0))
   goto prev;
  if (VAR_15 == 1) {
   if (VAR_16 != ((void*)0))
    *VAR_16 = VAR_14 + 1;
   goto prev;
  }
  if (VAR_14[0] == VAR_14[1]) {
   if (VAR_16 != ((void*)0))
    *VAR_16 = VAR_14 + 2;


prev: if (VAR_12->re == ((void*)0)) {
    FUNC_4(VAR_12, VAR_11);
    return (1);
   }

   if (!FUNC_0(VAR_12, VAR_4) && FUNC_3(VAR_12,
       VAR_12->re, VAR_12->re_len, ((void*)0), ((void*)0), &VAR_12->re_c,
       VAR_1 |
       (FUNC_1(VAR_6) ? 0 : VAR_2)))
    return (1);


   if (FUNC_1(VAR_8))
    VAR_12->searchdir = VAR_13;
   return (0);
  }
  for (VAR_19 = *VAR_14, VAR_20 = VAR_21 = ++VAR_14;; *VAR_21++ = *VAR_20++) {
   if (--VAR_15 == 0 || VAR_20[0] == VAR_19) {
    if (VAR_15 != 0)
     ++VAR_20;
    break;
   }
   if (VAR_15 > 1 && VAR_20[0] == '\\' && VAR_20[1] == VAR_19) {
    ++VAR_20;
    --VAR_15;
   }
  }
  if (VAR_16 != ((void*)0))
   *VAR_16 = VAR_20;

  VAR_15 = VAR_21 - VAR_14;
 }


 if (FUNC_3(VAR_12, VAR_14, VAR_15, &VAR_12->re, &VAR_12->re_len, &VAR_12->re_c,
     VAR_1 |
     (FUNC_1(VAR_6) ? 0 : VAR_2) |
     (FUNC_1(VAR_9) ? VAR_3 : 0) |
     (FUNC_1(VAR_5) ? VAR_0 : 0)))
  return (1);


 if (FUNC_1(VAR_8))
  VAR_12->searchdir = VAR_13;

 return (0);
}
