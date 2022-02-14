
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct TYPE_3__ {int e3; int e2; int e1h; int e1; } ;
struct TYPE_4__ {TYPE_1__ reg_mask; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_3(struct bxe_softc *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_1))
  return VAR_0[VAR_2].reg_mask.e1;
 else if (FUNC_1(VAR_1))
  return VAR_0[VAR_2].reg_mask.e1h;
 else if (FUNC_2(VAR_1))
  return VAR_0[VAR_2].reg_mask.e2;
 else
  return VAR_0[VAR_2].reg_mask.e3;
}
