
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_4__ {int drows; scalar_t__ dcols; scalar_t__ cols; int just; int buf; } ;
typedef int FIELD_CELL ;
typedef TYPE_1__ FIELD ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,int ) ;



 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(FIELD *VAR_0, WINDOW *VAR_1)
{
  FIELD_CELL *VAR_2;
  int VAR_3;
  int VAR_4 = 0;

  VAR_2 = FUNC_2(VAR_0->buf, FUNC_1(VAR_0));
  VAR_3 = (int)(FUNC_0(VAR_0->buf, FUNC_1(VAR_0)) - VAR_2);

  if (VAR_3 > 0)
    {
      FUNC_3(VAR_1 && (VAR_0->drows == 1) && (VAR_0->dcols == VAR_0->cols));

      switch (VAR_0->just)
 {
 case 129:
   break;
 case 130:
   VAR_4 = (VAR_0->cols - VAR_3) / 2;
   break;
 case 128:
   VAR_4 = VAR_0->cols - VAR_3;
   break;
 default:
   break;
 }

      FUNC_5(VAR_1, 0, VAR_4);
      FUNC_4(VAR_1, VAR_2, VAR_3);
    }
}
