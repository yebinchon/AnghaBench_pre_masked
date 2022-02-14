
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_softc {int unit; int midi_number; int seq_lock; int * midis; int out_q; int in_q; int reset_cv; int out_cv; int state_cv; scalar_t__ playing; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void
FUNC_10(struct seq_softc *VAR_1)
{
 int VAR_2, VAR_3;
 kobj_t VAR_4;

 FUNC_6(&VAR_1->seq_lock, VAR_0);

 FUNC_1(5, FUNC_9("seq_reset: unit %d.\n", VAR_1->unit));






 VAR_1->playing = 0;
 FUNC_5(&VAR_1->state_cv);
 FUNC_5(&VAR_1->out_cv);
 FUNC_5(&VAR_1->reset_cv);




 FUNC_0(VAR_1->in_q);
 FUNC_0(VAR_1->out_q);

 for (VAR_3 = 0; VAR_3 < VAR_1->midi_number; VAR_3++) {
  VAR_4 = VAR_1->midis[VAR_3];
  FUNC_8(&VAR_1->seq_lock);
  FUNC_4(VAR_4);
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
   FUNC_3(VAR_4, VAR_2, 123, 0);
   FUNC_3(VAR_4, VAR_2, 121, 0);
   FUNC_2(VAR_4, VAR_2, 1 << 13);
  }
  FUNC_7(&VAR_1->seq_lock);
 }
}
