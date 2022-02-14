
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_kring {scalar_t__ nr_mode; int rx_queue; } ;
struct netmap_generic_adapter {TYPE_1__* mit; int rxsg; } ;
struct netmap_adapter {size_t num_rx_rings; struct netmap_kring** rx_rings; } ;
struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {int mit_pending; } ;


 scalar_t__ FUNC_0 (struct mbuf*) ;
 size_t FUNC_1 (struct mbuf*) ;
 struct netmap_adapter* FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct netmap_adapter*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct mbuf*) ;
 int FUNC_8 (struct netmap_adapter*,size_t,size_t*) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int,char*,int) ;
 scalar_t__ FUNC_12 (int) ;

int
FUNC_13(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct netmap_adapter *VAR_4 = FUNC_2(VAR_2);
 struct netmap_generic_adapter *VAR_5 = (struct netmap_generic_adapter *)VAR_4;
 struct netmap_kring *VAR_6;
 u_int VAR_7;
 u_int VAR_8 = FUNC_1(VAR_3);

 if (VAR_8 >= VAR_4->num_rx_rings) {
  VAR_8 = VAR_8 % VAR_4->num_rx_rings;
 }

 VAR_6 = VAR_4->rx_rings[VAR_8];

 if (VAR_6->nr_mode == VAR_0) {

  return 0;
 }


 if (FUNC_12(!VAR_5->rxsg && FUNC_0(VAR_3) > FUNC_3(VAR_4))) {



  FUNC_11(2, "Warning: driver pushed up big packet "
    "(size=%d)", (int)FUNC_0(VAR_3));
  FUNC_5(VAR_3);
 } else if (FUNC_12(FUNC_6(&VAR_6->rx_queue) > 1024)) {
  FUNC_5(VAR_3);
 } else {
  FUNC_7(&VAR_6->rx_queue, VAR_3);
 }

 if (VAR_1 < 32768) {

  FUNC_8(VAR_4, VAR_8, &VAR_7);
 } else {



  if (FUNC_4(FUNC_9(&VAR_5->mit[VAR_8]))) {

   VAR_5->mit[VAR_8].mit_pending = 1;
  } else {
   FUNC_8(VAR_4, VAR_8, &VAR_7);
   FUNC_10(&VAR_5->mit[VAR_8]);
  }
 }


 return 1;
}
