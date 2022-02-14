
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct umidi_chan {int mtx; int * xfer; TYPE_1__* sub; } ;
struct uaudio_softc {struct umidi_chan sc_midi_chan; } ;
typedef int device_t ;
struct TYPE_2__ {int fifo; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct uaudio_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct uaudio_softc *VAR_4 = FUNC_0(VAR_3);
 struct umidi_chan *VAR_5 = &VAR_4->sc_midi_chan;
 uint32_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_4(&VAR_5->sub[VAR_6].fifo);

 FUNC_2(&VAR_5->mtx);

 FUNC_5(VAR_5->xfer[VAR_2]);

 FUNC_3(&VAR_5->mtx);

 FUNC_6(VAR_5->xfer, VAR_1);

 FUNC_1(&VAR_5->mtx);

 return (0);
}
