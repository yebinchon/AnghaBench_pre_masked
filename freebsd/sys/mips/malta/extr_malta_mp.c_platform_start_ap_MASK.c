
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int,int ) ;

int
FUNC_9(int VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;


 VAR_5 = FUNC_6(0, 1);
 VAR_5 |= (VAR_0);
 FUNC_8(0, 1, VAR_5);

 FUNC_7(VAR_4);
 VAR_5 = FUNC_3(2, 1);
 VAR_5 |= (VAR_1);
 FUNC_4(2, 1, VAR_5);


 FUNC_4(2, 4, 0);


 VAR_5 = FUNC_3(1, 2);
 VAR_5 |= (VAR_2);
 FUNC_4(1, 2, VAR_5);


 VAR_5 = FUNC_6(0, 1);
 VAR_5 &= ~(VAR_0);
 FUNC_8(0, 1, VAR_5);

 FUNC_2();

 if (FUNC_1(&VAR_3, ~0, VAR_4) == 0)
  return (-1);

 FUNC_5("Waiting for cpu%d to start\n", VAR_4);

 VAR_6 = 100;
 do {
  FUNC_0(1000);
  if (FUNC_1(&VAR_3, 0, ~0) != 0) {
   FUNC_5("CPU %d started\n", VAR_4);
   return (0);
  }
 } while (VAR_6--);

 FUNC_5("CPU %d failed to start\n", VAR_4);

 return (0);
}
