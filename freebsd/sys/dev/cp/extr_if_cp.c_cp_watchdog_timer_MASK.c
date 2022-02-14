
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int timeout; int timeout_handle; TYPE_1__* board; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_5__ {int * sys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void (*) (void*),TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4 (void *VAR_1)
{
 drv_t *VAR_2 = VAR_1;
 bdrv_t *VAR_3 = VAR_2->board->sys;

 FUNC_0 (VAR_3);
 if (VAR_2->timeout == 1)
  FUNC_3 (VAR_2);
 if (VAR_2->timeout)
  VAR_2->timeout--;
 FUNC_2 (&VAR_2->timeout_handle, VAR_0, FUNC_4, VAR_2);
 FUNC_1 (VAR_3);
}
