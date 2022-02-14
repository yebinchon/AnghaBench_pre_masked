
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void const*,int,char*,int*,int) ;

int FUNC_2(const void *VAR_1, uint32_t VAR_2)
{
 if ((VAR_2 == 0) || (VAR_2 == -1))
  return -VAR_0;
 VAR_2 = FUNC_0(VAR_2);
 return FUNC_1(VAR_1, -1, "linux,phandle",
          &VAR_2, sizeof(VAR_2));
}
