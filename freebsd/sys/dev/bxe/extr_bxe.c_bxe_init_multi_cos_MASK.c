
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int max_cos; int* prio_to_cos; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_1)
{
    int VAR_2, VAR_3;

    uint32_t VAR_4 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_3 = ((VAR_4 & (0xf << (VAR_2 * 4))) >> (VAR_2 * 4));
        if (VAR_3 < VAR_1->max_cos) {
            VAR_1->prio_to_cos[VAR_2] = VAR_3;
        } else {
            FUNC_0(VAR_1, "Invalid COS %d for priority %d "
                      "(max COS is %d), setting to 0\n",
                  VAR_3, VAR_2, (VAR_1->max_cos - 1));
            VAR_1->prio_to_cos[VAR_2] = 0;
        }
    }
}
