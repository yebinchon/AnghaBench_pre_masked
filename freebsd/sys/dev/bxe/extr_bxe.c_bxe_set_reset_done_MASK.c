
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*,int ,int ) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_4)
{
    uint32_t VAR_5;
    uint32_t VAR_6 = FUNC_2(VAR_4) ? VAR_1 :
                                 VAR_0;

    FUNC_3(VAR_4, VAR_3);

    VAR_5 = FUNC_0(VAR_4, VAR_2);

    VAR_5 &= ~VAR_6;
    FUNC_1(VAR_4, VAR_2, VAR_5);

    FUNC_4(VAR_4, VAR_3);
}
