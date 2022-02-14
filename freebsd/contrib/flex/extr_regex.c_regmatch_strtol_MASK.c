
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*,char*,char const*) ;
 char* FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char**,int) ;

int FUNC_5 (regmatch_t * VAR_1, const char *VAR_2, char **VAR_3,
       int VAR_4)
{
 int VAR_5 = 0;


 char VAR_6[20];
 char *VAR_7;

 if (VAR_1 == ((void*)0) || VAR_1->rm_so < 0)
  return 0;

 if (FUNC_3 (VAR_1) < 20)
  VAR_7 = FUNC_1 (VAR_1, VAR_6, VAR_2);
 else
  VAR_7 = FUNC_2 (VAR_1, VAR_2);

 VAR_5 = FUNC_4 (VAR_7, VAR_3, VAR_4);

 if (VAR_7 != VAR_6)
  FUNC_0 (VAR_7);

 return VAR_5;
}
