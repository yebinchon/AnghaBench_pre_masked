
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_thermal_softc {TYPE_1__* conf; } ;
struct TYPE_2__ {int (* to_temp ) (int ,int) ;} ;


 int FUNC_0 (struct aw_thermal_softc*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct aw_thermal_softc *VAR_1, int VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0 + (VAR_2 * 4));

 return (VAR_1->conf->to_temp(VAR_3, VAR_2));
}
