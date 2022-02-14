
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;

void
FUNC_6(int VAR_3, int VAR_4)
{
 if (VAR_4) {
  if ((VAR_1[VAR_3] == 0 && FUNC_1(VAR_3)) ||
      FUNC_2(VAR_3))
   return;
  FUNC_5(VAR_3);
  VAR_1[VAR_3]++;
 }
 FUNC_3((const char *)VAR_2, VAR_3);

 FUNC_0(VAR_0, FUNC_4("td: send dont", VAR_3));
}
