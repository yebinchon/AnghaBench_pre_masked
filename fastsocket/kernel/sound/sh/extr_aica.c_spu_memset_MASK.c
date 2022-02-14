
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(u32 VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 if (FUNC_2(VAR_3 % 4))
  return;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (!(VAR_4 % 8))
   FUNC_3();
  FUNC_1(VAR_5);
  FUNC_4(VAR_2, VAR_1 + VAR_0);
  FUNC_0(VAR_5);
  VAR_1++;
 }
}
