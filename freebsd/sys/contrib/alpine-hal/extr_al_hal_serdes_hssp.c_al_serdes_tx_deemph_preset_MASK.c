
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_serdes_grp_obj {int dummy; } ;
typedef enum al_serdes_lane { ____Placeholder_al_serdes_lane } al_serdes_lane ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct al_serdes_grp_obj*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(
  struct al_serdes_grp_obj *VAR_3,
  enum al_serdes_lane VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_5 = VAR_2;

 VAR_6 = VAR_1;

 VAR_7 = VAR_0;

 FUNC_0("preset: new txdeemph: c0 = 0x%x c1 = 0x%x c-1 = 0x%x\n",
  VAR_5, VAR_6, VAR_7);

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
