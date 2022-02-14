
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline
uint32_t FUNC_1(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;

 FUNC_0(" IN ");

 if(VAR_0 >= VAR_1) {
  VAR_3 = (VAR_2 - VAR_0);
  if(VAR_1 == 0)
   VAR_3 -= 1;
 } else {
  VAR_3 = (VAR_1 - VAR_0 - 1);
 }

 FUNC_0(" OUT ");

 return VAR_3;
}
