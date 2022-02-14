
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int *) ;

void
FUNC_3(int VAR_4)
{
 if (!VAR_1)
  return;
 if (FUNC_2(FUNC_0(VAR_3), VAR_0, &VAR_2) == -1) {
  if (!VAR_4)
   FUNC_1("tcsetattr");
 } else
  VAR_1 = 0;
}
