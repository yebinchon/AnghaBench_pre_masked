
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__ VAR_18 ;
 int FUNC_1 (char*,int ,char*,int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,char*,int,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_19, int VAR_20)
{
 static int VAR_21 = 1000000;
 char VAR_22[64];
 int VAR_23;

 FUNC_5("hw.uart.console");
 VAR_16 = VAR_19;
 VAR_17 = VAR_20;
 if ((VAR_18.c_flags & (VAR_2 | VAR_3)) == 0)
  return;

 FUNC_3(VAR_17 + VAR_10, VAR_0 | VAR_1);
 FUNC_3(VAR_17 + VAR_13, FUNC_0(VAR_19) & 0xff);
 FUNC_3(VAR_17 + VAR_12, FUNC_0(VAR_19) >> 8);
 FUNC_3(VAR_17 + VAR_10, VAR_1);
 FUNC_3(VAR_17 + VAR_15, VAR_9 | VAR_8);

 VAR_23 = 0;
 do
  FUNC_2(VAR_17 + VAR_11);
 while (FUNC_2(VAR_17 + VAR_14) & VAR_7 && ++VAR_23 < VAR_21);

 if (VAR_23 < VAR_21) {
  VAR_18.c_flags |= (VAR_4 | VAR_5);
  FUNC_4(VAR_22, "io:%d,br:%d", VAR_17, VAR_16);
  FUNC_1("hw.uart.console", VAR_6, VAR_22, ((void*)0), ((void*)0));
 } else
  VAR_18.c_flags &= ~(VAR_4 | VAR_5);
}
