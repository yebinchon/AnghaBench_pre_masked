
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(uint64_t VAR_3, uint64_t VAR_4)
{

 switch (VAR_3) {
 case 1:
 case 2:
 case 4:
 case 8:
  break;
 default:
  return (FUNC_0(VAR_1));
 }

 if (VAR_3 * VAR_4 > VAR_2)
  return (VAR_0);

 return (0);
}
