
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long*) ;

__attribute__((used)) static uint32_t FUNC_2(unsigned long *VAR_0,
       uint32_t VAR_1, uint32_t VAR_2,
       int VAR_3, int VAR_4)
{
 uint32_t VAR_5, VAR_6;

again:
 VAR_1 = FUNC_0(VAR_1, VAR_4);

 while ((VAR_1 < VAR_2) && FUNC_1(VAR_1, VAR_0))
  VAR_1 += VAR_4;

 if (VAR_1 >= VAR_2)
  return -1;

 VAR_5 = VAR_1 + VAR_3;
 if (VAR_5 > VAR_2)
  return -1;

 for (VAR_6 = VAR_1 + 1; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_1(VAR_6, VAR_0)) {
   VAR_1 = VAR_6 + 1;
   goto again;
  }
 }

 return VAR_1;
}
