
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmae_cmd {int dst_addr_lo; int len; scalar_t__ dst_addr_hi; int src_addr_hi; int src_addr_lo; } ;
struct bxe_softc {int dmae_ready; } ;
typedef int bus_addr_t ;


 int FUNC_0 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bxe_softc*,struct dmae_cmd*) ;
 int FUNC_6 (struct bxe_softc*,char*) ;
 int FUNC_7 (struct bxe_softc*,struct dmae_cmd*,int ,int ) ;
 int FUNC_8 (struct bxe_softc*,int,int ,int) ;
 int FUNC_9 (struct bxe_softc*,int,int ,int) ;
 int * VAR_2 ;

void
FUNC_10(struct bxe_softc *VAR_3,
               bus_addr_t VAR_4,
               uint32_t VAR_5,
               uint32_t VAR_6)
{
    struct dmae_cmd VAR_7;
    int VAR_8;

    if (!VAR_3->dmae_ready) {
        FUNC_2(VAR_3, (VAR_6 <= 4), ("DMAE not ready and length is %d", VAR_6));

        if (FUNC_1(VAR_3)) {
            FUNC_8(VAR_3, VAR_5, FUNC_0(VAR_3, VAR_2[0]), VAR_6);
        } else {
            FUNC_9(VAR_3, VAR_5, FUNC_0(VAR_3, VAR_2[0]), VAR_6);
        }

        return;
    }


    FUNC_7(VAR_3, &VAR_7, VAR_1, VAR_0);


    VAR_7.src_addr_lo = FUNC_4(VAR_4);
    VAR_7.src_addr_hi = FUNC_3(VAR_4);
    VAR_7.dst_addr_lo = (VAR_5 >> 2);
    VAR_7.dst_addr_hi = 0;
    VAR_7.len = VAR_6;


    if ((VAR_8 = FUNC_5(VAR_3, &VAR_7)) != 0) {
        FUNC_6(VAR_3, ("DMAE failed (%d)\n", VAR_8));
    }
}
