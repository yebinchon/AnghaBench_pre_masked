
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cur_attr; } ;
typedef TYPE_2__ term_stat ;
struct TYPE_9__ {TYPE_1__* sc; int vtb; TYPE_2__* ts; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_7__ {int * scr_map; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(scr_stat *VAR_0)
{
 term_stat *VAR_1 = VAR_0->ts;

 FUNC_1(VAR_0, 0, 0);
 FUNC_2(&VAR_0->vtb, VAR_0->sc->scr_map[0x20], VAR_1->cur_attr);
 FUNC_0(VAR_0);
}
