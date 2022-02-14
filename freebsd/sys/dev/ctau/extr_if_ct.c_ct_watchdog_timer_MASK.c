
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timeout; int timeout_handle; int * bd; } ;
typedef TYPE_1__ drv_t ;
typedef int bdrv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void (*) (void*),TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4 (void *VAR_1)
{
 drv_t *VAR_2 = VAR_1;
 bdrv_t *VAR_3 = VAR_2->bd;

 FUNC_0 (VAR_3);
 if (VAR_2->timeout == 1)
  FUNC_3 (VAR_2);
 if (VAR_2->timeout)
  VAR_2->timeout--;
 FUNC_2 (&VAR_2->timeout_handle, VAR_0, FUNC_4, VAR_2);
 FUNC_1 (VAR_3);
}
