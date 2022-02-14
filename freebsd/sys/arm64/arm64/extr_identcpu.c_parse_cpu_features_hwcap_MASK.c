
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int ;
struct TYPE_2__ {int id_aa64pfr0; int id_aa64isar1; int id_aa64isar0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;


 int FUNC_6 (int ) ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_12 (int ) ;


 int FUNC_13 (int ) ;


 int FUNC_14 (int ) ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_15 (int ) ;
 TYPE_1__* VAR_30 ;

__attribute__((used)) static u_long
FUNC_16(u_int VAR_31)
{
 u_long VAR_32 = 0;

 if (FUNC_3(VAR_30[VAR_31].id_aa64isar0) == VAR_21)
  VAR_32 |= VAR_2;

 if (FUNC_8(VAR_30[VAR_31].id_aa64isar0) == VAR_24)
  VAR_32 |= VAR_17;

 if (FUNC_7(VAR_30[VAR_31].id_aa64isar0) == VAR_23)
  VAR_32 |= VAR_16;

 if (FUNC_4(VAR_30[VAR_31].id_aa64isar0) == VAR_22)
  VAR_32 |= VAR_3;

 if (FUNC_1(VAR_30[VAR_31].id_aa64isar0) == VAR_19)
  VAR_32 |= VAR_4;

 if (FUNC_2(VAR_30[VAR_31].id_aa64isar0) == VAR_20)
  VAR_32 |= VAR_5;

 switch (FUNC_6(VAR_30[VAR_31].id_aa64isar0)) {
  case 132:
   VAR_32 |= VAR_14;
   break;
  case 133:
   VAR_32 |= VAR_14 | VAR_15;
   break;
 default:
  break;
 }

 if (FUNC_5(VAR_30[VAR_31].id_aa64isar0))
  VAR_32 |= VAR_13;

 switch (FUNC_0(VAR_30[VAR_31].id_aa64isar0)) {
 case 135:
  VAR_32 |= VAR_0;
  break;
 case 134:
  VAR_32 |= VAR_12 | VAR_0;
  break;
 default:
  break;
 }

 if (FUNC_12(VAR_30[VAR_31].id_aa64isar1) == VAR_28)
  VAR_32 |= VAR_11;

 if (FUNC_10(VAR_30[VAR_31].id_aa64isar1) == VAR_26)
  VAR_32 |= VAR_7;

 if (FUNC_11(VAR_30[VAR_31].id_aa64isar1) == VAR_27)
  VAR_32 |= VAR_10;

 if (FUNC_9(VAR_30[VAR_31].id_aa64isar1) == VAR_25)
  VAR_32 |= VAR_6;

 if (FUNC_15(VAR_30[VAR_31].id_aa64pfr0) == VAR_29)
  VAR_32 |= VAR_18;

 switch (FUNC_13(VAR_30[VAR_31].id_aa64pfr0)) {
 case 130:
  VAR_32 |= VAR_1;
  break;
 case 131:
  VAR_32 |= VAR_1 | VAR_2;
  break;
 default:
  break;
 }

 switch (FUNC_14(VAR_30[VAR_31].id_aa64pfr0)) {
 case 128:
  VAR_32 |= VAR_8;
  break;
 case 129:
  VAR_32 |= VAR_8 | VAR_9;
  break;
 default:
  break;
 }

 return (VAR_32);
}
