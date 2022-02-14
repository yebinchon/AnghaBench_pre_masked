
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;
typedef enum al_serdes_25g_tbus_obj { ____Placeholder_al_serdes_25g_tbus_obj } al_serdes_25g_tbus_obj ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct al_serdes_grp_obj*,int ,int ,int ,int ,int*) ;
 int FUNC_2 (struct al_serdes_grp_obj*,int ,int ,int ,int*) ;
 int FUNC_3 (struct al_serdes_grp_obj*,int ,int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
  struct al_serdes_grp_obj *VAR_13,
  enum al_serdes_lane VAR_14,
  enum al_serdes_25g_tbus_obj VAR_15,
  uint8_t VAR_16,
  uint16_t *VAR_17)
{
 uint8_t VAR_18, VAR_19, VAR_20;

 FUNC_0(VAR_14 < VAR_5);

 if (VAR_15 == VAR_4)
  VAR_18 = VAR_4;
 else if (VAR_15 == VAR_2)
  VAR_18 = VAR_2;
 else
  VAR_18 = VAR_3 + VAR_14;

 VAR_18 <<= VAR_0;

 FUNC_3(
   VAR_13,
   VAR_6,
   0,
   VAR_8,
   VAR_16);

 FUNC_3(
   VAR_13,
   VAR_6,
   0,
   VAR_7,
   VAR_18);

 FUNC_4(VAR_1);

 FUNC_2(
   VAR_13,
   VAR_6,
   0,
   VAR_12,
   &VAR_20);

 FUNC_1(
   VAR_13,
   VAR_6,
   VAR_9,
   VAR_10,
   VAR_11,
   &VAR_19);

 *VAR_17 = (VAR_19 << 8) | VAR_20;

 return 0;
}
