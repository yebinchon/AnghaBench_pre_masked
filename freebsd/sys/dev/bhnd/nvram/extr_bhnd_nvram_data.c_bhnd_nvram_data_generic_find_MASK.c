
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;


 char* FUNC_0 (struct bhnd_nvram_data*,void**) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

void *
FUNC_2(struct bhnd_nvram_data *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 void *VAR_3;

 VAR_3 = ((void*)0);
 while ((VAR_2 = FUNC_0(VAR_0, &VAR_3))) {
  if (FUNC_1(VAR_1, VAR_2) == 0)
   return (VAR_3);
 }


 return (((void*)0));
}
