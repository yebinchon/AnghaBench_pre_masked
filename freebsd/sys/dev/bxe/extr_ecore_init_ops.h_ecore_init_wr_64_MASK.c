
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (struct bxe_softc*,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_1, uint32_t VAR_2,
        const uint32_t *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5 = VAR_0/4;
 uint32_t VAR_6 = VAR_4*2;
 uint64_t VAR_7 = 0;
 uint32_t VAR_8;


 VAR_7 = FUNC_1((*(VAR_3 + 1)), (*VAR_3));

 VAR_4 = FUNC_3((uint32_t)(VAR_0/8), VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  uint64_t *VAR_9 = ((uint64_t *)(FUNC_0(VAR_1))) + VAR_8;

  *VAR_9 = VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += VAR_5) {
  uint32_t VAR_10 = FUNC_3(VAR_5, VAR_6 - VAR_8);

  FUNC_2(VAR_1, VAR_2 + VAR_8*4, VAR_10);
 }
}
