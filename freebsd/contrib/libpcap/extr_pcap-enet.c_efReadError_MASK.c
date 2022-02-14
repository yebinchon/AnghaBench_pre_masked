
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(int VAR_3, char *VAR_4)
{
 if (VAR_1 == VAR_0) {
  if (FUNC_2(VAR_3, 0, 0) < 0) {
   FUNC_3("tcpdump: efReadError/lseek");
   FUNC_0(-1);
  }
  else
   return;
 }
 else {
  (void) FUNC_1(VAR_2, "tcpdump: ");
  FUNC_3(VAR_4);
  FUNC_0(-1);
 }
}
