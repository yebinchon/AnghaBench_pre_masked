
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* board; TYPE_3__* chan; } ;
typedef TYPE_2__ drv_t ;
typedef int bdrv_t ;
struct TYPE_9__ {int type; } ;
struct TYPE_7__ {scalar_t__ sys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;





 int ** VAR_2 ;
 int FUNC_2 (int *,int ,void (*) (void*),int ) ;
 TYPE_2__** VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_8 (void *VAR_7)
{
 drv_t *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
  if (VAR_2[VAR_10] == ((void*)0))
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
   VAR_9 = FUNC_6 ();
   if (VAR_4) {
    FUNC_7 (VAR_9);
    return;
   }
   VAR_8 = VAR_3[VAR_10 * VAR_1 + VAR_11];
   if (!VAR_8) {
    FUNC_7 (VAR_9);
    continue;
   }
   FUNC_0 ((bdrv_t *)VAR_8->board->sys);
   switch (VAR_8->chan->type) {
   case 130:
    FUNC_5 (VAR_8->chan);
    break;
   case 132:
    FUNC_3 (VAR_8->chan);
    break;
   case 131:
   case 128:
   case 129:
    FUNC_4 (VAR_8->chan);
    break;
   default:
    break;
   }
   FUNC_1 ((bdrv_t *)VAR_8->board->sys);
   FUNC_7 (VAR_9);
  }
 }
 VAR_9 = FUNC_6 ();
 if (!VAR_4)
  FUNC_2 (&VAR_6, VAR_5, FUNC_8, 0);
 FUNC_7 (VAR_9);
}
