
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct arm_tmr_softc {int physical; scalar_t__ (* get_cntxct ) (int ) ;} ;
typedef int int32_t ;
struct TYPE_2__ {int tc_frequency; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, void *VAR_2)
{
 struct arm_tmr_softc *VAR_3 = VAR_2;
 int32_t VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7;


 VAR_5 = ((VAR_0.tc_frequency / 1000000) + 1);







 if (VAR_1 >= (0x80000000U / VAR_5))
  VAR_4 = (0x80000000U / VAR_5) - 1;
 else
  VAR_4 = VAR_1 * VAR_5;

 VAR_6 = VAR_3->get_cntxct(VAR_3->physical);

 while (VAR_4 > 0) {
  VAR_7 = VAR_3->get_cntxct(VAR_3->physical);
  VAR_4 -= (int32_t)(VAR_7 - VAR_6);
  VAR_6 = VAR_7;
 }
}
