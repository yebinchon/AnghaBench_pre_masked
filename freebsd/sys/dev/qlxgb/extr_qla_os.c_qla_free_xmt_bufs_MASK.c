
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qla_tx_buf_t ;
struct TYPE_4__ {int * tx_buf; int * tx_tag; } ;
typedef TYPE_1__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_3(qla_host_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(VAR_1, &VAR_1->tx_buf[VAR_2]);

 if (VAR_1->tx_tag != ((void*)0)) {
  FUNC_0(VAR_1->tx_tag);
  VAR_1->tx_tag = ((void*)0);
 }
 FUNC_1((void *)VAR_1->tx_buf, (sizeof(qla_tx_buf_t) * VAR_0));

 return;
}
