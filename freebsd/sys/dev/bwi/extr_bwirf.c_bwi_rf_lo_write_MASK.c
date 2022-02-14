
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwi_rf_lo {scalar_t__ ctrl_hi; scalar_t__ ctrl_lo; } ;
struct bwi_mac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_mac*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bwi_mac *VAR_1, const struct bwi_rf_lo *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = (uint8_t)VAR_2->ctrl_lo;
 VAR_3 |= ((uint8_t)VAR_2->ctrl_hi) << 8;

 FUNC_0(VAR_1, VAR_0, VAR_3);
}
