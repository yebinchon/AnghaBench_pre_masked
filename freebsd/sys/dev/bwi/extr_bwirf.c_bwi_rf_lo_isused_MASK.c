
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rf_lo {int dummy; } ;
struct bwi_rf {int rf_lo_used; struct bwi_rf_lo const* rf_lo; } ;
struct bwi_mac {struct bwi_rf mac_rf; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static __inline int
FUNC_2(struct bwi_mac *VAR_1, const struct bwi_rf_lo *VAR_2)
{
 struct bwi_rf *VAR_3 = &VAR_1->mac_rf;
 int VAR_4;

 VAR_4 = VAR_2 - VAR_3->rf_lo;
 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_0, ("idx %d", VAR_4));

 return FUNC_1(VAR_3->rf_lo_used, VAR_4);
}
