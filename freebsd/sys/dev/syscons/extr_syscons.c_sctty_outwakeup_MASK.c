
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct tty {int dummy; } ;
struct TYPE_6__ {int status; TYPE_4__* sc; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_7__ {scalar_t__ blink_in_progress; TYPE_1__* cur_scp; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct tty*) ;
 int FUNC_3 (TYPE_1__*,int *,size_t) ;
 size_t FUNC_4 (struct tty*,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct tty *VAR_2)
{
    size_t VAR_3;
    u_char VAR_4[VAR_0];
    scr_stat *VAR_5 = FUNC_2(VAR_2);

    if (VAR_5->status & VAR_1 ||
 (VAR_5 == VAR_5->sc->cur_scp && VAR_5->sc->blink_in_progress))
 return;

    for (;;) {
 VAR_3 = FUNC_4(VAR_2, VAR_4, sizeof VAR_4);
 if (VAR_3 == 0)
     break;
 FUNC_0(VAR_5->sc);
 FUNC_3(VAR_5, VAR_4, VAR_3);
 FUNC_1(VAR_5->sc);
    }
}
