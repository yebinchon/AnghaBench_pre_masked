
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_adapter {size_t num_rx_rings; } ;
struct TYPE_2__ {int rx_queue; } ;


 TYPE_1__** FUNC_0 (struct netmap_adapter*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct netmap_adapter*,int ) ;
 size_t FUNC_3 (struct netmap_adapter*,int ) ;
 int FUNC_4 (char*,size_t) ;

int
FUNC_5(struct netmap_adapter *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1, 0);
 if (VAR_2 == 0) {

  u_int VAR_3 = FUNC_3(VAR_1, VAR_0), VAR_4;
  for (VAR_4 = VAR_1->num_rx_rings; VAR_4 < VAR_3; VAR_4++) {
   FUNC_1(&FUNC_0(VAR_1, VAR_0)[VAR_4]->rx_queue);
  }
  FUNC_4("initialized sw rx queue %d", VAR_1->num_rx_rings);
 }
 return VAR_2;
}
