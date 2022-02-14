
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx6_anatop_softc {scalar_t__ cpu_curmhz; scalar_t__ cpu_minmhz; } ;


 int FUNC_0 (struct imx6_anatop_softc*,scalar_t__) ;
 int FUNC_1 (struct imx6_anatop_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct imx6_anatop_softc *VAR_0)
{

 if (VAR_0->cpu_curmhz > VAR_0->cpu_minmhz) {
  FUNC_1(VAR_0, FUNC_0(VAR_0, VAR_0->cpu_minmhz));
 }
}
