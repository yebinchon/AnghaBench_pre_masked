
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_up; } ;
struct bxe_softc {int cmng; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ,int ) ;
 int FUNC_2 (struct bxe_softc*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_2)
{
    if (VAR_2->link_vars.link_up) {
        FUNC_1(VAR_2, VAR_1, VAR_0);

    }

    FUNC_2(VAR_2, &VAR_2->cmng, FUNC_0(VAR_2));
}
