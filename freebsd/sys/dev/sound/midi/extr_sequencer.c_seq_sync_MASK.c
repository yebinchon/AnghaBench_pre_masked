
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_softc {int unit; int playing; scalar_t__ waiting; int midi_number; int seq_lock; int * midis; int reset_cv; int out_cv; int state_cv; int out_q; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int VAR_5 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int
FUNC_12(struct seq_softc *VAR_6)
{
 int VAR_7, VAR_8, VAR_9[16], VAR_10;

 FUNC_8(&VAR_6->seq_lock, VAR_3);

 FUNC_4(4, FUNC_11("seq_sync: unit %d.\n", VAR_6->unit));





 while (!FUNC_2(VAR_6->out_q)) {

  if (!VAR_6->playing) {
   VAR_6->playing = 1;
   FUNC_6(&VAR_6->state_cv);
   FUNC_6(&VAR_6->out_cv);
  }
  VAR_8 = FUNC_3(VAR_6->out_q);

  VAR_7 = FUNC_7(&VAR_6->out_cv,
      &VAR_6->seq_lock, VAR_4 * VAR_5);

  if (VAR_7 == VAR_0 || VAR_7 == VAR_1) {
   if (VAR_7 == VAR_0) {



    VAR_6->playing = 0;
    FUNC_6(&VAR_6->out_cv);
   }
   return VAR_7;
  }
  if (VAR_7 == VAR_2 && VAR_8 == FUNC_3(VAR_6->out_q) &&
      VAR_6->waiting == 0) {




   FUNC_1(VAR_6->out_q);
   VAR_6->playing = 0;
   FUNC_6(&VAR_6->state_cv);
   FUNC_6(&VAR_6->out_cv);
   FUNC_6(&VAR_6->reset_cv);





   FUNC_4(1, FUNC_11("seq_sync queue stuck, aborting\n"));

   return VAR_7;
  }
 }

 VAR_6->playing = 0;




 FUNC_10(&VAR_6->seq_lock);
 for (VAR_7 = 0; VAR_7 < VAR_6->midi_number; VAR_7++)
  VAR_9[VAR_7] = 1;

 do {
  VAR_10 = 1;
  for (VAR_7 = 0; VAR_7 < VAR_6->midi_number; VAR_7++)
   if (VAR_9[VAR_7]) {
    if (FUNC_5(VAR_6->midis[VAR_7]) == 0)
     VAR_9[VAR_7] = 0;
    else
     VAR_10 = 0;
   }
  if (!VAR_10)
   FUNC_0(5000);

 } while (!VAR_10);

 FUNC_9(&VAR_6->seq_lock);
 return 0;
}
