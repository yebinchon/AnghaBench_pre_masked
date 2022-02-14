
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,size_t,int) ;

int
FUNC_2(const char *VAR_0, size_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, 16);
 FUNC_0(VAR_2 >= 0 && VAR_2 <= 0x10FFFF);
 return VAR_2;
}
