
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int asic_revision; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(POCE_SOFTC VAR_3)
{
 if((VAR_3->flags & VAR_1) && ((VAR_3->asic_revision & 0xFF) < 2)) {
  return VAR_2;
 }
 return VAR_0;
}
