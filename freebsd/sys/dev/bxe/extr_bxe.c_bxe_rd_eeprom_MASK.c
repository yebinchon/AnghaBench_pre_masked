
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_1, void *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    int VAR_5 = 0;

    if(!FUNC_1(VAR_1)) {
        FUNC_0(VAR_1, "Cannot access eeprom when interface is down\n");
        return (-VAR_0);
    }
    VAR_5 = FUNC_2(VAR_1, VAR_3, (uint8_t *)VAR_2, VAR_4);

   return (VAR_5);
}
