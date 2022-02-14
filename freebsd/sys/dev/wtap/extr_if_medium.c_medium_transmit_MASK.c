
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wtap_medium {scalar_t__ open; int md_mtx; TYPE_1__* tx_handler; int md_pktbuf; } ;
struct packet {int id; struct mbuf* m; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int proc; int tq; } ;


 int FUNC_0 (char*,int,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct packet*,int ) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *) ;

int
FUNC_7(struct wtap_medium *VAR_4, int VAR_5, struct mbuf*VAR_6)
{

 FUNC_4(&VAR_4->md_mtx);
 if (VAR_4->open == 0){
  FUNC_0("[%d] dropping m=%p\n", VAR_5, VAR_6);
  FUNC_2(VAR_6);
  FUNC_5(&VAR_4->md_mtx);
  return 0;
 }

 FUNC_0("[%d] transmiting m=%p\n", VAR_5, VAR_6);
 struct packet *VAR_7 = (struct packet *)FUNC_3(sizeof(struct packet),
     VAR_1, VAR_2 | VAR_0);
 VAR_7->id = VAR_5;
 VAR_7->m = VAR_6;

 FUNC_1(&VAR_4->md_pktbuf, VAR_7, VAR_3);
 FUNC_6(VAR_4->tx_handler->tq, &VAR_4->tx_handler->proc);
 FUNC_5(&VAR_4->md_mtx);

      return 0;
}
