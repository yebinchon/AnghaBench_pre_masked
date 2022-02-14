
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sw_rx_data {int * data; int * map; } ;
struct qlnx_rx_queue {int num_rx_buffers; struct sw_rx_data* sw_rx_ring; } ;
struct TYPE_3__ {int rx_tag; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(qlnx_host_t *VAR_0, struct qlnx_rx_queue *VAR_1)
{
        int VAR_2;
 struct sw_rx_data *VAR_3;

        for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_buffers; VAR_2++) {

                VAR_3 = &VAR_1->sw_rx_ring[VAR_2];

  if (VAR_3->data != ((void*)0)) {
   if (VAR_3->map != ((void*)0)) {
    FUNC_1(VAR_0->rx_tag, VAR_3->map);
    FUNC_0(VAR_0->rx_tag, VAR_3->map);
    VAR_3->map = ((void*)0);
   }
   FUNC_2(VAR_3->data);
   VAR_3->data = ((void*)0);
  }
        }
 return;
}
