
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bd; TYPE_2__* chan; } ;
typedef TYPE_1__ drv_t ;
typedef int bdrv_t ;
struct TYPE_5__ {scalar_t__ mode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_2 (int *,int ,void (*) (void*),int ) ;
 TYPE_1__** VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6 (void *VAR_7)
{
 drv_t *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
  if (VAR_3[VAR_10] == ((void*)0))
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   VAR_8 = VAR_4[VAR_10 * VAR_1 + VAR_11];
   if (! VAR_8)
    continue;
   if (VAR_8->chan->mode != VAR_0)
    continue;
   VAR_9 = FUNC_4 ();
   FUNC_0 ((bdrv_t *)VAR_8->bd);
   FUNC_3 (VAR_8->chan);
   FUNC_1 ((bdrv_t *)VAR_8->bd);
   FUNC_5 (VAR_9);
  }
 }

 FUNC_2 (&VAR_6, VAR_5, FUNC_6, 0);
}
