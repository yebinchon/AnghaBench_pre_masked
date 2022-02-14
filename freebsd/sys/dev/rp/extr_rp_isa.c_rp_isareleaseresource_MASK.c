
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t MBaseIO; } ;
struct TYPE_7__ {int ** bus_ctlp; int ** io_rid; int ** io; int dev; } ;
typedef TYPE_1__ CONTROLLER_t ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int **,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(CONTROLLER_t *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_4);

 if (VAR_4 == VAR_3)
  VAR_3 = ((void*)0);
 if (VAR_4->io != ((void*)0)) {
  for (VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++)
   if (VAR_4->io[VAR_5] != ((void*)0))
    FUNC_1(VAR_4->dev, VAR_2, VAR_4->io_rid[VAR_5], VAR_4->io[VAR_5]);
  FUNC_2(VAR_4->io, VAR_1);
 }
 if (VAR_4->io_rid != ((void*)0))
  FUNC_2(VAR_4->io_rid, VAR_1);
 if (VAR_3 != ((void*)0) && VAR_3->io[FUNC_0(VAR_4)->MBaseIO] != ((void*)0)) {
  FUNC_1(VAR_3->dev, VAR_2, VAR_3->io_rid[FUNC_0(VAR_4)->MBaseIO], VAR_3->io[FUNC_0(VAR_4)->MBaseIO]);
  VAR_3->io[FUNC_0(VAR_4)->MBaseIO] = ((void*)0);
  VAR_3->io_rid[FUNC_0(VAR_4)->MBaseIO] = 0;
 }
 if (VAR_4->bus_ctlp != ((void*)0))
  FUNC_2(VAR_4->bus_ctlp, VAR_1);
}
