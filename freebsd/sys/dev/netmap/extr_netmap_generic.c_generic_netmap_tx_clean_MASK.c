
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netmap_kring {size_t nkr_num_slots; size_t nr_hwtail; size_t nr_hwcur; int tx_event_lock; int * tx_event; struct mbuf** tx_pool; } ;
struct mbuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (size_t,size_t const) ;
 int FUNC_6 (char*,size_t,size_t) ;
 size_t FUNC_7 (size_t,size_t const) ;
 int FUNC_8 (int,char*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static u_int
FUNC_10(struct netmap_kring *VAR_0, int VAR_1)
{
 u_int const VAR_2 = VAR_0->nkr_num_slots - 1;
 u_int VAR_3 = FUNC_5(VAR_0->nr_hwtail, VAR_2);
 u_int VAR_4 = VAR_0->nr_hwcur;
 u_int VAR_5 = 0;
 struct mbuf **VAR_6 = VAR_0->tx_pool;

 FUNC_6("hwcur = %d, hwtail = %d", VAR_0->nr_hwcur, VAR_0->nr_hwtail);

 while (VAR_3 != VAR_4) {
  struct mbuf *VAR_7 = VAR_6[VAR_3];

  if (VAR_1) {
   if (VAR_7 == ((void*)0)) {


    FUNC_8(3, "Is this happening?");

   } else if (FUNC_0(VAR_7)) {
    break;

   } else if (FUNC_1(VAR_7) != 1) {



    FUNC_2(VAR_7);
    VAR_6[VAR_3] = ((void*)0);
   }

  } else {
   if (FUNC_9(VAR_7 == ((void*)0))) {
    int VAR_8;


    FUNC_3(&VAR_0->tx_event_lock);
    VAR_8 = (VAR_0->tx_event == ((void*)0));
    FUNC_4(&VAR_0->tx_event_lock);
    if (!VAR_8) {


     break;
    }



   } else if (FUNC_1(VAR_7) != 1) {

    break;
   }
  }

  VAR_5++;
  VAR_3 = FUNC_5(VAR_3, VAR_2);
 }
 VAR_0->nr_hwtail = FUNC_7(VAR_3, VAR_2);
 FUNC_6("tx completed [%d] -> hwtail %d", VAR_5, VAR_0->nr_hwtail);

 return VAR_5;
}
