
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (void*,int,char const*,int*) ;
 int FUNC_1 (void*,void const*,int) ;

int FUNC_2(void *VAR_1, int VAR_2, const char *VAR_3,
   const void *VAR_4, int VAR_5)
{
 void *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_7);
 if (! VAR_6)
  return VAR_7;

 if (VAR_7 != VAR_5)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_4, VAR_5);
 return 0;
}
