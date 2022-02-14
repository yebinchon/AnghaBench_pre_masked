
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int parent_dma_tag; } ;
struct bxe_dma {scalar_t__ size; int tag; int map; int vaddr; int msg; struct bxe_softc* sc; } ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*,char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int ,struct bxe_dma*,int) ;
 int FUNC_4 (int ,void**,int,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct bxe_dma*,int ,int) ;
 int FUNC_7 (int ,int,char*,char const*) ;

int
FUNC_8(struct bxe_softc *VAR_6,
              bus_size_t VAR_7,
              struct bxe_dma *VAR_8,
              const char *VAR_9)
{
    int VAR_10;

    if (VAR_8->size > 0) {
        FUNC_0(VAR_6, "dma block '%s' already has size %lu\n", VAR_9,
              (unsigned long)VAR_8->size);
        return (1);
    }

    FUNC_6(VAR_8, 0, sizeof(*VAR_8));
    VAR_8->sc = VAR_6;
    VAR_8->size = VAR_7;
    FUNC_7(VAR_8->msg, sizeof(VAR_8->msg), "%s", VAR_9);

    VAR_10 = FUNC_1(VAR_6->parent_dma_tag,
                            VAR_0,
                            0,
                            VAR_4,
                            VAR_4,
                            ((void*)0),
                            ((void*)0),
                            VAR_7,
                            1,
                            VAR_7,
                            VAR_1,
                            ((void*)0),
                            ((void*)0),
                            &VAR_8->tag);
    if (VAR_10 != 0) {
        FUNC_0(VAR_6, "Failed to create dma tag for '%s' (%d)\n", VAR_9, VAR_10);
        FUNC_6(VAR_8, 0, sizeof(*VAR_8));
        return (1);
    }

    VAR_10 = FUNC_4(VAR_8->tag,
                          (void **)&VAR_8->vaddr,
                          (VAR_2 | VAR_3),
                          &VAR_8->map);
    if (VAR_10 != 0) {
        FUNC_0(VAR_6, "Failed to alloc dma mem for '%s' (%d)\n", VAR_9, VAR_10);
        FUNC_2(VAR_8->tag);
        FUNC_6(VAR_8, 0, sizeof(*VAR_8));
        return (1);
    }

    VAR_10 = FUNC_3(VAR_8->tag,
                         VAR_8->map,
                         VAR_8->vaddr,
                         VAR_7,
                         VAR_5,
                         VAR_8,
                         VAR_2);
    if (VAR_10 != 0) {
        FUNC_0(VAR_6, "Failed to load dma map for '%s' (%d)\n", VAR_9, VAR_10);
        FUNC_5(VAR_8->tag, VAR_8->vaddr, VAR_8->map);
        FUNC_2(VAR_8->tag);
        FUNC_6(VAR_8, 0, sizeof(*VAR_8));
        return (1);
    }

    return (0);
}
