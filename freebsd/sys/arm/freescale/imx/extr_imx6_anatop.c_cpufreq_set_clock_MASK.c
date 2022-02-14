
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct oppt {scalar_t__ mhz; int mv; } ;
struct imx6_anatop_softc {scalar_t__ cpu_curmhz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct imx6_anatop_softc*,scalar_t__) ;
 int FUNC_2 (struct imx6_anatop_softc*,scalar_t__,int*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct imx6_anatop_softc*,int ) ;

__attribute__((used)) static void
FUNC_8(struct imx6_anatop_softc * VAR_7, struct oppt *VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;


 if (VAR_8->mhz > VAR_7->cpu_curmhz) {
  FUNC_7(VAR_7, VAR_8->mv);
 }
 FUNC_2(VAR_7, VAR_8->mhz, &VAR_9, &VAR_10);
 FUNC_4(VAR_3,
     VAR_2);
 FUNC_4(VAR_6,
     VAR_1);

 VAR_12 = FUNC_3(VAR_0);
 VAR_12 &= ~VAR_4;
 VAR_12 |= VAR_10;
 FUNC_4(VAR_0, VAR_12);

 VAR_11 = 10000;
 while ((FUNC_3(VAR_0) &
     VAR_5) == 0)
  if (--VAR_11 == 0)
   FUNC_6("imx6_set_cpu_clock(): PLL never locked");

 FUNC_4(VAR_3,
     VAR_1);
 FUNC_5(VAR_9);


 if (VAR_8->mhz < VAR_7->cpu_curmhz)
  FUNC_7(VAR_7, VAR_8->mv);
 VAR_7->cpu_curmhz = VAR_8->mhz;


 FUNC_0(
     FUNC_1(VAR_7, VAR_7->cpu_curmhz) * 1000000 / 2);
}
