
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct timecounter {scalar_t__ tc_priv; } ;
struct a10_timer_softc {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct a10_timer_softc*,int ) ;

__attribute__((used)) static u_int
FUNC_2(struct timecounter *VAR_0)
{
 struct a10_timer_softc *VAR_1;
 uint32_t VAR_2;

 VAR_1 = (struct a10_timer_softc *)VAR_0->tc_priv;
 if (VAR_1 == ((void*)0))
  return (0);

 VAR_2 = FUNC_1(VAR_1, FUNC_0(0));

 return (~0u - VAR_2);
}
