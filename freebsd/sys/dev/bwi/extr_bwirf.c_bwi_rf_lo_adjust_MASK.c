
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_tpctl {int dummy; } ;
struct bwi_rf_lo {int dummy; } ;
struct bwi_mac {int dummy; } ;


 int FUNC_0 (struct bwi_mac*,struct bwi_rf_lo const*) ;
 struct bwi_rf_lo* FUNC_1 (struct bwi_mac*,struct bwi_tpctl const*) ;

void
FUNC_2(struct bwi_mac *VAR_0, const struct bwi_tpctl *VAR_1)
{
 const struct bwi_rf_lo *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_2);
}
