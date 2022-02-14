
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmae_cmd {int dummy; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int,int) ;
 int* VAR_1 ;

void
FUNC_1(struct bxe_softc *VAR_2,
              struct dmae_cmd *VAR_3,
              int VAR_4)
{
    uint32_t VAR_5;
    int VAR_6;

    VAR_5 = (VAR_0 + (sizeof(struct dmae_cmd) * VAR_4));
    for (VAR_6 = 0; VAR_6 < ((sizeof(struct dmae_cmd) / 4)); VAR_6++) {
        FUNC_0(VAR_2, (VAR_5 + (VAR_6 * 4)), *(((uint32_t *)VAR_3) + VAR_6));
    }

    FUNC_0(VAR_2, VAR_1[VAR_4], 1);
}
