
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*,int) ;
 int FUNC_1 (void const*,int,int *) ;

uint32_t FUNC_2(const void *VAR_1)
{
 uint32_t VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = FUNC_1(VAR_1, -1, ((void*)0));;
      VAR_3 = FUNC_1(VAR_1, VAR_3, ((void*)0))) {
  uint32_t VAR_4;

  if (VAR_3 == -VAR_0)
   return VAR_2;

  if (VAR_3 < 0)
   return (uint32_t)-1;

  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4 == (uint32_t)-1)
   continue;

  if (VAR_4 > VAR_2)
   VAR_2 = VAR_4;
 }

 return 0;
}
