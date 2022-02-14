
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int * FUNC_1 (void const*,int,char*,int*) ;

int FUNC_2(const void *VAR_2, int VAR_3)
{
 const fdt32_t *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_2, VAR_3, "#size-cells", &VAR_6);
 if (!VAR_4)
  return 2;

 if (VAR_6 != sizeof(*VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_0(*VAR_4);
 if ((VAR_5 < 0) || (VAR_5 > VAR_1))
  return -VAR_0;

 return VAR_5;
}
