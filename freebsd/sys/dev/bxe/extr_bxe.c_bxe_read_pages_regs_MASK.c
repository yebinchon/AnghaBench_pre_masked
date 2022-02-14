
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct reg_addr {int size; int addr; int presets; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct bxe_softc*,int) ;
 int FUNC_2 (struct bxe_softc*,int const,int const) ;
 int* FUNC_3 (struct bxe_softc*) ;
 struct reg_addr* FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int* FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_9(struct bxe_softc *VAR_0, uint32_t *VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3, VAR_4, VAR_5, VAR_6;


    const uint32_t *VAR_7 = FUNC_3(VAR_0);

    int VAR_8 = FUNC_6(VAR_0);

    const uint32_t *VAR_9 = FUNC_7(VAR_0);

    int VAR_10 = FUNC_8(VAR_0);

    const struct reg_addr *VAR_11 = FUNC_4(VAR_0);

    int VAR_12 = FUNC_5(VAR_0);
    uint32_t VAR_13, VAR_14;

    for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < VAR_10; VAR_4++) {
            FUNC_2(VAR_0, VAR_9[VAR_4], VAR_7[VAR_3]);

            for (VAR_5 = 0; VAR_5 < VAR_12; VAR_5++) {
                if (FUNC_0(VAR_11[VAR_5].presets, VAR_2)) {
                    VAR_14 = VAR_11[VAR_5].size;
                    for (VAR_6 = 0; VAR_6 < VAR_14; VAR_6++) {
                        VAR_13 = VAR_11[VAR_5].addr + VAR_6*4;
                        *VAR_1++ = FUNC_1(VAR_0, VAR_13);
                    }
                }
            }
        }
    }
    return;
}
