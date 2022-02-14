
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,int,void*,int) ;
 int FUNC_1 (void const*,int,void*,int) ;

int FUNC_2(const void *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{

 int VAR_4 = ((*(const unsigned char *)VAR_0) >> 5) + 1;

 if (VAR_4 == 1)
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 2)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);


 return 0;
}
