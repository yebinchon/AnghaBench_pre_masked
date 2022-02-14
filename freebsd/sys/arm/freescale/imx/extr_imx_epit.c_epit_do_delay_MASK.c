
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct epit_softc {int clkfreq; } ;


 int FUNC_0 (struct epit_softc*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, void *VAR_1)
{
 struct epit_softc *VAR_2 = VAR_1;
 uint64_t VAR_3, VAR_4, VAR_5, VAR_6;
 VAR_6 = 1 + ((uint64_t)VAR_0 * VAR_2->clkfreq) / 1000000;
 VAR_3 = VAR_5 = FUNC_0(VAR_2);
 VAR_4 = VAR_5 + VAR_6;
 while (VAR_3 < VAR_4) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 < VAR_5)
   VAR_3 += 1ULL << 32;
 }
}
