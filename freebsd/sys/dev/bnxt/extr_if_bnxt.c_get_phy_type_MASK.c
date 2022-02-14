
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct bnxt_link_info {scalar_t__ phy_type; int support_speeds; scalar_t__ media_type; } ;
struct bnxt_softc {struct bnxt_link_info link_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static uint8_t
FUNC_0(struct bnxt_softc *VAR_11)
{
 struct bnxt_link_info *VAR_12 = &VAR_11->link_info;
 uint8_t VAR_13 = VAR_12->phy_type;
 uint16_t VAR_14;

 if (VAR_13 != VAR_8)
  return VAR_13;


 VAR_14 = VAR_12->support_speeds;

 if (VAR_12->media_type ==
     VAR_2)
  return VAR_7;
 if (VAR_12->media_type ==
     VAR_0) {
  if (VAR_14 & VAR_10)
   return VAR_5;
  if (VAR_14 & VAR_9)
   return VAR_4;
  return VAR_3;
 }
 if (VAR_12->media_type ==
     VAR_1)
  return VAR_6;

 return VAR_13;
}
