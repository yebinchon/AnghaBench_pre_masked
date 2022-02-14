
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_7__ {int gl_flags; int gl_matchc; } ;
typedef TYPE_1__ glob_t ;
typedef scalar_t__ Char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,struct stat*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,struct stat*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,TYPE_1__*,size_t*) ;
 int FUNC_5 (scalar_t__*,TYPE_1__*,size_t*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(Char *VAR_3, Char *VAR_4, Char *VAR_5, glob_t *VAR_6,
      size_t *VAR_7)
{
 struct stat VAR_8;
 Char *VAR_9, *VAR_10;
 int VAR_11;





 for (VAR_11 = 0;;) {
  if (*VAR_5 == VAR_0) {
   *VAR_4 = VAR_0;
   if (FUNC_2(VAR_3, &VAR_8, VAR_6))
    return(0);

   if (((VAR_6->gl_flags & VAR_2) &&
       VAR_4[-1] != VAR_1) && (FUNC_0(VAR_8.st_mode)
       || (FUNC_1(VAR_8.st_mode) &&
       (FUNC_3(VAR_3, &VAR_8, VAR_6) == 0) &&
       FUNC_0(VAR_8.st_mode)))) {
    *VAR_4++ = VAR_1;
    *VAR_4 = VAR_0;
   }
   ++VAR_6->gl_matchc;
   return(FUNC_5(VAR_3, VAR_6, VAR_7));
  }


  VAR_10 = VAR_4;
  VAR_9 = VAR_5;
  while (*VAR_9 != VAR_0 && *VAR_9 != VAR_1) {
   if (FUNC_6(*VAR_9))
    VAR_11 = 1;
   *VAR_10++ = *VAR_9++;
  }

  if (!VAR_11) {
   VAR_4 = VAR_10;
   VAR_5 = VAR_9;
   while (*VAR_5 == VAR_1)
    *VAR_4++ = *VAR_5++;
  } else
   return(FUNC_4(VAR_3, VAR_4, VAR_5, VAR_9, VAR_6,
       VAR_7));
 }

}
