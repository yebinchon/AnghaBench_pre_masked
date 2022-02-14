
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {TYPE_4__* sc; TYPE_1__* tsw; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_8__ {scalar_t__ delayed_next_scr; TYPE_2__* cur_scp; } ;
struct TYPE_6__ {int (* te_puts ) (TYPE_2__*,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void
FUNC_2(scr_stat *VAR_4, u_char *VAR_5, int VAR_6)
{






    if (VAR_4->tsw)
 (*VAR_4->tsw->te_puts)(VAR_4, VAR_5, VAR_6);
    if (VAR_4->sc->delayed_next_scr)
 FUNC_0(VAR_4->sc, VAR_4->sc->delayed_next_scr - 1);
}
