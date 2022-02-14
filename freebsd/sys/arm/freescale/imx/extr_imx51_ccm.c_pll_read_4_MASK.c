
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct imxccm_softc {int * pllbsh; int pllbst; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline uint32_t
FUNC_1(struct imxccm_softc *VAR_0, int VAR_1, int VAR_2)
{

 return (FUNC_0(VAR_0->pllbst, VAR_0->pllbsh[VAR_1 - 1], VAR_2));
}
