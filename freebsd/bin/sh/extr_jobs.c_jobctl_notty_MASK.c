
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (VAR_6 >= 0) {
  FUNC_0(VAR_6);
  VAR_6 = -1;
 }
 if (!VAR_3) {
  FUNC_2(VAR_0);
  FUNC_2(VAR_2);
  FUNC_2(VAR_1);
  VAR_4 = 1;
  return;
 }
 FUNC_1("sh: can't access tty; job control turned off\n");
 VAR_5 = 0;
}
