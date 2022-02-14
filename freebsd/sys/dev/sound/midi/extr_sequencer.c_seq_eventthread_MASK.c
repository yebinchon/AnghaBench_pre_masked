
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct seq_softc {scalar_t__ done; scalar_t__ playing; scalar_t__ out_water; int seq_lock; int th_cv; int out_sel; int out_cv; int out_q; int empty_cv; int state_cv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct seq_softc*,int *) ;

__attribute__((used)) static void
FUNC_12(void *VAR_1)
{
 struct seq_softc *VAR_2 = VAR_1;
 u_char VAR_3[VAR_0];

 FUNC_7(&VAR_2->seq_lock);
 FUNC_3(2, FUNC_9("seq_eventthread started\n"));
 while (VAR_2->done == 0) {
restart:
  while (VAR_2->playing == 0) {
   FUNC_5(&VAR_2->state_cv, &VAR_2->seq_lock);
   if (VAR_2->done)
    goto done;
  }

  while (FUNC_2(VAR_2->out_q)) {
   FUNC_4(&VAR_2->empty_cv);
   FUNC_5(&VAR_2->out_cv, &VAR_2->seq_lock);
   if (VAR_2->playing == 0)
    goto restart;
   if (VAR_2->done)
    goto done;
  }

  FUNC_1(VAR_2->out_q, VAR_3, VAR_0);

  if (FUNC_0(VAR_2->out_q) < VAR_2->out_water) {
   FUNC_4(&VAR_2->out_cv);
   FUNC_10(&VAR_2->out_sel);
  }
  FUNC_11(VAR_2, VAR_3);
 }

done:
 FUNC_4(&VAR_2->th_cv);
 FUNC_8(&VAR_2->seq_lock);
 FUNC_3(2, FUNC_9("seq_eventthread finished\n"));
 FUNC_6(0);
}
