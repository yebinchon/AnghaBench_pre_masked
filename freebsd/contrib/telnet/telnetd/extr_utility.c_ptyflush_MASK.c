
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*,scalar_t__,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,scalar_t__,int) ;

void
FUNC_5(void)
{
 int VAR_9;

 if ((VAR_9 = VAR_6 - VAR_5) > 0) {
  FUNC_0(VAR_3 | VAR_2,
      FUNC_2("td: ptyflush %d chars\r\n", VAR_9));
  FUNC_0(VAR_2, FUNC_3("pd", VAR_5, VAR_9));
  VAR_9 = FUNC_4(VAR_7, VAR_5, VAR_9);
 }
 if (VAR_9 < 0) {
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
   return;
  FUNC_1(0);
 }
 VAR_5 += VAR_9;
 if (VAR_5 == VAR_6)
  VAR_5 = VAR_6 = VAR_8;
}
