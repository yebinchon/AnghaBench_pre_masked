
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int col; int row; int *** tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int ** FUNC_2 (int **,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_2;

 FUNC_0(VAR_1 != ((void*)0) && VAR_1->col > 0);
 VAR_1->row++;
 for (VAR_2 = 0; VAR_2 < VAR_1->col; VAR_2++) {
  VAR_1->tbl[VAR_2] = FUNC_2(VAR_1->tbl[VAR_2], sizeof(*VAR_1->tbl[VAR_2]) * VAR_1->row);
  if (VAR_1->tbl[VAR_2] == ((void*)0))
   FUNC_1(VAR_0, "realloc");
  VAR_1->tbl[VAR_2][VAR_1->row - 1] = ((void*)0);
 }
}
