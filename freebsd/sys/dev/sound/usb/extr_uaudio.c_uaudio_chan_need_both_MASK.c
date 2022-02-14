
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_alt; scalar_t__ running; } ;
struct TYPE_4__ {scalar_t__ num_alt; scalar_t__ running; int set_alt; } ;
struct uaudio_softc {TYPE_1__ sc_rec_chan; TYPE_2__ sc_play_chan; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_1(struct uaudio_softc *VAR_0)
{
 return (VAR_0->sc_play_chan.num_alt > 0 &&
     VAR_0->sc_play_chan.running != 0 &&
     FUNC_0(&VAR_0->sc_play_chan,
     VAR_0->sc_play_chan.set_alt) != 0 &&
     VAR_0->sc_rec_chan.num_alt > 0 &&
     VAR_0->sc_rec_chan.running == 0);
}
