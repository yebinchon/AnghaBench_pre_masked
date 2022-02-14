
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct iwm_softc {int dummy; } ;


 int FUNC_0 (struct iwm_softc*,scalar_t__,int) ;

void
FUNC_1(struct iwm_softc *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 FUNC_0(VAR_0, (uint32_t)VAR_1, VAR_2 & 0xffffffff);
 FUNC_0(VAR_0, (uint32_t)VAR_1 + 4, VAR_2 >> 32);
}
