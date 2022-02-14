
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netmap_kring {size_t nkr_num_slots; struct mbuf** tx_pool; int tx_event_lock; struct mbuf* tx_event; int nr_hwtail; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int ,size_t) ;
 int FUNC_6 (char*,size_t,struct mbuf*,int) ;
 size_t FUNC_7 (size_t,size_t,size_t) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(struct netmap_kring *VAR_1, u_int VAR_2)
{
 u_int VAR_3 = VAR_1->nkr_num_slots - 1;
 struct mbuf *VAR_4;
 u_int VAR_5;
 u_int VAR_6 = FUNC_5(VAR_1->nr_hwtail, VAR_3);

 if (VAR_6 == VAR_2) {
  return;
 }
 VAR_5 = VAR_6;


 VAR_4 = VAR_1->tx_pool[VAR_5];
 if (VAR_4 == ((void*)0)) {

  return;
 }

 FUNC_3(&VAR_1->tx_event_lock);
 if (VAR_1->tx_event) {

  FUNC_4(&VAR_1->tx_event_lock);
  return;
 }

 FUNC_1(VAR_4, VAR_0);
 VAR_1->tx_event = VAR_4;
 FUNC_4(&VAR_1->tx_event_lock);

 VAR_1->tx_pool[VAR_5] = ((void*)0);

 FUNC_6("Request Event at %d mbuf %p refcnt %d", VAR_5, VAR_4, VAR_4 ? FUNC_0(VAR_4) : -2 );



 FUNC_2(VAR_4);
 FUNC_8();
}
