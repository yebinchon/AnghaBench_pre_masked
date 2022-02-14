
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_11__ {int ifp; int queue; int running; } ;
typedef TYPE_2__ drv_t ;
struct TYPE_12__ {size_t num; TYPE_1__* chan; } ;
typedef TYPE_3__ ct_board_t ;
struct TYPE_13__ {TYPE_3__* board; } ;
typedef TYPE_4__ bdrv_t ;
struct TYPE_10__ {TYPE_2__* sys; scalar_t__ type; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,struct mbuf*) ;

__attribute__((used)) static void FUNC_10 (void *VAR_4)
{
 bdrv_t *VAR_5 = VAR_4;
 ct_board_t *VAR_6 = VAR_5->board;

 int VAR_7;

 int VAR_8 = FUNC_7 ();

 FUNC_0 (VAR_5);

 FUNC_6 (VAR_6, 1);

 FUNC_5 (VAR_6);


 FUNC_4 (&VAR_3[VAR_6->num], VAR_2/20, VAR_1, VAR_6);
 FUNC_1 (VAR_5);
 FUNC_8 (VAR_8);



 for (VAR_7 = 0; VAR_7 < VAR_0 && VAR_6->chan[VAR_7].type; VAR_7++) {
  drv_t *VAR_9 = VAR_6->chan[VAR_7].sys;
  struct mbuf *VAR_10;
  if (!VAR_9 || !VAR_9->running)
   continue;
  while (FUNC_3(&VAR_9->queue)) {
   FUNC_2 (&VAR_9->queue,VAR_10);
   if (!VAR_10)
    continue;
   FUNC_9 (VAR_9->ifp, VAR_10);
  }
 }

}
