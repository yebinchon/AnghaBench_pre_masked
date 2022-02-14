
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_softc {int pcie_device; int pcie_bus; } ;
struct bxe_prev_list_node {int undi; scalar_t__ aer; int path; int slot; int bus; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct bxe_prev_list_node*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct bxe_prev_list_node* FUNC_5 (struct bxe_softc*) ;
 struct bxe_prev_list_node* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_9(struct bxe_softc *VAR_7,
                   uint8_t VAR_8)
{
    struct bxe_prev_list_node *VAR_9;

    FUNC_7(&VAR_5);


    VAR_9 = FUNC_5(VAR_7);
    if (VAR_9) {
        if (!VAR_9->aer) {
            FUNC_0(VAR_7, VAR_0,
                  "Re-marking AER in path %d/%d/%d\n",
                  VAR_7->pcie_bus, VAR_7->pcie_device, FUNC_3(VAR_7));
        } else {
            FUNC_0(VAR_7, VAR_0,
                  "Removing AER indication from path %d/%d/%d\n",
                  VAR_7->pcie_bus, VAR_7->pcie_device, FUNC_3(VAR_7));
            VAR_9->aer = 0;
        }

        FUNC_8(&VAR_5);
        return (0);
    }

    FUNC_8(&VAR_5);


    VAR_9 = FUNC_6(sizeof(struct bxe_prev_list_node), VAR_1,
                 (VAR_2 | VAR_3));
    if (!VAR_9) {
        FUNC_1(VAR_7, "Failed to allocate 'bxe_prev_list_node'\n");
        return (-1);
    }

    VAR_9->bus = VAR_7->pcie_bus;
    VAR_9->slot = VAR_7->pcie_device;
    VAR_9->path = FUNC_3(VAR_7);
    VAR_9->aer = 0;
    VAR_9->undi = VAR_8 ? (1 << FUNC_4(VAR_7)) : 0;

    FUNC_7(&VAR_5);

    FUNC_0(VAR_7, VAR_0,
          "Marked path %d/%d/%d - finished previous unload\n",
          VAR_7->pcie_bus, VAR_7->pcie_device, FUNC_3(VAR_7));
    FUNC_2(&VAR_4, VAR_9, VAR_6);

    FUNC_8(&VAR_5);

    return (0);
}
