
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {TYPE_2__* sc; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_5__ {int font_loading_in_progress; int adp; } ;
typedef TYPE_2__ sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int *,int,int) ;

void
FUNC_1(scr_stat *VAR_2, int VAR_3, int VAR_4, int VAR_5, u_char *VAR_6,
      int VAR_7, int VAR_8)
{
    sc_softc_t *VAR_9;

    VAR_9 = VAR_2->sc;
    VAR_9->font_loading_in_progress = VAR_1;
    FUNC_0(VAR_9->adp, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    VAR_9->font_loading_in_progress = VAR_0;
}
