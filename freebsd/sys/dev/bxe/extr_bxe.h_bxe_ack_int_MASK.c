
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ int_block; } ;
struct bxe_softc {TYPE_1__ devinfo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 () ;

__attribute__((used)) static inline uint16_t
FUNC_3(struct bxe_softc *VAR_1)
{
    FUNC_2();
    if (VAR_1->devinfo.int_block == VAR_0) {
        return (FUNC_0(VAR_1));
    } else {
        return (FUNC_1(VAR_1));
    }
}
