
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_inputfilters; int * d_inputfilterlist; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;

void
FUNC_1()
{
 int VAR_5;

 if (VAR_4 == VAR_2)
 {

  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  if (VAR_0[VAR_5].d_inputfilterlist != ((void*)0))
  {
   FUNC_0(VAR_0[VAR_5].d_inputfilterlist,
          VAR_0[VAR_5].d_inputfilters,
          VAR_1);
  }
 }
}
