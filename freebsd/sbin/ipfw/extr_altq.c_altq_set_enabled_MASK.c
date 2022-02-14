
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_3("/dev/pf", VAR_5);
 if (VAR_8 == -1)
  FUNC_1(VAR_4,
      "altq support opening pf(4) control device");
 if (VAR_7) {
  if (FUNC_2(VAR_8, VAR_0) != 0 && VAR_6 != VAR_2)
   FUNC_1(VAR_4, "enabling altq");
 } else {
  if (FUNC_2(VAR_8, VAR_1) != 0 && VAR_6 != VAR_3)
   FUNC_1(VAR_4, "disabling altq");
 }
 FUNC_0(VAR_8);
}
