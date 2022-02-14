
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct padctl_softc {int hs_term_range_adj; int hs_squelch_level; int hs_iref_cap; int hs_curr_level_123; int hs_curr_level_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct padctl_softc *VAR_1)
{
 uint32_t VAR_2;


 VAR_2 = FUNC_5(VAR_0);
 VAR_1->hs_curr_level_0 = FUNC_0(VAR_2);
 VAR_1->hs_curr_level_123 = FUNC_1(VAR_2);
 VAR_1->hs_iref_cap = FUNC_2(VAR_2);
 VAR_1->hs_squelch_level = FUNC_3(VAR_2);
 VAR_1->hs_term_range_adj = FUNC_4(VAR_2);
}
