
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_3__ {int gl_flags; int (* gl_stat ) (char*,struct stat*) ;} ;
typedef TYPE_1__ glob_t ;
typedef int buf ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_3(Char *VAR_5, struct stat *VAR_6, glob_t *VAR_7)
{
 char VAR_8[VAR_2 + VAR_3 - 1];

 if (FUNC_0(VAR_5, VAR_8, sizeof(VAR_8))) {
  VAR_4 = VAR_0;
  return (-1);
 }
 if (VAR_7->gl_flags & VAR_1)
  return ((*VAR_7->gl_stat)(VAR_8, VAR_6));
 return (FUNC_1(VAR_8, VAR_6));
}
