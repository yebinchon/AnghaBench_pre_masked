
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int link_vars; int link_params; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_0)
{
    if (!FUNC_1(VAR_0)) {
 FUNC_3(VAR_0);
        FUNC_5(&VAR_0->link_params, &VAR_0->link_vars);
 FUNC_4(VAR_0);
    } else {
        if (!FUNC_2(VAR_0)) {
            FUNC_0(VAR_0, "Bootcode is missing - cannot reset link\n");
        }
    }
}
