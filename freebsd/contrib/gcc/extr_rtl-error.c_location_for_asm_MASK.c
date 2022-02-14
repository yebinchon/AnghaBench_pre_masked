
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * rtx ;
struct TYPE_5__ {int line; int file; } ;
typedef TYPE_1__ location_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static location_t
FUNC_7 (rtx VAR_4)
{
  rtx VAR_5 = FUNC_4 (VAR_4);
  rtx VAR_6;
  location_t VAR_7;


  if (FUNC_3 (VAR_5) == VAR_2 && FUNC_3 (FUNC_5 (VAR_5)) == VAR_0)
    VAR_6 = FUNC_5 (VAR_5);
  else if (FUNC_3 (VAR_5) == VAR_0)
    VAR_6 = VAR_5;
  else if (FUNC_3 (VAR_5) == VAR_1
    && FUNC_3 (FUNC_6 (VAR_5, 0, 0)) == VAR_2)
    VAR_6 = FUNC_5 (FUNC_6 (VAR_5, 0, 0));
  else if (FUNC_3 (VAR_5) == VAR_1
    && FUNC_3 (FUNC_6 (VAR_5, 0, 0)) == VAR_0)
    VAR_6 = FUNC_6 (VAR_5, 0, 0);
  else
    VAR_6 = ((void*)0);

  if (VAR_6)



    {
      VAR_7.file = FUNC_0 (VAR_6);
      VAR_7.line = FUNC_1 (VAR_6);
    }

  else
    VAR_7 = VAR_3;
  return VAR_7;
}
