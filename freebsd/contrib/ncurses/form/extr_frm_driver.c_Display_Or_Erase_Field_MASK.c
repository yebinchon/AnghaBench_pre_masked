
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_8__ {scalar_t__ opts; int fcol; int frow; int cols; int rows; int form; } ;
typedef TYPE_1__ FIELD ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(FIELD *VAR_5, bool VAR_6)
{
  WINDOW *VAR_7;
  WINDOW *VAR_8;

  if (!VAR_5)
    return VAR_1;

  VAR_8 = FUNC_2(VAR_5->form);
  VAR_7 = FUNC_8(VAR_8,
        VAR_5->rows, VAR_5->cols, VAR_5->frow, VAR_5->fcol);

  if (!VAR_7)
    return VAR_1;
  else
    {
      if ((unsigned)VAR_5->opts & VAR_3)
 {
   FUNC_5(VAR_5, VAR_7);
 }
      else
 {
   (void)FUNC_9(VAR_7, (int)FUNC_6(VAR_8));
 }
      FUNC_10(VAR_7);
    }

  if (!VAR_6)
    {
      if ((unsigned)VAR_5->opts & VAR_2)
 {
   if (FUNC_3(VAR_5))
     FUNC_4(VAR_5, VAR_7);
   else
     FUNC_0(VAR_5, VAR_7);
 }
      FUNC_1(VAR_5, VAR_4);
    }
  FUNC_11(VAR_7);
  FUNC_7(VAR_7);
  return VAR_0;
}
