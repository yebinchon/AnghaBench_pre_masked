
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct ar5211_desc {int ds_link; } ;


 struct ar5211_desc* FUNC_0 (void*) ;

void
FUNC_1(struct ath_hal *VAR_0, void *VAR_1, uint32_t **VAR_2)
{
 struct ar5211_desc *VAR_3 = FUNC_0(VAR_1);

 *VAR_2 = &VAR_3->ds_link;
}
