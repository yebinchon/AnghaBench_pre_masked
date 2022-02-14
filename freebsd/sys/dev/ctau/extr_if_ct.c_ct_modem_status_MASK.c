
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ running; int * bd; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_8__ {scalar_t__ rts; scalar_t__ dtr; TYPE_1__* sys; } ;
typedef TYPE_2__ ct_chan_t ;
typedef int bdrv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7 (ct_chan_t *VAR_6)
{
 drv_t *VAR_7 = VAR_6->sys;
 bdrv_t *VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_7)
  return 0;

 VAR_8 = VAR_7->bd;

 VAR_9 = VAR_7->running ? VAR_4 : 0;
 VAR_10 = FUNC_5 ();
 FUNC_0 (VAR_8);
 if (FUNC_2 (VAR_6)) VAR_9 |= VAR_0;
 if (FUNC_3 (VAR_6)) VAR_9 |= VAR_1;
 if (FUNC_4 (VAR_6)) VAR_9 |= VAR_2;
 if (VAR_6->dtr) VAR_9 |= VAR_3;
 if (VAR_6->rts) VAR_9 |= VAR_5;
 FUNC_1 (VAR_8);
 FUNC_6 (VAR_10);
 return VAR_9;
}
