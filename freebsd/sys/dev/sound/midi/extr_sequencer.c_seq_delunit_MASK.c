
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct seq_softc* b; } ;
struct TYPE_3__ {struct seq_softc* b; } ;
struct seq_softc {int done; int seq_lock; TYPE_2__ in_q; TYPE_1__ out_q; struct seq_softc* midi_flags; struct seq_softc* midis; int * musicdev; int * seqdev; int th_cv; int in_cv; int out_cv; int reset_cv; int empty_cv; int state_cv; scalar_t__ playing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct seq_softc*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (char*) ;
 int VAR_3 ;
 struct seq_softc** VAR_4 ;

__attribute__((used)) static int
FUNC_10(int VAR_5)
{
 struct seq_softc *VAR_6 = VAR_4[VAR_5];
 int VAR_7;


 FUNC_0(1, FUNC_9("seq_delunit: 1 \n"));
 FUNC_7(&VAR_6->seq_lock);

 VAR_6->playing = 0;
 VAR_6->done = 1;
 FUNC_1(&VAR_6->out_cv);
 FUNC_1(&VAR_6->state_cv);
 FUNC_1(&VAR_6->reset_cv);
 FUNC_0(1, FUNC_9("seq_delunit: 2 \n"));
 FUNC_3(&VAR_6->th_cv, &VAR_6->seq_lock);
 FUNC_0(1, FUNC_9("seq_delunit: 3.0 \n"));
 FUNC_8(&VAR_6->seq_lock);
 FUNC_0(1, FUNC_9("seq_delunit: 3.1 \n"));

 FUNC_2(&VAR_6->state_cv);
 FUNC_0(1, FUNC_9("seq_delunit: 4 \n"));
 FUNC_2(&VAR_6->empty_cv);
 FUNC_0(1, FUNC_9("seq_delunit: 5 \n"));
 FUNC_2(&VAR_6->reset_cv);
 FUNC_0(1, FUNC_9("seq_delunit: 6 \n"));
 FUNC_2(&VAR_6->out_cv);
 FUNC_0(1, FUNC_9("seq_delunit: 7 \n"));
 FUNC_2(&VAR_6->in_cv);
 FUNC_0(1, FUNC_9("seq_delunit: 8 \n"));
 FUNC_2(&VAR_6->th_cv);

 FUNC_0(1, FUNC_9("seq_delunit: 10 \n"));
 if (VAR_6->seqdev)
  FUNC_4(VAR_6->seqdev);
 FUNC_0(1, FUNC_9("seq_delunit: 11 \n"));
 if (VAR_6->musicdev)
  FUNC_4(VAR_6->musicdev);
 FUNC_0(1, FUNC_9("seq_delunit: 12 \n"));
 VAR_6->seqdev = VAR_6->musicdev = ((void*)0);
 if (VAR_6->midis != ((void*)0))
  FUNC_5(VAR_6->midis, VAR_1);
 FUNC_0(1, FUNC_9("seq_delunit: 13 \n"));
 if (VAR_6->midi_flags != ((void*)0))
  FUNC_5(VAR_6->midi_flags, VAR_1);
 FUNC_0(1, FUNC_9("seq_delunit: 14 \n"));
 FUNC_5(VAR_6->out_q.b, VAR_1);
 FUNC_0(1, FUNC_9("seq_delunit: 15 \n"));
 FUNC_5(VAR_6->in_q.b, VAR_1);

 FUNC_0(1, FUNC_9("seq_delunit: 16 \n"));

 FUNC_6(&VAR_6->seq_lock);
 FUNC_0(1, FUNC_9("seq_delunit: 17 \n"));
 FUNC_5(VAR_6, VAR_0);

 FUNC_7(&VAR_3);
 for (VAR_7 = VAR_5; VAR_7 < (VAR_2 - 1); VAR_7++)
  VAR_4[VAR_7] = VAR_4[VAR_7 + 1];
 VAR_2--;
 FUNC_8(&VAR_3);

 return 0;
}
