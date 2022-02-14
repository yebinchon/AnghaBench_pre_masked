
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {TYPE_1__* bar; int dev; } ;
struct TYPE_2__ {int * resource; int rid; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_3->bar[VAR_4].resource != ((void*)0)) {
            FUNC_2(VAR_3->dev,
                                 VAR_2,
                                 VAR_3->bar[VAR_4].rid,
                                 VAR_3->bar[VAR_4].resource);
            FUNC_0(VAR_3, VAR_0, "Released PCI BAR%d [%02x] memory\n",
                  VAR_4, FUNC_1(VAR_4));
        }
    }
}
