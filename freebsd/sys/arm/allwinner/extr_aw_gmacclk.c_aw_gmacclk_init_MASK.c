
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clknode {int dummy; } ;
struct aw_gmacclk_sc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aw_gmacclk_sc*) ;
 int FUNC_1 (struct aw_gmacclk_sc*) ;
 int VAR_2 ;
 int FUNC_2 (struct aw_gmacclk_sc*,int*) ;
 int VAR_3 ;


 int VAR_4 ;
 struct aw_gmacclk_sc* FUNC_3 (struct clknode*) ;
 int FUNC_4 (struct clknode*,int) ;

__attribute__((used)) static int
FUNC_5(struct clknode *VAR_5, device_t VAR_6)
{
 struct aw_gmacclk_sc *VAR_7;
 uint32_t VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_5);

 FUNC_0(VAR_7);
 FUNC_2(VAR_7, &VAR_8);
 FUNC_1(VAR_7);

 switch ((VAR_8 & VAR_3) >> VAR_4) {
 case 129:
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_9 = VAR_1;
  break;
 default:
  return (VAR_2);
 }

 FUNC_4(VAR_5, VAR_9);
 return (0);
}
