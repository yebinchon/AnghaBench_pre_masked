
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int fdt32_t ;


 scalar_t__ FUNC_0 (int const) ;
 int * FUNC_1 (void const*,int,char*,int*) ;

__attribute__((used)) static uint32_t FUNC_2(const void *VAR_0, int VAR_1)
{
 const fdt32_t *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1, "target", &VAR_3);
 if (!VAR_2)
  return 0;

 if ((VAR_3 != sizeof(*VAR_2)) || (FUNC_0(*VAR_2) == (uint32_t)-1))
  return (uint32_t)-1;

 return FUNC_0(*VAR_2);
}
