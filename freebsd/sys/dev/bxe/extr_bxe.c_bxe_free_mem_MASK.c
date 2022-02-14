
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {TYPE_1__* context; } ;
struct TYPE_2__ {scalar_t__ size; int * vcxt; int vcxt_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,int *) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bxe_softc *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
        FUNC_1(VAR_1, &VAR_1->context[VAR_2].vcxt_dma);
        VAR_1->context[VAR_2].vcxt = ((void*)0);
        VAR_1->context[VAR_2].size = 0;
    }

    FUNC_3(VAR_1, VAR_0);

    FUNC_2(VAR_1);

}
