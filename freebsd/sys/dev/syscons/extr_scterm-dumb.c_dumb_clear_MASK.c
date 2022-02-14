
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sc; int vtb; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_6__ {int * scr_map; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(scr_stat *VAR_1)
{
 FUNC_1(VAR_1, 0, 0);
 FUNC_2(&VAR_1->vtb, VAR_1->sc->scr_map[0x20], VAR_0 << 8);
 FUNC_0(VAR_1);
}
