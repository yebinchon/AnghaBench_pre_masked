
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
typedef TYPE_2__* ng_hci_neighbor_p ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_5__ {TYPE_1__ updated; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct timeval*) ;

int
FUNC_2(ng_hci_neighbor_p VAR_0)
{
 struct timeval VAR_1;

 FUNC_1(&VAR_1);

 return (VAR_1.tv_sec - VAR_0->updated.tv_sec > FUNC_0());
}
