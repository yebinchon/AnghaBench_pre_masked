
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sw_rx_data {int * data; int * map; } ;
struct qlnx_agg_info {struct sw_rx_data rx_buf; } ;
struct TYPE_3__ {int rx_tag; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(qlnx_host_t *VAR_0, struct qlnx_agg_info *VAR_1)
{
        struct sw_rx_data *VAR_2;

 VAR_2 = &VAR_1->rx_buf;

 if (VAR_2->data != ((void*)0)) {
  if (VAR_2->map != ((void*)0)) {
   FUNC_1(VAR_0->rx_tag, VAR_2->map);
   FUNC_0(VAR_0->rx_tag, VAR_2->map);
   VAR_2->map = ((void*)0);
  }
  FUNC_2(VAR_2->data);
  VAR_2->data = ((void*)0);
 }
 return;
}
