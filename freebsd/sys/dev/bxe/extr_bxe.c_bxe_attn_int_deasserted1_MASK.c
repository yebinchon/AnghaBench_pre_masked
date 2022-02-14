
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int sp_err_timeout_task; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct bxe_softc*,char*) ;
 int VAR_8 ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_10,
                         uint32_t VAR_11)
{
    int VAR_12 = FUNC_4(VAR_10);
    int VAR_13;
    uint32_t VAR_14;
    boolean_t VAR_15 = VAR_3;

    if (VAR_11 & VAR_0) {
        VAR_14 = FUNC_2(VAR_10, VAR_2);
        FUNC_0(VAR_10, "DB hw attention 0x%08x\n", VAR_14);

        if (VAR_14 & 0x2) {
            FUNC_0(VAR_10, "FATAL error from DORQ\n");
     VAR_15 = VAR_7;
        }
    }

    if (VAR_11 & VAR_4) {
        VAR_13 = (VAR_12 ? VAR_6 :
                             VAR_5);

        VAR_14 = FUNC_2(VAR_10, VAR_13);
        VAR_14 &= ~(VAR_11 & VAR_4);
        FUNC_3(VAR_10, VAR_13, VAR_14);

        FUNC_0(VAR_10, "FATAL HW block attention set1 0x%08x\n",
              (uint32_t)(VAR_11 & VAR_4));
        VAR_15 = VAR_7;
        FUNC_5(VAR_10, ("HW block attention set1\n"));
    }
    if(VAR_15) {
        FUNC_1(VAR_10, VAR_1);
        FUNC_6(VAR_9,
           &VAR_10->sp_err_timeout_task, VAR_8/10);
    }

}
