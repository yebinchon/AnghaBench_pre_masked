
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bnxt_link_info {int link_up; scalar_t__ phy_link_status; } ;
struct bnxt_softc {struct bnxt_link_info link_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;

__attribute__((used)) static int
FUNC_2(struct bnxt_softc *VAR_1, bool VAR_2)
{
 struct bnxt_link_info *VAR_3 = &VAR_1->link_info;
 uint8_t VAR_4 = VAR_3->link_up;
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5)
  goto exit;


 if (VAR_2) {
  if (VAR_3->phy_link_status ==
      VAR_0)
   VAR_3->link_up = 1;
  else
   VAR_3->link_up = 0;
  if (VAR_4 != VAR_3->link_up)
   FUNC_1(VAR_1);
 } else {

  VAR_3->link_up = 0;
 }

exit:
 return VAR_5;
}
