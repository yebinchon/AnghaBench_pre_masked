
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int ts_teken; } ;
typedef TYPE_2__ teken_stat ;
struct TYPE_7__ {TYPE_1__* sc; TYPE_2__* ts; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_5__ {int write_in_progress; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_1(scr_stat *VAR_0, u_char *VAR_1, int VAR_2)
{
 teken_stat *VAR_3 = VAR_0->ts;

 VAR_0->sc->write_in_progress++;
 FUNC_0(&VAR_3->ts_teken, VAR_1, VAR_2);
 VAR_0->sc->write_in_progress--;
}
