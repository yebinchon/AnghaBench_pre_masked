
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct imx_gpt_softc {int clkfreq; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx_gpt_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_1, void *VAR_2)
{
 struct imx_gpt_softc *VAR_3 = VAR_2;
 uint64_t VAR_4, VAR_5, VAR_6, VAR_7;
 VAR_7 = 1 + ((uint64_t)VAR_1 * VAR_3->clkfreq) / 1000000;
 VAR_4 = VAR_6 = FUNC_0(VAR_3, VAR_0);
 VAR_5 = VAR_6 + VAR_7;
 while (VAR_4 < VAR_5) {
  VAR_4 = FUNC_0(VAR_3, VAR_0);
  if (VAR_4 < VAR_6)
   VAR_4 += 1ULL << 32;
 }
}
