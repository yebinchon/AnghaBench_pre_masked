
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {char* dv_xname; } ;
struct i2s_softc {int sc_bsh; int sc_tag; TYPE_1__ sc_dev; int reg; } ;
struct TYPE_4__ {int cs_clock; int cs_reg; } ;


 int FUNC_0 (int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 TYPE_2__* VAR_21 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,...) ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_9(struct i2s_softc *VAR_23, u_int VAR_24, u_int VAR_25, u_int VAR_26)
{
 u_int VAR_27, VAR_28, VAR_29;
 u_int VAR_30 = 0, VAR_31, VAR_32;
 u_int VAR_33;


 if ((VAR_25 * 2) > VAR_26)
  return (VAR_0);

 if (VAR_26 != 32 && VAR_26 != 64)
  return (VAR_0);






 VAR_27 = VAR_24 * VAR_11;
 VAR_29 = VAR_11 / VAR_26;

 for (VAR_33 = 0; VAR_33 < VAR_12; ++VAR_33) {
  if ((VAR_21[VAR_33].cs_clock % VAR_27) == 0) {
   VAR_30 = VAR_21[VAR_33].cs_reg;
   VAR_28 = VAR_21[VAR_33].cs_clock / VAR_27;
   break;
  }
 }
 if (VAR_30 == 0)
  return (VAR_0);

 switch (VAR_28) {

 case 1:
  VAR_31 = 14;
  break;
 case 3:
  VAR_31 = 13;
  break;
 case 5:
  VAR_31 = 12;
  break;
 default:
  VAR_31 = (VAR_28 / 2) - 1;
  break;
 }
 VAR_30 |= (VAR_31 << 24) & VAR_10;

 switch (VAR_29) {
 case 1:
  VAR_31 = 8;
  break;
 case 3:
  VAR_31 = 9;
  break;
 default:
  VAR_31 = (VAR_29 / 2) - 1;
  break;
 }
 VAR_30 |= (VAR_31 << 20) & VAR_17;





 VAR_30 |= VAR_18;

 switch (VAR_26) {
 case 64:
  VAR_30 |= VAR_20;
  break;
 case 32:
  VAR_30 |= VAR_19;
  break;
 }


 VAR_32 = VAR_9 | VAR_16;

 switch (VAR_25) {
 case 16:
  VAR_32 |= VAR_7 | VAR_14;
  break;
 case 24:
  VAR_32 |= VAR_8 | VAR_15;
  break;
 default:
  return (VAR_0);
 }

 VAR_31 = FUNC_1(VAR_23->reg, VAR_6);
 if (VAR_31 != VAR_32)
  FUNC_4(VAR_23->reg, VAR_6, VAR_32);

 VAR_31 = FUNC_1(VAR_23->reg, VAR_3);
 if (VAR_31 != VAR_30) {





  FUNC_8("i2s_setup: changing format not supported yet.\n");
  return (VAR_1);
 }

 return (0);
}
