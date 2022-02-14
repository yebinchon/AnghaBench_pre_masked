
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ shmem_base; } ;
struct TYPE_3__ {scalar_t__ shmem_base; } ;
struct bxe_softc {TYPE_2__ devinfo; TYPE_1__ link_params; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bxe_softc*,int ) ;
 size_t FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct bxe_softc*) ;
 int * VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_5)
{
    int VAR_6 = 0;
    uint32_t VAR_7 = 0;

    do {
        VAR_5->devinfo.shmem_base =
        VAR_5->link_params.shmem_base =
            FUNC_1(VAR_5, VAR_2);

        if (VAR_5->devinfo.shmem_base) {
            VAR_7 = FUNC_3(VAR_5, VAR_4[FUNC_2(VAR_5)]);
            if (VAR_7 & VAR_3)
                return (0);
        }

        FUNC_4(VAR_5);

    } while (VAR_6++ < (VAR_1 / VAR_0));

    FUNC_0(VAR_5, "BAD MCP validity signature\n");

    return (-1);
}
