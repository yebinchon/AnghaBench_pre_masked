
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frow; int rows; int fcol; int cols; } ;
typedef TYPE_1__ FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(FIELD *VAR_2, int VAR_3, int VAR_4)
{
  FUNC_1((FUNC_2("Field_encloses(%p)"), (void *)VAR_2));
  if (VAR_2 != 0
      && VAR_2->frow <= VAR_3
      && (VAR_2->frow + VAR_2->rows) > VAR_3
      && VAR_2->fcol <= VAR_4
      && (VAR_2->fcol + VAR_2->cols) > VAR_4)
    {
      FUNC_0(VAR_1);
    }
  FUNC_0(VAR_0);
}
