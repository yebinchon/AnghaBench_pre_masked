
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(KBDC VAR_4, int VAR_5, int VAR_6)
{

 if (!(VAR_5 & VAR_2) && !FUNC_3(VAR_4)) {
  FUNC_1(VAR_4, 10);
  FUNC_5(VAR_4);
  FUNC_6(VAR_4);




  FUNC_4(VAR_4,
      FUNC_0(VAR_4) ? 0xff : VAR_1, VAR_6);
  if (VAR_3)
   FUNC_2("atkbd: failed to reset the keyboard.\n");
  return (VAR_0);
 }
 return (0);
}
