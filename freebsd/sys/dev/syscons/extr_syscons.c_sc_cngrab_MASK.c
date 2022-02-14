
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct consdev {int dummy; } ;
struct TYPE_6__ {int * grab_state; int grab_level; } ;
typedef TYPE_1__ sc_softc_t ;
struct TYPE_7__ {TYPE_1__* sc; } ;


 int FUNC_0 (int *,int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_4(struct consdev *VAR_1)
{
    sc_softc_t *VAR_2;
    int VAR_3;

    VAR_2 = VAR_0->sc;
    VAR_3 = FUNC_0(&VAR_2->grab_level, 1);
    if (VAR_3 >= 0 && VAR_3 < 2) {
 FUNC_2(VAR_2, &VAR_2->grab_state[VAR_3], 1 | 2);
 FUNC_3(VAR_2, &VAR_2->grab_state[VAR_3]);
 FUNC_1(VAR_2, &VAR_2->grab_state[VAR_3]);
    }
}
