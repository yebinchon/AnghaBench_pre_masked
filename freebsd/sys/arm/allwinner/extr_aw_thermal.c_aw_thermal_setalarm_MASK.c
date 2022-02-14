
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_thermal_softc {TYPE_1__* conf; } ;
struct TYPE_2__ {int (* to_reg ) (int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aw_thermal_softc*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct aw_thermal_softc*,scalar_t__,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct aw_thermal_softc *VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2 + (VAR_4 * 4));
 VAR_6 &= ~(VAR_0 << VAR_1);
 VAR_6 |= (VAR_3->conf->to_reg(VAR_5, VAR_4) << VAR_1);
 FUNC_1(VAR_3, VAR_2 + (VAR_4 * 4), VAR_6);
}
