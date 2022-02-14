
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int,int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_1, uint32_t VAR_2, int VAR_3,
       uint32_t VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6 = (((VAR_4*4) > VAR_0) ? VAR_0 : (VAR_4*4));
 uint32_t VAR_7 = VAR_6/4;
 uint32_t VAR_8;

 FUNC_0(FUNC_1(VAR_1), (uint8_t)VAR_3, VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8 += VAR_7) {
  uint32_t VAR_9 = FUNC_3(VAR_7, VAR_4 - VAR_8);

  FUNC_2(VAR_1, VAR_2 + VAR_8*4, VAR_9, VAR_5);
 }
}
