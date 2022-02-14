
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwi_rf_lo {int dummy; } ;
struct TYPE_2__ {struct bwi_rf_lo* rf_lo; } ;
struct bwi_mac {TYPE_1__ mac_rf; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static __inline struct bwi_rf_lo *
FUNC_1(struct bwi_mac *VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_2 + (14 * (VAR_3 / 2));
 FUNC_0(VAR_4 < VAR_0, ("n %d", VAR_4));

 return &VAR_1->mac_rf.rf_lo[VAR_4];
}
