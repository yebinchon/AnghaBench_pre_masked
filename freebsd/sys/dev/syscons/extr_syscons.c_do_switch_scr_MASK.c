
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ unit; scalar_t__ switch_in_progress; TYPE_2__* cur_scp; int new_scp; } ;
typedef TYPE_1__ sc_softc_t ;
struct TYPE_7__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(sc_softc_t *VAR_3, int VAR_4)
{
    FUNC_6(VAR_3->new_scp);

    FUNC_5(VAR_4);
    FUNC_2(VAR_3);
    VAR_4 = FUNC_4();

    FUNC_7(FUNC_0(VAR_3,VAR_3->cur_scp->index));


    if (!FUNC_3(VAR_3->cur_scp)) {
 VAR_3->switch_in_progress = 0;
 if (VAR_3->unit == VAR_1)
     FUNC_1(VAR_2, VAR_0);
    }

    return VAR_4;
}
