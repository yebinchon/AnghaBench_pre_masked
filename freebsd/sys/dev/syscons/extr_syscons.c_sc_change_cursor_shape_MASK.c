
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_7__ {int dflt_curs_attr; TYPE_2__* sc; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_8__ {int first_vty; int vtys; int curs_attr; int dflt_curs_attr; } ;
typedef TYPE_2__ sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tty* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 int FUNC_2 (int *,int,int,int) ;
 TYPE_1__* FUNC_3 (struct tty*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

void
FUNC_6(scr_stat *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    sc_softc_t *VAR_8;
    struct tty *VAR_9;
    int VAR_10;
    int VAR_11;

    if (VAR_5 == -1)
 VAR_5 = VAR_3;

    VAR_10 = FUNC_4();
    if (VAR_5 & VAR_1) {

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_5(VAR_10);
 return;
    }


    VAR_8 = VAR_4->sc;
    if (VAR_5 & VAR_2)
 VAR_8->curs_attr = VAR_8->dflt_curs_attr;
    else if (VAR_5 & VAR_0) {
 FUNC_2(&VAR_8->dflt_curs_attr, VAR_5, VAR_6, VAR_7);
 VAR_8->curs_attr = VAR_8->dflt_curs_attr;
    } else
 FUNC_2(&VAR_8->curs_attr, VAR_5, VAR_6, VAR_7);

    for (VAR_11 = VAR_8->first_vty; VAR_11 < VAR_8->first_vty + VAR_8->vtys; ++VAR_11) {
 if ((VAR_9 = FUNC_0(VAR_8, VAR_11)) == ((void*)0))
     continue;
 if ((VAR_4 = FUNC_3(VAR_9)) == ((void*)0))
     continue;
 VAR_4->dflt_curs_attr = VAR_8->curs_attr;
 FUNC_1(VAR_4, VAR_2, -1, -1);
    }
    FUNC_5(VAR_10);
}
