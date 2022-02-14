
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_1, int VAR_2,
       uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 uint32_t VAR_6[2] = {0, 0};
 for (VAR_5 = 0; VAR_5 < 4 * VAR_0; VAR_5++) {
  FUNC_0(VAR_1, VAR_3 + VAR_5*4,
         VAR_2 * 4 * (VAR_5 % VAR_0));
  FUNC_1(VAR_1, VAR_4 + VAR_5*8,
     VAR_6, 2);
 }
}
