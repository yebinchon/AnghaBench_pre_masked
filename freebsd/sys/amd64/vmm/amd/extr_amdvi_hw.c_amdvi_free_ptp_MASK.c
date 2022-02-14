
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int ) ;

__attribute__((used)) static void
FUNC_3(uint64_t *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 < 1)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_3 ; VAR_6++) {
  if ((VAR_4[VAR_6] & VAR_1) == 0)
   continue;







  FUNC_3((uint64_t *)FUNC_1(VAR_4[VAR_6]
      & VAR_0), VAR_5 - 1);

 }

 FUNC_2(VAR_4, VAR_2);
}
