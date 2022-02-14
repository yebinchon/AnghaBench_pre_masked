
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_5)
{
    uint32_t VAR_6 = FUNC_2(VAR_5, VAR_4);

    VAR_6 &= ~(VAR_3 |
             VAR_2 |
             VAR_1);

    FUNC_0(VAR_5, VAR_0, "write %x to IGU\n", VAR_6);


    FUNC_4();

    FUNC_3(VAR_5, VAR_4, VAR_6);
    if (FUNC_2(VAR_5, VAR_4) != VAR_6) {
        FUNC_1(VAR_5, "proper val not read from IGU!\n");
    }
}
