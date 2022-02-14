
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oce_phy_info {scalar_t__ phy_type; scalar_t__ interface_type; } ;
typedef int boolean_t ;
typedef int POCE_SOFTC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct oce_phy_info*) ;

__attribute__((used)) static boolean_t
FUNC_1(POCE_SOFTC VAR_4)
{
 int VAR_5 = 0;
 struct oce_phy_info VAR_6;

 VAR_5 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_5)
  return VAR_0;

 if ((VAR_6.phy_type == VAR_2) &&
  (VAR_6.interface_type == VAR_1)) {
  return VAR_3;
 }

 return VAR_0;
}
