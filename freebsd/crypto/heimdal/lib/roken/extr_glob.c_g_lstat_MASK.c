
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_3__ {int gl_flags; int (* gl_lstat ) (char*,struct stat*) ;} ;
typedef TYPE_1__ glob_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_3(Char *VAR_2, struct stat *VAR_3, glob_t *VAR_4)
{
 char VAR_5[VAR_1];

 FUNC_0(VAR_2, VAR_5);
 if (VAR_4->gl_flags & VAR_0)
  return((*VAR_4->gl_lstat)(VAR_5, VAR_3));
 return(FUNC_1(VAR_5, VAR_3));
}
