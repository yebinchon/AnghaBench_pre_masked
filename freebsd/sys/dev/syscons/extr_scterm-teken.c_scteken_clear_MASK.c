
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ts_teken; } ;
typedef TYPE_2__ teken_stat ;
struct TYPE_11__ {TYPE_1__* sc; int vtb; TYPE_2__* ts; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_9__ {int * scr_map; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(scr_stat *VAR_0)
{
 teken_stat *VAR_1 = VAR_0->ts;

 FUNC_1(VAR_0, 0, 0);
 FUNC_3(VAR_0, VAR_1);
 FUNC_2(&VAR_0->vtb, VAR_0->sc->scr_map[0x20],
       FUNC_4(FUNC_5(&VAR_1->ts_teken))
       << 8);
 FUNC_0(VAR_0);
}
