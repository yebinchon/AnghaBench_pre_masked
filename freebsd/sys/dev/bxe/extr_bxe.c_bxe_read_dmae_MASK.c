
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmae_cmd {int src_addr_lo; int len; int dst_addr_hi; int dst_addr_lo; scalar_t__ src_addr_hi; } ;
struct bxe_softc {int dmae_ready; } ;


 int* FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*,int *) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct bxe_softc*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bxe_softc*,struct dmae_cmd*) ;
 int FUNC_8 (struct bxe_softc*,char*) ;
 int FUNC_9 (struct bxe_softc*,struct dmae_cmd*,int ,int ) ;
 int FUNC_10 (struct bxe_softc*,int) ;
 int * VAR_2 ;

void
FUNC_11(struct bxe_softc *VAR_3,
              uint32_t VAR_4,
              uint32_t VAR_5)
{
    struct dmae_cmd VAR_6;
    uint32_t *VAR_7;
    int VAR_8, VAR_9;

    FUNC_3(VAR_3, (VAR_5 <= 4), ("DMAE read length is %d", VAR_5));

    if (!VAR_3->dmae_ready) {
        VAR_7 = FUNC_0(VAR_3, VAR_2[0]);

        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
            VAR_7[VAR_8] = (FUNC_2(VAR_3)) ?
                          FUNC_10(VAR_3, (VAR_4 + (VAR_8 * 4))) :
                          FUNC_4(VAR_3, (VAR_4 + (VAR_8 * 4)));
        }

        return;
    }


    FUNC_9(VAR_3, &VAR_6, VAR_1, VAR_0);


    VAR_6.src_addr_lo = (VAR_4 >> 2);
    VAR_6.src_addr_hi = 0;
    VAR_6.dst_addr_lo = FUNC_6(FUNC_1(VAR_3, VAR_2));
    VAR_6.dst_addr_hi = FUNC_5(FUNC_1(VAR_3, VAR_2));
    VAR_6.len = VAR_5;


    if ((VAR_9 = FUNC_7(VAR_3, &VAR_6)) != 0) {
        FUNC_8(VAR_3, ("DMAE failed (%d)\n", VAR_9));
    }
}
