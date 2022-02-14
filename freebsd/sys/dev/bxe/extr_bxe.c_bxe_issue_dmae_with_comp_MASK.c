
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmae_cmd {int dummy; } ;
struct bxe_softc {scalar_t__ recovery_state; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,scalar_t__) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int* FUNC_3 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*,struct dmae_cmd*,int ) ;
 int* VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct bxe_softc *VAR_7,
                         struct dmae_cmd *VAR_8)
{
    uint32_t *VAR_9 = FUNC_3(VAR_7, *VAR_9);
    int VAR_10 = FUNC_4(VAR_7) ? 400000 : 4000;

    FUNC_1(VAR_7);


    *VAR_9 = 0;


    FUNC_7(VAR_7, VAR_8, FUNC_6(VAR_7));


    FUNC_5(5);

    while ((*VAR_9 & ~VAR_4) != VAR_2) {
        if (!VAR_10 ||
            (VAR_7->recovery_state != VAR_0 &&
             VAR_7->recovery_state != VAR_1)) {
            FUNC_0(VAR_7, "DMAE timeout! *wb_comp 0x%x recovery_state 0x%x\n",
                *VAR_9, VAR_7->recovery_state);
            FUNC_2(VAR_7);
            return (VAR_5);
        }

        VAR_10--;
        FUNC_5(50);
    }

    if (*VAR_9 & VAR_4) {
        FUNC_0(VAR_7, "DMAE PCI error! *wb_comp 0x%x recovery_state 0x%x\n",
                *VAR_9, VAR_7->recovery_state);
        FUNC_2(VAR_7);
        return (VAR_3);
    }

    FUNC_2(VAR_7);
    return (0);
}
