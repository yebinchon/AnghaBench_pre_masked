
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bxe_softc *VAR_2)
{
    uint32_t VAR_3 = FUNC_1(VAR_2, VAR_0,
                                 VAR_1);
    if (!VAR_3) {
        FUNC_0(VAR_2, "MCP response failure, aborting\n");
        return (-1);
    }

    return (0);
}
