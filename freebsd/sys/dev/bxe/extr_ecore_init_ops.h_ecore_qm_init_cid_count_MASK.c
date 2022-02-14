
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bxe_softc {int dummy; } ;





 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,int ,int) ;
 int FUNC_2 (struct bxe_softc*) ;

__attribute__((used)) static void FUNC_3(struct bxe_softc *VAR_1, int VAR_2,
        uint8_t VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_2)) {
  switch (VAR_3) {
  case 129:

  case 128:
   FUNC_1(VAR_1, VAR_0 + VAR_4*4,
          VAR_2/16 - 1);
   break;
  case 130:
   break;
  }
 }
}
