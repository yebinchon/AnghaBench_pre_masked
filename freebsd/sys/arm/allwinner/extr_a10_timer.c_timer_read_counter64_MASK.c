
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct a10_timer_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct a10_timer_softc*,int ) ;
 int FUNC_1 (struct a10_timer_softc*,int ,int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct a10_timer_softc *VAR_4)
{
 uint32_t VAR_5, VAR_6;


 FUNC_1(VAR_4, VAR_0, VAR_1);
 while (FUNC_0(VAR_4, VAR_0) & VAR_1)
  continue;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_5 = FUNC_0(VAR_4, VAR_3);

 return (((uint64_t)VAR_6 << 32) | VAR_5);
}
