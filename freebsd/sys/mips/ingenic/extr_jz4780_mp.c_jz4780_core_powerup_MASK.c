
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_0 + VAR_1);
 VAR_4 &= ~VAR_2;
 FUNC_1(VAR_0 + VAR_1, VAR_4);
 do {
  VAR_4 = FUNC_0(VAR_0 + VAR_1);
 } while ((VAR_4 & VAR_3) != 0);
}
