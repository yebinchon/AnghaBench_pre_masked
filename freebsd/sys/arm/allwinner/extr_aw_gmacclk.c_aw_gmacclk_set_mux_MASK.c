
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode {int dummy; } ;
struct aw_gmacclk_sc {int dummy; } ;




 int FUNC_0 (struct aw_gmacclk_sc*) ;
 int FUNC_1 (struct aw_gmacclk_sc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct aw_gmacclk_sc*,int*) ;
 int FUNC_3 (struct aw_gmacclk_sc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct aw_gmacclk_sc* FUNC_4 (struct clknode*) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_11, int VAR_12)
{
 struct aw_gmacclk_sc *VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 VAR_13 = FUNC_4(VAR_11);
 VAR_18 = 0;

 switch (VAR_12) {
 case 129:
  VAR_15 = VAR_8;
  VAR_16 = VAR_4;
  VAR_17 = VAR_1;
  break;
 case 128:
  VAR_15 = VAR_9;
  VAR_16 = VAR_5;
  VAR_17 = VAR_0;
  break;
 default:
  return (VAR_2);
 }

 FUNC_0(VAR_13);
 FUNC_2(VAR_13, &VAR_14);
 VAR_14 &= ~(VAR_7 | VAR_3);
 VAR_14 |= (VAR_15 << VAR_10);
 VAR_14 |= (VAR_16 << VAR_6);
 FUNC_3(VAR_13, VAR_14);
 FUNC_1(VAR_13);

 return (0);
}
