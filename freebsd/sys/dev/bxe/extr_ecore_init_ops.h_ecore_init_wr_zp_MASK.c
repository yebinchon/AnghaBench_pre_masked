
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int const*,int) ;
 int * FUNC_4 (struct bxe_softc*,int,int const*) ;
 int FUNC_5 (struct bxe_softc*,int,int) ;

__attribute__((used)) static void FUNC_6(struct bxe_softc *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
        uint32_t VAR_3)
{
 const uint8_t *VAR_4 = ((void*)0);
 int VAR_5;
 uint32_t VAR_6;

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_4) + VAR_3*4;

 VAR_5 = FUNC_3(VAR_0, VAR_4, VAR_2);
 if (VAR_5)
  return;


 VAR_2 = FUNC_2(VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  ((uint32_t *)FUNC_1(VAR_0))[VAR_6] = (uint32_t)
    FUNC_0(((uint32_t *)FUNC_1(VAR_0))[VAR_6]);

 FUNC_5(VAR_0, VAR_1, VAR_2);
}
