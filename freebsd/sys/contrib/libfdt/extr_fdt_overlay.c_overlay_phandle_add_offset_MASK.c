
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 int * FUNC_1 (void*,int,char const*,int*) ;
 int FUNC_2 (void*,int,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, int VAR_3,
          const char *VAR_4, uint32_t VAR_5)
{
 const fdt32_t *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_8);
 if (!VAR_6)
  return VAR_8;

 if (VAR_8 != sizeof(*VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_0(*VAR_6);
 if ((VAR_7 + VAR_5) < VAR_7)
  return -VAR_1;

 VAR_7 += VAR_5;
 if (VAR_7 == (uint32_t)-1)
  return -VAR_1;

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7);
}
