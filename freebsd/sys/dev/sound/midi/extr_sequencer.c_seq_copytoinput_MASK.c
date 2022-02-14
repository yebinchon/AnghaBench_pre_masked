
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct seq_softc {int in_cv; int in_sel; int in_q; int seq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct seq_softc *VAR_1, u_char *VAR_2, int VAR_3)
{

 FUNC_4(&VAR_1->seq_lock, VAR_0);

 if (FUNC_0(VAR_1->in_q) < VAR_3) {



  FUNC_2(2, FUNC_5("seq_copytoinput: queue full\n"));
 } else {
  FUNC_1(VAR_1->in_q, VAR_2, VAR_3);
  FUNC_6(&VAR_1->in_sel);
  FUNC_3(&VAR_1->in_cv);
 }

}
