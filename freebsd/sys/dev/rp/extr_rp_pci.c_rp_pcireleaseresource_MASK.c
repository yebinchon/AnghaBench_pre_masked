
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** io; int ** io_rid; int dev; } ;
typedef TYPE_1__ CONTROLLER_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(CONTROLLER_t *VAR_2)
{
 FUNC_2(VAR_2);
 if (VAR_2->io != ((void*)0)) {
  if (VAR_2->io[0] != ((void*)0))
   FUNC_0(VAR_2->dev, VAR_1, VAR_2->io_rid[0], VAR_2->io[0]);
  FUNC_1(VAR_2->io, VAR_0);
  VAR_2->io = ((void*)0);
 }
 if (VAR_2->io_rid != ((void*)0)) {
  FUNC_1(VAR_2->io_rid, VAR_0);
  VAR_2->io = ((void*)0);
 }
}
