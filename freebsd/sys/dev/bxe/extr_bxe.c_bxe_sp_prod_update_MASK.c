
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {TYPE_1__* bar; int spq_prod_idx; } ;
struct TYPE_2__ {int handle; int tag; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static inline
void FUNC_5(struct bxe_softc *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_3);






    FUNC_4();

    FUNC_0(VAR_3, (VAR_1 + FUNC_2(VAR_4)),
             VAR_3->spq_prod_idx);

    FUNC_3(VAR_3->bar[VAR_0].tag, VAR_3->bar[VAR_0].handle, 0, 0,
                      VAR_2);
}
