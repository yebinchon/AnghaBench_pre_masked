
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ gl_pathc; char const** gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int gl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char*,char const*) ;

char *
FUNC_5(const char *VAR_4)
{
 glob_t VAR_5;
 int VAR_6;
 char *VAR_7;

 if (!VAR_3)
  return (FUNC_0(VAR_4));

 VAR_6 = VAR_0|VAR_1|VAR_2;
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 if (FUNC_1(VAR_4, VAR_6, ((void*)0), &VAR_5) || VAR_5.gl_pathc == 0) {
  FUNC_4("Glob pattern `%s' not found", VAR_4);
  FUNC_2(&VAR_5);
  return (((void*)0));
 }
 VAR_7 = FUNC_0(VAR_5.gl_pathv[0]);
 FUNC_2(&VAR_5);
 return (VAR_7);
}
