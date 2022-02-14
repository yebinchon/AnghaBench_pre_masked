
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rf {scalar_t__ rf_type; int rf_flags; int rf_calib; } ;
struct bwi_mac {struct bwi_rf mac_rf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bwi_mac*,int,int ) ;
 int FUNC_1 (struct bwi_mac*) ;

void
FUNC_2(struct bwi_mac *VAR_2)
{
 struct bwi_rf *VAR_3 = &VAR_2->mac_rf;

 if (VAR_3->rf_type == VAR_1) {

 } else {
  if (VAR_3->rf_flags & VAR_0)
   FUNC_0(VAR_2, 0x78, VAR_3->rf_calib);
  else
   FUNC_1(VAR_2);
 }
}
