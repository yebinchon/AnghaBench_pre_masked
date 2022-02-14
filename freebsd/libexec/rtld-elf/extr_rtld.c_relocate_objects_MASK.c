
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ marker; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,TYPE_1__*,int,int *) ;

__attribute__((used)) static int
FUNC_2(Obj_Entry *VAR_1, bool VAR_2, Obj_Entry *VAR_3,
    int VAR_4, RtldLockState *VAR_5)
{
 Obj_Entry *VAR_6;
 int VAR_7;

 for (VAR_7 = 0, VAR_6 = VAR_1; VAR_6 != ((void*)0);
     VAR_6 = FUNC_0(VAR_6, VAR_0)) {
  if (VAR_6->marker)
   continue;
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4,
      VAR_5);
  if (VAR_7 == -1)
   break;
 }
 return (VAR_7);
}
