
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int coff; int roff; int cols; int rows; void* cl_private; } ;
typedef TYPE_1__ SCR ;
typedef int CL_PRIVATE ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 void* FUNC_4 (int ,int ,int ,int ,int ) ;

int
FUNC_5(SCR *VAR_2, SCR *VAR_3)
{
 CL_PRIVATE *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 FUNC_2(VAR_4, VAR_0);

 if (FUNC_1(VAR_2))
  FUNC_3(FUNC_1(VAR_2));

 VAR_2->cl_private = FUNC_4(VAR_1, VAR_2->rows, VAR_2->cols,
         VAR_2->roff, VAR_2->coff);
 VAR_3->cl_private = FUNC_4(VAR_1, VAR_3->rows, VAR_3->cols,
         VAR_3->roff, VAR_3->coff);


 return (0);
}
