
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_softc {struct rc_chans* sc_channels; } ;
struct rc_chans {TYPE_1__* rc_tp; } ;
struct TYPE_2__ {int t_termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rc_softc*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_2(struct rc_softc *VAR_2)
{
 struct rc_chans *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2, VAR_1);
 VAR_3 = VAR_2->sc_channels;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++)
  (void) FUNC_1(VAR_3->rc_tp, &VAR_3->rc_tp->t_termios);
}
