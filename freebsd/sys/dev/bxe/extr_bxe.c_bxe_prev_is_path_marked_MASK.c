
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bxe_softc {int pcie_device; int pcie_bus; } ;
struct bxe_prev_list_node {scalar_t__ aer; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct bxe_prev_list_node* FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static uint8_t
FUNC_5(struct bxe_softc *VAR_4)
{
    struct bxe_prev_list_node *VAR_5;
    int VAR_6 = VAR_1;

    FUNC_3(&VAR_3);

    VAR_5 = FUNC_2(VAR_4);
    if (VAR_5) {
        if (VAR_5->aer) {
            FUNC_0(VAR_4, VAR_0,
                  "Path %d/%d/%d was marked by AER\n",
                  VAR_4->pcie_bus, VAR_4->pcie_device, FUNC_1(VAR_4));
        } else {
            VAR_6 = VAR_2;
            FUNC_0(VAR_4, VAR_0,
                  "Path %d/%d/%d was already cleaned from previous drivers\n",
                  VAR_4->pcie_bus, VAR_4->pcie_device, FUNC_1(VAR_4));
        }
    }

    FUNC_4(&VAR_3);

    return (VAR_6);
}
