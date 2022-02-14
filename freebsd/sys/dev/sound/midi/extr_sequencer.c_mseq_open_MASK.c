
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct seq_softc {int unit; int busy; int fflags; int music; size_t midi_number; int maxunits; int out_water; int ** midis; int seq_lock; int out_q; int * midi_flags; int mapper_cookie; int mapper; } ;
struct cdev {struct seq_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cdev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,struct seq_softc*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct seq_softc*,int,int) ;
 int FUNC_11 (struct seq_softc*) ;
 int FUNC_12 (struct seq_softc*) ;

int
FUNC_13(struct cdev *VAR_3, int VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct seq_softc *VAR_7 = VAR_3->si_drv1;
 int VAR_8;

 if (VAR_7 == ((void*)0))
  return VAR_1;

 FUNC_2(3, FUNC_9("seq_open: scp %p unit %d, flags 0x%x.\n",
     VAR_7, VAR_7->unit, VAR_4));





 FUNC_7(&VAR_7->seq_lock);
 if (VAR_7->busy) {
  FUNC_8(&VAR_7->seq_lock);
  FUNC_2(2, FUNC_9("seq_open: unit %d is busy.\n", VAR_7->unit));
  return VAR_0;
 }
 VAR_7->fflags = VAR_4;




 VAR_7->music = FUNC_0(VAR_3) == VAR_2;




 VAR_7->midi_number = 0;
 VAR_7->maxunits = FUNC_6(VAR_7->mapper, &VAR_7->mapper_cookie);

 if (VAR_7->maxunits == 0)
  FUNC_2(2, FUNC_9("seq_open: no midi devices\n"));

 for (VAR_8 = 0; VAR_8 < VAR_7->maxunits; VAR_8++) {
  VAR_7->midis[VAR_7->midi_number] =
      FUNC_5(VAR_7->mapper, VAR_7->mapper_cookie, VAR_8);
  if (VAR_7->midis[VAR_7->midi_number]) {
   if (FUNC_3(VAR_7->midis[VAR_7->midi_number], VAR_7,
    VAR_7->fflags) != 0)
    VAR_7->midis[VAR_7->midi_number] = ((void*)0);
   else {
    VAR_7->midi_flags[VAR_7->midi_number] =
        FUNC_4(VAR_7->midis[VAR_7->midi_number]);
    VAR_7->midi_number++;
   }
  }
 }

 FUNC_10(VAR_7, 60, 100);

 FUNC_11(VAR_7);
 FUNC_12(VAR_7);







 VAR_7->out_water = FUNC_1(VAR_7->out_q) / 2;

 VAR_7->busy = 1;
 FUNC_8(&VAR_7->seq_lock);

 FUNC_2(2, FUNC_9("seq_open: opened, mode %s.\n",
     VAR_7->music ? "music" : "sequencer"));
 FUNC_2(2,
     FUNC_9("Sequencer %d %p opened maxunits %d midi_number %d:\n",
  VAR_7->unit, VAR_7, VAR_7->maxunits, VAR_7->midi_number));
 for (VAR_8 = 0; VAR_8 < VAR_7->midi_number; VAR_8++)
  FUNC_2(3, FUNC_9("  midi %d %p\n", VAR_8, VAR_7->midis[VAR_8]));

 return 0;
}
