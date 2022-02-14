
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ holdcount; int unholdfree; int mapsize; int mapbase; } ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(Obj_Entry *VAR_0)
{

 if (VAR_0->holdcount > 0) {
  VAR_0->unholdfree = 1;
  return;
 }
 FUNC_1(VAR_0->mapbase, VAR_0->mapsize);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
