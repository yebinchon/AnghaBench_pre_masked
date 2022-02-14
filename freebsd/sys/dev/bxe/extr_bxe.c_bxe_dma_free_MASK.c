
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int dummy; } ;
struct bxe_dma {scalar_t__ size; int * tag; int map; int vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct bxe_dma*,int ,int) ;

void
FUNC_6(struct bxe_softc *VAR_2,
             struct bxe_dma *VAR_3)
{
    if (VAR_3->size > 0) {
        FUNC_0(VAR_2, (VAR_3->tag != ((void*)0)), ("dma tag is NULL"));

        FUNC_2(VAR_3->tag, VAR_3->map,
                        (VAR_0 | VAR_1));
        FUNC_3(VAR_3->tag, VAR_3->map);
        FUNC_4(VAR_3->tag, VAR_3->vaddr, VAR_3->map);
        FUNC_1(VAR_3->tag);
    }

    FUNC_5(VAR_3, 0, sizeof(*VAR_3));
}
