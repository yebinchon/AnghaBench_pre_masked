
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct tty {int dummy; } ;
struct TYPE_6__ {TYPE_4__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_7__ {TYPE_1__* cur_scp; } ;
struct TYPE_5__ {int index; } ;


 struct tty* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int const*,int) ;

void
FUNC_4(scr_stat *VAR_0, const u_char *VAR_1, int VAR_2, int VAR_3)
{
    struct tty *VAR_4;

    VAR_4 = FUNC_0(VAR_0->sc, VAR_0->sc->cur_scp->index);
    if (!FUNC_1(VAR_4))
 return;
    FUNC_3(VAR_4, VAR_1, VAR_2);
    if (VAR_3) {

 FUNC_2(VAR_4);
    }
}
