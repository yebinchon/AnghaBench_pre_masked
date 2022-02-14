
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * bd; } ;
typedef TYPE_2__ drv_t ;
struct TYPE_7__ {TYPE_1__* chan; } ;
typedef TYPE_3__ ct_board_t ;
typedef int bdrv_t ;
struct TYPE_5__ {scalar_t__ sys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (void *VAR_0)
{
 ct_board_t *VAR_1 = VAR_0;
 bdrv_t *VAR_2 = ((drv_t *)VAR_1->chan->sys)->bd;
 int VAR_3 = FUNC_3 ();

 FUNC_0 (VAR_2);
 FUNC_2 (VAR_1, 0);
 FUNC_1 (VAR_2);
 FUNC_4 (VAR_3);
}
