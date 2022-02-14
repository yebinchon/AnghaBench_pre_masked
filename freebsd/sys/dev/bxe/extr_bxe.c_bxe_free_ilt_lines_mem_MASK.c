
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {TYPE_1__* ilt; } ;
struct TYPE_2__ {int * lines; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_1)
{
    if (VAR_1->ilt->lines != ((void*)0)) {
        FUNC_0(VAR_1->ilt->lines, VAR_0);
        VAR_1->ilt->lines = ((void*)0);
    }
}
