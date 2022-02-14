
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5(int VAR_5)
{
  if (VAR_4) {
    if (VAR_3 != VAR_1) {
      if (VAR_3 != VAR_0)
 return;
      FUNC_4();
    }
  }
  if (VAR_4) {
    FUNC_2(VAR_2, "Finishing with status %d", VAR_5);
  } else {
    FUNC_0("background process exiting with status %d", VAR_5);
  }

  FUNC_1(VAR_5);
}
