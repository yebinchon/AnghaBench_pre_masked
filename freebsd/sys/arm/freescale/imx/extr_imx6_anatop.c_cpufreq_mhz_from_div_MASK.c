
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct imx6_anatop_softc {int refosc_mhz; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct imx6_anatop_softc *VAR_0, uint32_t VAR_1,
    uint32_t VAR_2)
{

 return ((VAR_0->refosc_mhz * (VAR_2 / 2)) / (VAR_1 + 1));
}
