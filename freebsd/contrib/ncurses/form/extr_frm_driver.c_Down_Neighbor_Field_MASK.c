
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int frow; int fcol; } ;
typedef TYPE_1__ FIELD ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static FIELD *
FUNC_2(FIELD *VAR_0)
{
  FIELD *VAR_1 = VAR_0;
  int VAR_2 = VAR_0->frow;
  int VAR_3 = VAR_0->fcol;





  do
    {
      VAR_1 = FUNC_0(VAR_1);
    }
  while (VAR_1->frow == VAR_2 && VAR_1->fcol != VAR_3);

  if (VAR_1->frow != VAR_2)
    {


      VAR_2 = VAR_1->frow;



      while (VAR_1->frow == VAR_2 && VAR_1->fcol < VAR_3)
 VAR_1 = FUNC_0(VAR_1);



      if (VAR_1->frow != VAR_2)
 VAR_1 = FUNC_1(VAR_1);
    }

  return (VAR_1);
}
