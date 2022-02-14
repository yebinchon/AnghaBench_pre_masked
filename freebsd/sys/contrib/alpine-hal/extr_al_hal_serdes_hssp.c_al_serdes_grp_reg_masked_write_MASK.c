
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_reg_type { ____Placeholder_al_serdes_reg_type } al_serdes_reg_type ;
typedef enum al_serdes_reg_page { ____Placeholder_al_serdes_reg_page } al_serdes_reg_page ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct al_serdes_grp_obj*,int,int,int ) ;
 int FUNC_1 (struct al_serdes_grp_obj*,int,int,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(
 struct al_serdes_grp_obj *VAR_3,
 enum al_serdes_reg_page VAR_4,
 enum al_serdes_reg_type VAR_5,
 uint16_t VAR_6,
 uint8_t VAR_7,
 uint8_t VAR_8)
{
 uint8_t VAR_9;
 enum al_serdes_reg_page VAR_10 = VAR_4;
 enum al_serdes_reg_page VAR_11 = VAR_4;
 enum al_serdes_reg_page VAR_12;

 if (VAR_4 == VAR_0) {
  VAR_10 = VAR_1;
  VAR_11 = VAR_2;
 }

 for (VAR_12 = VAR_10; VAR_12 <= VAR_11; ++VAR_12) {
  VAR_9 = FUNC_0(VAR_3, VAR_12, VAR_5, VAR_6);
  VAR_9 &= ~VAR_7;
  VAR_9 |= VAR_8;
  FUNC_1(VAR_3, VAR_12, VAR_5, VAR_6, VAR_9);
 }
}
