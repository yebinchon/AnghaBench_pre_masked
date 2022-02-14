
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef size_t u_int16_t ;
struct TYPE_6__ {int Config; } ;
struct TYPE_5__ {int NvramChannelCfg; int NvramScsiId; } ;
typedef TYPE_1__* PNVRAMTYPE ;
typedef TYPE_2__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_1__* VAR_26 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int
FUNC_4(PACB VAR_27, u_int16_t VAR_28)
{
 PNVRAMTYPE VAR_29;
 u_int16_t VAR_30;
 u_int8_t VAR_31;

 VAR_29 = &VAR_26[VAR_28];


 FUNC_3(VAR_12, VAR_24);

 FUNC_3(0x00, VAR_14);
 FUNC_3(0x00, VAR_21);

 FUNC_2(VAR_2, VAR_19);

 VAR_27->Config = VAR_4 | VAR_5;
 if (FUNC_1(VAR_16) & VAR_25)
  VAR_27->Config |= VAR_7;
 if (VAR_29->NvramChannelCfg & VAR_9)
  VAR_27->Config |= VAR_6;
 if (VAR_27->Config & VAR_5)
  VAR_31 = VAR_11 | VAR_8 | VAR_0 | VAR_10;
 else
  VAR_31 = VAR_11 | VAR_8 | VAR_0 ;
 FUNC_3(VAR_31,VAR_17);

 FUNC_3(0x13, VAR_18);

 VAR_31 = VAR_29->NvramScsiId;
 FUNC_3(VAR_31, VAR_20);

 FUNC_3(0x00, VAR_23);

 VAR_30 = FUNC_0(VAR_15) & 0x7F;
 FUNC_2(VAR_30, VAR_15);

 VAR_30 = FUNC_0(VAR_13) | VAR_1;
 FUNC_2(VAR_30, VAR_13);

 FUNC_1(VAR_22);

 FUNC_3(0x7F, VAR_21);
 FUNC_3(VAR_3, VAR_14);
 return (0);
}
