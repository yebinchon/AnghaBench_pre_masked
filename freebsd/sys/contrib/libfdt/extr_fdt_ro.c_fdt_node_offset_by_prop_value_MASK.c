
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 void* FUNC_1 (void const*,int,char const*,int*) ;
 int FUNC_2 (void const*,int,int *) ;
 scalar_t__ FUNC_3 (void const*,void const*,int) ;

int FUNC_4(const void *VAR_0, int VAR_1,
      const char *VAR_2,
      const void *VAR_3, int VAR_4)
{
 int VAR_5;
 const void *VAR_6;
 int VAR_7;

 FUNC_0(VAR_0);






 for (VAR_5 = FUNC_2(VAR_0, VAR_1, ((void*)0));
      VAR_5 >= 0;
      VAR_5 = FUNC_2(VAR_0, VAR_5, ((void*)0))) {
  VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_2, &VAR_7);
  if (VAR_6 && (VAR_7 == VAR_4)
      && (FUNC_3(VAR_6, VAR_3, VAR_7) == 0))
   return VAR_5;
 }

 return VAR_5;
}
