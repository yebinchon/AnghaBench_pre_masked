
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_4, int VAR_5)
{
 if (&VAR_2[VAR_4] == &VAR_3 && !VAR_5 && VAR_3) {
  if (FUNC_3(FUNC_1()) == -1)
   FUNC_0("setgid");
  if (FUNC_4(FUNC_2()) == -1)
   FUNC_0("setuid");
 }
 VAR_2[VAR_4] = VAR_5;
 if (VAR_5) {

  if (&VAR_2[VAR_4] == &VAR_1)
   VAR_0 = 0;
  else if (&VAR_2[VAR_4] == &VAR_0)
   VAR_1 = 0;
 }
}
