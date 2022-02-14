
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_rx_rings; int * rx_tag; } ;
typedef TYPE_1__ qla_host_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(qla_host_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_rings; VAR_1++) {
  FUNC_1(VAR_0, VAR_1);
 }

        if (VAR_0->rx_tag != ((void*)0)) {
                FUNC_0(VAR_0->rx_tag);
                VAR_0->rx_tag = ((void*)0);
        }

 return;
}
