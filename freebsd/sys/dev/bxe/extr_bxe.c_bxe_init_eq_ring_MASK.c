
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* lo; void* hi; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
union event_ring_elem {TYPE_2__ next_page; } ;
struct TYPE_8__ {scalar_t__ paddr; } ;
struct bxe_softc {int eq_spq_left; TYPE_5__* def_sb; int * eq_cons_sb; int eq_prod; scalar_t__ eq_cons; TYPE_3__ eq_dma; union event_ring_elem* eq; } ;
struct TYPE_9__ {int * index_values; } ;
struct TYPE_10__ {TYPE_4__ sp_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_7)
{
    union event_ring_elem *VAR_8;
    int VAR_9;

    for (VAR_9 = 1; VAR_9 <= VAR_6; VAR_9++) {
        VAR_8 = &VAR_7->eq[VAR_1 * VAR_9 - 1];

        VAR_8->next_page.addr.hi = FUNC_3(FUNC_0(VAR_7->eq_dma.paddr +
                                                 VAR_0 *
                                                 (VAR_9 % VAR_6)));
        VAR_8->next_page.addr.lo = FUNC_3(FUNC_1(VAR_7->eq_dma.paddr +
                                                 VAR_0 *
                                                 (VAR_9 % VAR_6)));
    }

    VAR_7->eq_cons = 0;
    VAR_7->eq_prod = VAR_5;
    VAR_7->eq_cons_sb = &VAR_7->def_sb->sp_sb.index_values[VAR_2];

    FUNC_2(&VAR_7->eq_spq_left,
                          (FUNC_4((VAR_4 - VAR_3),
                               VAR_5) - 1));
}
