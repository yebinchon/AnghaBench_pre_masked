
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct glob_lim {int glim_stat; } ;
struct TYPE_7__ {int gl_flags; int gl_matchc; } ;
typedef TYPE_1__ glob_t ;
typedef scalar_t__ Char ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__*,struct stat*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,struct stat*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,TYPE_1__*,struct glob_lim*) ;
 int FUNC_5 (scalar_t__*,TYPE_1__*,struct glob_lim*,struct stat*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(Char *VAR_7, Char *VAR_8, Char *VAR_9, Char *VAR_10,
    Char *VAR_11, Char *VAR_12, glob_t *VAR_13, struct glob_lim *VAR_14)
{
 struct stat VAR_15;
 Char *VAR_16, *VAR_17;
 int VAR_18;





 for (VAR_18 = 0;;) {
  if (*VAR_11 == VAR_0) {
   *VAR_9 = VAR_0;
   if (FUNC_2(VAR_7, &VAR_15, VAR_13))
    return(0);

   if ((VAR_13->gl_flags & VAR_1) &&
       VAR_14->glim_stat++ >= VAR_2) {
    VAR_6 = 0;
    *VAR_9++ = VAR_5;
    *VAR_9 = VAR_0;
    return(VAR_4);
   }

   if (((VAR_13->gl_flags & VAR_3) &&
       VAR_9[-1] != VAR_5) && (FUNC_0(VAR_15.st_mode) ||
       (FUNC_1(VAR_15.st_mode) &&
       (FUNC_3(VAR_7, &VAR_15, VAR_13) == 0) &&
       FUNC_0(VAR_15.st_mode)))) {
    if (VAR_9+1 > VAR_10)
     return (1);
    *VAR_9++ = VAR_5;
    *VAR_9 = VAR_0;
   }
   ++VAR_13->gl_matchc;
   return(FUNC_5(VAR_7, VAR_13, VAR_14, &VAR_15));
  }


  VAR_17 = VAR_9;
  VAR_16 = VAR_11;
  while (*VAR_16 != VAR_0 && *VAR_16 != VAR_5) {
   if (FUNC_6(*VAR_16))
    VAR_18 = 1;
   if (VAR_17+1 > VAR_10)
    return (1);
   *VAR_17++ = *VAR_16++;
  }

  if (!VAR_18) {
   VAR_9 = VAR_17;
   VAR_11 = VAR_16;
   while (*VAR_11 == VAR_5) {
    if (VAR_9+1 > VAR_10)
     return (1);
    *VAR_9++ = *VAR_11++;
   }
  } else

   return(FUNC_4(VAR_7, VAR_8, VAR_9,
       VAR_10, VAR_11, VAR_16, VAR_12,
       VAR_13, VAR_14));
 }

}
