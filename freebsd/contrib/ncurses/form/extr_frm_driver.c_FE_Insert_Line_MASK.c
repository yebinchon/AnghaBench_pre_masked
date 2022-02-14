
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TypeArgument ;
struct TYPE_11__ {int drows; scalar_t__ arg; int type; } ;
struct TYPE_10__ {int currow; int w; scalar_t__ curcol; TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(FORM *VAR_4)
{
  FIELD *VAR_5 = VAR_4->current;
  int VAR_6 = VAR_2;

  FUNC_5((FUNC_6("FE_Insert_Line(%p)"), (void *)VAR_4));
  if (FUNC_0(VAR_4, VAR_5,
   VAR_5->type, (int)VAR_0, (TypeArgument *)(VAR_5->arg)))
    {
      bool VAR_7 = (VAR_4->currow != (VAR_5->drows - 1)) &&
      FUNC_3(VAR_4);

      if (!FUNC_4(VAR_5) &&
   (VAR_7 || FUNC_2(VAR_5)))
 {
   if (!VAR_7 && !FUNC_1(VAR_5, 1))
     VAR_6 = VAR_3;
   else
     {
       VAR_4->curcol = 0;
       FUNC_8(VAR_4->w);
       VAR_6 = VAR_1;
     }
 }
    }
  FUNC_7(VAR_6);
}
