
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_thermal_softc {TYPE_1__* conf; } ;
struct TYPE_2__ {int (* to_temp ) (int,int) ;} ;


 int FUNC_0 (struct aw_thermal_softc*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(struct aw_thermal_softc *VAR_3, int VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2 + (VAR_4 * 4));
 VAR_5 = (VAR_5 >> VAR_1) & VAR_0;

 return (VAR_3->conf->to_temp(VAR_5, VAR_4));
}
