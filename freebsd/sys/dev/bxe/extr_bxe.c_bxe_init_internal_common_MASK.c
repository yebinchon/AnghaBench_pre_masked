
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(struct bxe_softc *VAR_7)
{
    int VAR_8;





    for (VAR_8 = 0; VAR_8 < (VAR_6 >> 2); VAR_8++) {
        FUNC_2(VAR_7,
               (VAR_1 + VAR_5 + (VAR_8 * 4)),
               0);
    }

    if (!FUNC_1(VAR_7)) {
        FUNC_3(VAR_7, (VAR_0 + VAR_2),
                FUNC_0(VAR_7) ? VAR_3 : VAR_4);
    }
}
