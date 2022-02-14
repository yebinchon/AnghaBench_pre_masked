
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int ) ;

__attribute__((used)) static void
FUNC_3(uint64_t *VAR_6, int VAR_7)
{
 int VAR_8;
 uint64_t *VAR_9;

 if (VAR_7 > 1) {
  for (VAR_8 = 0; VAR_8 < 512; VAR_8++) {
   if ((VAR_6[VAR_8] & (VAR_3 | VAR_5)) == 0)
    continue;
   if ((VAR_6[VAR_8] & VAR_4) != 0)
    continue;
   VAR_9 = (uint64_t *)FUNC_0(VAR_6[VAR_8] & VAR_2);
   FUNC_3(VAR_9, VAR_7 - 1);
  }
 }

 FUNC_1(VAR_6, VAR_1);
 FUNC_2(VAR_6, VAR_0);
}
