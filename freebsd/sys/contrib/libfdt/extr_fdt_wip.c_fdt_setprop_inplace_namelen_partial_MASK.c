
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 void* FUNC_0 (void*,int,char const*,int,int*) ;
 int FUNC_1 (char*,void const*,int) ;

int FUNC_2(void *VAR_1, int VAR_2,
     const char *VAR_3, int VAR_4,
     uint32_t VAR_5, const void *VAR_6,
     int VAR_7)
{
 void *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
     &VAR_9);
 if (!VAR_8)
  return VAR_9;

 if (VAR_9 < (VAR_7 + VAR_5))
  return -VAR_0;

 FUNC_1((char *)VAR_8 + VAR_5, VAR_6, VAR_7);
 return 0;
}
