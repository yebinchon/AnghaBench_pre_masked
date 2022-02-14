
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* sc; int base_curs_attr; int dflt_curs_attr; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_8__ {TYPE_2__* cur_scp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(scr_stat *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    if ((VAR_2 == VAR_2->sc->cur_scp) && !FUNC_0(VAR_2))
 FUNC_3(VAR_2);

    if (VAR_3 & VAR_1)
 VAR_2->base_curs_attr = VAR_2->dflt_curs_attr;
    else if (VAR_3 & VAR_0) {
 FUNC_1(&VAR_2->dflt_curs_attr, VAR_3, VAR_4, VAR_5);
 VAR_2->base_curs_attr = VAR_2->dflt_curs_attr;
    } else
 FUNC_1(&VAR_2->base_curs_attr, VAR_3, VAR_4, VAR_5);

    if ((VAR_2 == VAR_2->sc->cur_scp) && !FUNC_0(VAR_2)) {
 FUNC_4(VAR_2);
 FUNC_2(VAR_2);
    }
}
