
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct arm_tmr_softc {int dummy; } ;
typedef int int32_t ;
struct TYPE_2__ {int tc_frequency; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (struct arm_tmr_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, void *VAR_3)
{
 struct arm_tmr_softc *VAR_4 = VAR_3;
 int32_t VAR_5;
 int32_t VAR_6;
 uint32_t VAR_7, VAR_8;


 VAR_5 = ((VAR_1.tc_frequency / 1000000) + 1);







 if (VAR_2 >= (0x80000000U / VAR_5))
  VAR_6 = (0x80000000U / VAR_5) - 1;
 else
  VAR_6 = VAR_2 * VAR_5;

 VAR_7 = FUNC_0(VAR_4, VAR_0);

 while (VAR_6 > 0) {
  VAR_8 = FUNC_0(VAR_4, VAR_0);
  VAR_6 -= (int32_t)(VAR_8 - VAR_7);
  VAR_7 = VAR_8;
 }
}
