
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qlnx_rdma_if_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

int
FUNC_4(qlnx_rdma_if_t *VAR_3)
{
 qlnx_host_t *VAR_4;

 if (FUNC_1(&VAR_1)) {

  FUNC_2(&VAR_1);
  VAR_2 = VAR_3;

  VAR_4 = VAR_0;

  while (VAR_4 != ((void*)0)) {
   FUNC_0(VAR_4);
   VAR_4 = VAR_4->next;
  }

  FUNC_3(&VAR_1);

  return (0);
 }

 return (-1);
}
