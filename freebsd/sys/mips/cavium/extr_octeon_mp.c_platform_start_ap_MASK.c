
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 unsigned long long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long long) ;
 int VAR_2 ;
 int FUNC_4 (char*,int) ;

int
FUNC_5(int VAR_3)
{
 uint64_t VAR_4;





 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 & (1ULL << VAR_3)) {
     if (VAR_1)
  FUNC_4 ("AP #%d still in reset\n", VAR_3);
     VAR_4 &= ~(1ULL << VAR_3);
     FUNC_3(VAR_0, (uint64_t)(VAR_4));
     FUNC_0(2000);
 }

 if (FUNC_1(&VAR_2, ~0, VAR_3) == 0)
  return (-1);
 for (;;) {
  FUNC_0(1000);
  if (FUNC_1(&VAR_2, 0, ~0) != 0)
   return (0);
  FUNC_4("Waiting for cpu%d to start\n", VAR_3);
 }
}
