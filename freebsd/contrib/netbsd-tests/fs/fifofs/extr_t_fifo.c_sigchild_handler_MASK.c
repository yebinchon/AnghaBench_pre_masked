
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
 if (VAR_2) {
  if (VAR_3 == VAR_0) {
   FUNC_1("Got sigchild\n");
  } else {
   FUNC_1("Got %d signal\n", VAR_3);
  }
  FUNC_0(VAR_1);
 }

}
