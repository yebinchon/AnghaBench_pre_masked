
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0, gfp_t VAR_1)
{
 size_t VAR_2;
 char *VAR_3;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0) + 1;
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_0, VAR_2);
 return VAR_3;
}
