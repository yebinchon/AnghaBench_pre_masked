
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(void)
{

  if (FUNC_0(VAR_1)) {

    u_long VAR_2 = FUNC_2();

    if (FUNC_3(VAR_2, VAR_0) != 1)
      FUNC_1("failed to de-register Amd program %lu, version %lu",
    VAR_2, VAR_0);
  }
}
