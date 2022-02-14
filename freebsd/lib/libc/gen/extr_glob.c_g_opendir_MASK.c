
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gl_flags; int * (* gl_opendir ) (char*) ;} ;
typedef TYPE_1__ glob_t ;
typedef int buf ;
typedef int DIR ;
typedef scalar_t__ Char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*,int) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;

__attribute__((used)) static DIR *
FUNC_4(Char *VAR_6, glob_t *VAR_7)
{
 char VAR_8[VAR_3 + VAR_4 - 1];

 if (*VAR_6 == VAR_1)
  FUNC_2(VAR_8, ".");
 else {
  if (FUNC_0(VAR_6, VAR_8, sizeof(VAR_8))) {
   VAR_5 = VAR_0;
   return (((void*)0));
  }
 }

 if (VAR_7->gl_flags & VAR_2)
  return ((*VAR_7->gl_opendir)(VAR_8));

 return (FUNC_1(VAR_8));
}
