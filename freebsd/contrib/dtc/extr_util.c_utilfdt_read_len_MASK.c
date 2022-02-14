
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char const*,char**,int *) ;

char *FUNC_3(const char *VAR_1, off_t *VAR_2)
{
 char *VAR_3;
 int VAR_4 = FUNC_2(VAR_1, &VAR_3, VAR_2);

 if (VAR_4) {
  FUNC_0(VAR_0, "Couldn't open blob from '%s': %s\n", VAR_1,
   FUNC_1(VAR_4));
  return ((void*)0);
 }

 return VAR_3;
}
