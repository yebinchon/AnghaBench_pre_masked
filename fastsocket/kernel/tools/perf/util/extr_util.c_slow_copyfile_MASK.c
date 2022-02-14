
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,size_t*,int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = ((void*)0);
 size_t VAR_5;
 FILE *VAR_6 = FUNC_1(VAR_1, "r"), *VAR_7;

 if (VAR_6 == ((void*)0))
  goto out;

 VAR_7 = FUNC_1(VAR_2, "w");
 if (VAR_7 == ((void*)0))
  goto out_fclose_from;

 while (FUNC_4(&VAR_4, &VAR_5, VAR_6) > 0)
  if (FUNC_2(VAR_4, VAR_7) == VAR_0)
   goto out_fclose_to;
 VAR_3 = 0;
out_fclose_to:
 FUNC_0(VAR_7);
 FUNC_3(VAR_4);
out_fclose_from:
 FUNC_0(VAR_6);
out:
 return VAR_3;
}
