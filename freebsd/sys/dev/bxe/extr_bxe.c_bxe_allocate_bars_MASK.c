
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uintmax_t ;
typedef int u_int ;
struct bxe_softc {TYPE_1__* bar; int dev; } ;
struct TYPE_2__ {scalar_t__ kva; int * resource; int handle; int tag; int rid; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct bxe_softc *VAR_4)
{
    u_int VAR_5;
    int VAR_6;

    FUNC_3(VAR_4->bar, 0, sizeof(VAR_4->bar));

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {



        if ((VAR_6 != 0) && (VAR_6 != 2) && (VAR_6 != 4)) {
            continue;
        }

        VAR_4->bar[VAR_6].rid = FUNC_1(VAR_6);

        VAR_5 = VAR_1;
        if (VAR_6 == 0) {
            VAR_5 |= VAR_2;
        }

        if ((VAR_4->bar[VAR_6].resource =
             FUNC_2(VAR_4->dev,
                                    VAR_3,
                                    &VAR_4->bar[VAR_6].rid,
                                    VAR_5)) == ((void*)0)) {
            return (0);
        }

        VAR_4->bar[VAR_6].tag = FUNC_5(VAR_4->bar[VAR_6].resource);
        VAR_4->bar[VAR_6].handle = FUNC_4(VAR_4->bar[VAR_6].resource);
        VAR_4->bar[VAR_6].kva = (vm_offset_t)FUNC_9(VAR_4->bar[VAR_6].resource);

        FUNC_0(VAR_4, "PCI BAR%d [%02x] memory allocated: %#jx-%#jx (%jd) -> %#jx\n",
              VAR_6, FUNC_1(VAR_6),
              FUNC_8(VAR_4->bar[VAR_6].resource),
              FUNC_6(VAR_4->bar[VAR_6].resource),
              FUNC_7(VAR_4->bar[VAR_6].resource),
              (uintmax_t)VAR_4->bar[VAR_6].kva);
    }

    return (0);
}
