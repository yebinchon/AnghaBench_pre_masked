
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int binary_heap_t ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int *,int,int) ;

__attribute__((used)) static uint32_t FUNC_2(binary_heap_t * VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = VAR_1, VAR_3 = 0;

 if (VAR_2 > 0) {
  VAR_3 = (VAR_2 - 1) >> 1;
  while (FUNC_1(VAR_0, VAR_2, VAR_3)) {
   FUNC_0(VAR_0, VAR_2, VAR_3);

   VAR_2 = VAR_3;
   if (VAR_2 > 0)
    VAR_3 = (VAR_2 - 1) >> 1;
  }
 }

 return VAR_2;
}
