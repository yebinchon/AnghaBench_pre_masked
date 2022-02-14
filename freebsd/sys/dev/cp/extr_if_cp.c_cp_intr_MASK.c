
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_12__ {int ifp; int queue; int running; } ;
typedef TYPE_2__ drv_t ;
struct TYPE_13__ {size_t num; TYPE_1__* chan; int * sys; } ;
typedef TYPE_3__ cp_board_t ;
struct TYPE_14__ {TYPE_3__* board; } ;
typedef TYPE_4__ bdrv_t ;
struct TYPE_11__ {TYPE_2__* sys; scalar_t__ type; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,struct mbuf*) ;

__attribute__((used)) static void FUNC_11 (void *VAR_5)
{
 bdrv_t *VAR_6 = VAR_5;
 cp_board_t *VAR_7 = VAR_6->board;

 int VAR_8;

 int VAR_9 = FUNC_8 ();
 if (VAR_1) {
  FUNC_9 (VAR_9);
  return;
 }
 FUNC_0 (VAR_6);

 if (VAR_7->sys == ((void*)0)) {

  FUNC_6 (VAR_7, 1);
  FUNC_1 (VAR_6);
  return;
 }

 FUNC_7 (VAR_7, 1);

 FUNC_5 (VAR_7);


 FUNC_4 (&VAR_4[VAR_7->num], VAR_3/20, VAR_2, VAR_7);
 FUNC_1 (VAR_6);
 FUNC_9 (VAR_9);



 for (VAR_8 = 0; VAR_8 < VAR_0 && VAR_7->chan[VAR_8].type; VAR_8++) {
  drv_t *VAR_10 = VAR_7->chan[VAR_8].sys;
  struct mbuf *VAR_11;
  if (!VAR_10 || !VAR_10->running)
   continue;
  while (FUNC_3(&VAR_10->queue)) {
   FUNC_2 (&VAR_10->queue,VAR_11);
   if (!VAR_11)
    continue;
   FUNC_10 (VAR_10->ifp, VAR_11);
  }
 }

}
