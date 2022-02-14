
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int col; int row; int* width; int *** tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1 != ((void*)0) && VAR_1->col > 0 && VAR_1->row > 0 && VAR_3 < VAR_1->col);
 FUNC_0(VAR_2 != ((void*)0) && VAR_1->tbl[VAR_3][VAR_1->row - 1] == ((void*)0));
 if ((VAR_1->tbl[VAR_3][VAR_1->row - 1] = FUNC_2(VAR_2)) == ((void*)0))
  FUNC_1(VAR_0, "strdup");
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 > VAR_1->width[VAR_3])
  VAR_1->width[VAR_3] = VAR_4;
}
