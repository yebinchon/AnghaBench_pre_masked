
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = 1, VAR_13 = 1;


 for (; VAR_9; VAR_9--) {

  VAR_12 *= VAR_3;
  VAR_13 *= VAR_0;
 }

 if (VAR_8 == 0 || VAR_13 == 0)
  return;

 if (VAR_7 == -1)
  FUNC_1(VAR_6 * VAR_12 / (VAR_8 * VAR_13));
 else {
  VAR_10 = (VAR_6 * VAR_12) / (VAR_8 * VAR_13)
   - (VAR_6 * (VAR_1 - VAR_4)) / (VAR_8 * VAR_1);
  VAR_11 = VAR_6 * (VAR_1-VAR_4) * VAR_12 / (VAR_1 * VAR_8 * VAR_13);






  FUNC_2(VAR_5[VAR_7], VAR_10);
  if (VAR_4 != VAR_2)
   FUNC_1(VAR_11);
 }
}
