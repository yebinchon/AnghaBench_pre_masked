
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ capExtended; } ;
struct TYPE_3__ {scalar_t__ model; } ;
struct psm_softc {TYPE_2__ synhw; TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct psm_softc *VAR_2) {
 int VAR_3;


 if (VAR_2->hw.model != VAR_0) {
  if (VAR_1 == 0)





   return (0x04);
  else





   return (0x00);
 }

 VAR_3 = 0xc4;


 if (VAR_2->synhw.capExtended)
  VAR_3 |= 1;

 return VAR_3;
}
