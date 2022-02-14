
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct glob_limit {int l_stat_cnt; } ;
struct freebsd11_stat {int st_mode; } ;
struct TYPE_7__ {int gl_flags; int gl_matchc; } ;
typedef TYPE_1__ glob11_t ;
typedef scalar_t__ Char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__*,struct freebsd11_stat*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,struct freebsd11_stat*,TYPE_1__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,TYPE_1__*,struct glob_limit*) ;
 int FUNC_6 (scalar_t__*,TYPE_1__*,struct glob_limit*,int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(Char *VAR_8, Char *VAR_9, Char *VAR_10, Char *VAR_11,
      glob11_t *VAR_12, struct glob_limit *VAR_13)
{
 struct freebsd11_stat VAR_14;
 Char *VAR_15, *VAR_16;
 int VAR_17;





 for (VAR_17 = 0;;) {
  if (*VAR_11 == VAR_1) {
   *VAR_9 = VAR_1;
   if (FUNC_3(VAR_8, &VAR_14, VAR_12))
    return (0);

   if ((VAR_12->gl_flags & VAR_2) &&
       VAR_13->l_stat_cnt++ >= VAR_3) {
    VAR_7 = VAR_0;
    return (VAR_5);
   }
   if ((VAR_12->gl_flags & VAR_4) &&
       FUNC_2(VAR_9[-1]) != VAR_6 &&
       (FUNC_0(VAR_14.st_mode) ||
       (FUNC_1(VAR_14.st_mode) &&
       FUNC_4(VAR_8, &VAR_14, VAR_12) == 0 &&
       FUNC_0(VAR_14.st_mode)))) {
    if (VAR_9 + 1 > VAR_10) {
     VAR_7 = VAR_0;
     return (VAR_5);
    }
    *VAR_9++ = VAR_6;
    *VAR_9 = VAR_1;
   }
   ++VAR_12->gl_matchc;
   return (FUNC_6(VAR_8, VAR_12, VAR_13, ((void*)0)));
  }


  VAR_16 = VAR_9;
  VAR_15 = VAR_11;
  while (*VAR_15 != VAR_1 && FUNC_2(*VAR_15) != VAR_6) {
   if (FUNC_7(*VAR_15))
    VAR_17 = 1;
   if (VAR_16 + 1 > VAR_10) {
    VAR_7 = VAR_0;
    return (VAR_5);
   }
   *VAR_16++ = *VAR_15++;
  }

  if (!VAR_17) {
   VAR_9 = VAR_16;
   VAR_11 = VAR_15;
   while (FUNC_2(*VAR_11) == VAR_6) {
    if (VAR_9 + 1 > VAR_10) {
     VAR_7 = VAR_0;
     return (VAR_5);
    }
    *VAR_9++ = *VAR_11++;
   }
  } else
   return (FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_15, VAR_12, VAR_13));
 }

}
