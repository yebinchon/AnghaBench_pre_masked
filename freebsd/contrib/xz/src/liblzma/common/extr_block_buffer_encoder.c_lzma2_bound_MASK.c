
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_3)
{

 if (VAR_3 > VAR_0)
  return 0;





 const uint64_t VAR_4 = ((VAR_3 + VAR_1 - 1)
    / VAR_1)
   * VAR_2 + 1;


 if (VAR_0 - VAR_4 < VAR_3)
  return 0;

 return VAR_3 + VAR_4;
}
