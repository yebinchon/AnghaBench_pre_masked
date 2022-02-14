
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_7, int VAR_8)
{
 int VAR_9;


 if (VAR_7 > 0x500) {
  VAR_9 = VAR_0 - (VAR_7 * VAR_4);
  VAR_9 >>= VAR_3;
  return (VAR_9);
 }

 if (VAR_8 == 0)
  VAR_9 = VAR_1 - (VAR_7 * VAR_5);
 else if (VAR_8 == 1)
  VAR_9 = VAR_2 - (VAR_7 * VAR_6);
 else {
  FUNC_0("Unknown sensor %d\n", VAR_8);
  return (VAR_7);
 }

 VAR_9 >>= VAR_3;
 return (VAR_9);
}
