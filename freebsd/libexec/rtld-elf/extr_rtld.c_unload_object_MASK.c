
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ refcount; scalar_t__ filtees_loaded; int path; int mapsize; int mapbase; scalar_t__ marker; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (int ,TYPE_1__*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_11(Obj_Entry *VAR_3, RtldLockState *VAR_4)
{
 Obj_Entry VAR_5, *VAR_6, *VAR_7;

 FUNC_5(VAR_3->refcount == 0);





 FUNC_9(VAR_3);


 for (VAR_6 = FUNC_1(&VAR_2); VAR_6 != ((void*)0); VAR_6 = VAR_7) {
  VAR_7 = FUNC_3(VAR_6, VAR_7);
  if (VAR_6->marker || VAR_6->refcount != 0)
   continue;
  FUNC_0(VAR_0, VAR_6, VAR_6->mapbase,
      VAR_6->mapsize, 0, VAR_6->path);
  FUNC_6("unloading \"%s\"", VAR_6->path);





  FUNC_4(&VAR_2, VAR_6, VAR_7);
  VAR_1--;

  if (VAR_6->filtees_loaded) {
   if (VAR_7 != ((void*)0)) {
    FUNC_7(&VAR_5);
    FUNC_2(VAR_7, &VAR_5, VAR_7);
    FUNC_10(VAR_6, VAR_4);
    VAR_7 = FUNC_3(&VAR_5, VAR_7);
    FUNC_4(&VAR_2, &VAR_5, VAR_7);
   } else
    FUNC_10(VAR_6, VAR_4);
  }
  FUNC_8(VAR_6);
 }
}
