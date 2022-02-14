
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(KBDC VAR_1)
{

 FUNC_1(VAR_1, 10);
 if (!FUNC_4(VAR_1))
  FUNC_2(VAR_0, "psm: keyboard controller failed.\n");

 if (FUNC_5(VAR_1) != 0)
  FUNC_0(1, (VAR_0, "psm: keyboard port failed.\n"));

}
