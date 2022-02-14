
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {int dummy; } ;
struct config_file {int dummy; } ;


 char* FUNC_0 (struct config_strlist*) ;
 int FUNC_1 (struct config_strlist*) ;
 int FUNC_2 (struct config_file*,char const*,struct config_strlist**) ;

int
FUNC_3(struct config_file* VAR_0, const char* VAR_1, char** VAR_2)
{
 struct config_strlist* VAR_3 = ((void*)0);
 int VAR_4;
 *VAR_2 = ((void*)0);
 if((VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3)) != 0)
  return VAR_4;
 *VAR_2 = FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 if(!*VAR_2) return 2;
 return 0;
}
