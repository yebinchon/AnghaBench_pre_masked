
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bxe_softc {scalar_t__ spq_prod_bd; scalar_t__ spq_last_bd; scalar_t__ spq; TYPE_2__* def_sb; int * dsb_sp_prod; scalar_t__ spq_prod_idx; int cq_spq_left; } ;
struct TYPE_3__ {int * index_values; } ;
struct TYPE_4__ {TYPE_1__ sp_sb; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_3)
{
    FUNC_0(&VAR_3->cq_spq_left, VAR_1);
    VAR_3->spq_prod_idx = 0;
    VAR_3->dsb_sp_prod = &VAR_3->def_sb->sp_sb.index_values[VAR_0];
    VAR_3->spq_prod_bd = VAR_3->spq;
    VAR_3->spq_last_bd = (VAR_3->spq_prod_bd + VAR_2);
}
