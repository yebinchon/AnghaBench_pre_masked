
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_2(void *VAR_6)
{
 unsigned int VAR_7 = (unsigned int)VAR_6;
 uint32_t VAR_8;

 if(VAR_5 >= VAR_4) {
  VAR_8 = FUNC_0(VAR_2 +
   VAR_3);
  FUNC_1(VAR_2
   + VAR_3, VAR_8 & ~(1 << VAR_7));
 } else {
  VAR_8 = FUNC_0(VAR_0 +
   VAR_1);
  FUNC_1(VAR_0
   + VAR_1, VAR_8 & ~(1 << VAR_7));
 }
}
