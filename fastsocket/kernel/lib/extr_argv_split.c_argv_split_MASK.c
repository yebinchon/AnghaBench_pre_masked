
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int FUNC_0 (char**) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int,int ) ;
 char** FUNC_3 (int,int ) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;

char **FUNC_6(gfp_t VAR_0, const char *VAR_1, int *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 char **VAR_4 = FUNC_3(sizeof(*VAR_4) * (VAR_3+1), VAR_0);
 char **VAR_5;

 if (VAR_4 == ((void*)0))
  goto out;

 if (VAR_2)
  *VAR_2 = VAR_3;

 VAR_5 = VAR_4;

 while (*VAR_1) {
  VAR_1 = FUNC_5(VAR_1);

  if (*VAR_1) {
   const char *VAR_6 = VAR_1;
   char *VAR_7;

   VAR_1 = FUNC_4(VAR_1);

   VAR_7 = FUNC_2(VAR_6, VAR_1-VAR_6, VAR_0);
   if (VAR_7 == ((void*)0))
    goto fail;
   *VAR_5++ = VAR_7;
  }
 }
 *VAR_5 = ((void*)0);

  out:
 return VAR_4;

  fail:
 FUNC_0(VAR_4);
 return ((void*)0);
}
