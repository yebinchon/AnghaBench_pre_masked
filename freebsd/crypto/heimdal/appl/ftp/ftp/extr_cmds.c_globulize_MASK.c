
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ gl_pathc; int * gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int gl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(char **VAR_5)
{
 glob_t VAR_6;
 int VAR_7;

 if (!VAR_4)
  return (1);

 VAR_7 = VAR_0|VAR_1|VAR_2|VAR_3;
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 if (FUNC_0(*VAR_5, VAR_7, ((void*)0), &VAR_6) ||
     VAR_6.gl_pathc == 0) {
  FUNC_4("%s: not found", *VAR_5);
  FUNC_1(&VAR_6);
  return (0);
 }
 *VAR_5 = FUNC_3(VAR_6.gl_pathv[0]);
 FUNC_1(&VAR_6);
 return (1);
}
