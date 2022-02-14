
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gl_flags; int * (* gl_opendir ) (char*) ;} ;
typedef TYPE_1__ glob_t ;
typedef int buf ;
typedef int DIR ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int * FUNC_3 (char*) ;

__attribute__((used)) static DIR *
FUNC_4(Char *VAR_2, glob_t *VAR_3)
{
 char VAR_4[VAR_1];

 if (!*VAR_2)
  FUNC_2(VAR_4, ".", sizeof(VAR_4));
 else
  FUNC_0(VAR_2, VAR_4);

 if (VAR_3->gl_flags & VAR_0)
  return((*VAR_3->gl_opendir)(VAR_4));

 return(FUNC_1(VAR_4));
}
