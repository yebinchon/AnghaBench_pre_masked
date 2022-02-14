
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int coff; int roff; int cols; int rows; int * cl_private; } ;
typedef TYPE_1__ SCR ;
typedef int CL_PRIVATE ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int * FUNC_4 (int ,int ,int ,int ,int ) ;

int
FUNC_5(SCR *VAR_2, SCR **VAR_3)
{
 CL_PRIVATE *VAR_4;
 SCR* VAR_5;

 if (VAR_2) {
     VAR_4 = FUNC_0(VAR_2);
     FUNC_2(VAR_4, VAR_0);

     if (FUNC_1(VAR_2)) {
      FUNC_3(FUNC_1(VAR_2));
      VAR_2->cl_private = ((void*)0);
     }
 }


 if (!VAR_3)
  return 0;

 for (; (VAR_5 = *VAR_3) != ((void*)0); ++VAR_3) {
  VAR_4 = FUNC_0(VAR_5);
  FUNC_2(VAR_4, VAR_0);

  if (FUNC_1(VAR_5))
   FUNC_3(FUNC_1(VAR_5));
  VAR_5->cl_private = FUNC_4(VAR_1, VAR_5->rows, VAR_5->cols,
        VAR_5->roff, VAR_5->coff);
 }


 return (0);
}
