
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bxe_softc*,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static inline uint16_t
FUNC_3(struct bxe_softc *VAR_3)
{
    uint32_t VAR_4 = (VAR_0 + VAR_2*8);
    uint32_t VAR_5 = FUNC_1(VAR_3, VAR_4);

    FUNC_0(VAR_3, VAR_1, "read 0x%08x from IGU addr 0x%x\n",
          VAR_5, VAR_4);

    FUNC_2();
    return (VAR_5);
}
