
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int chtype ;
typedef int TypeArgument ;
struct TYPE_12__ {scalar_t__ arg; int type; } ;
struct TYPE_11__ {int w; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(FORM *VAR_3)
{
  FIELD *VAR_4 = VAR_3->current;
  int VAR_5 = VAR_1;

  FUNC_5((FUNC_6("FE_Insert_Character(%p)"), (void *)VAR_3));
  if (FUNC_0(VAR_3, VAR_4, VAR_4->type, (int)VAR_0,
   (TypeArgument *)(VAR_4->arg)))
    {
      bool VAR_6 = FUNC_3(VAR_3);

      if (VAR_6 ||
   ((FUNC_4(VAR_4) && FUNC_2(VAR_4))))
 {
   if (!VAR_6 && !FUNC_1(VAR_4, 1))
     VAR_5 = VAR_2;
   else
     {
       FUNC_9(VAR_3->w, (chtype)VAR_0);
       VAR_5 = FUNC_7(VAR_3);
     }
 }
    }
  FUNC_8(VAR_5);
}
