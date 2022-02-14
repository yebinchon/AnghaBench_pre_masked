
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bxe_softc*,scalar_t__) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 () ;

__attribute__((used)) static inline uint16_t
FUNC_3(struct bxe_softc *VAR_2)
{
    uint32_t VAR_3 = (VAR_1 + FUNC_1(VAR_2)*32 +
                        VAR_0);
    uint32_t VAR_4 = FUNC_0(VAR_2, VAR_3);

    FUNC_2();
    return (VAR_4);
}
