
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {int func_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (struct bxe_softc*) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static uint32_t
FUNC_2(struct bxe_softc *VAR_8)
{
    uint32_t VAR_9 = 0;
    uint32_t VAR_10;

    VAR_10 = FUNC_0(VAR_8, VAR_7[FUNC_1(VAR_8)].func_cfg);

    if (VAR_10 & VAR_0) {
        if (VAR_10 & VAR_1) {
            VAR_9 |= VAR_4;
        }
        if (VAR_10 & VAR_3) {
            VAR_9 |= VAR_6;
        }
        if (VAR_10 & VAR_2) {
            VAR_9 |= VAR_5;
        }
    }

    return (VAR_9);
}
