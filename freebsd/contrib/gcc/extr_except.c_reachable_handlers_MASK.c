
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {scalar_t__ built_landing_pads; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int * FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int,int,int ,int **) ;

rtx
FUNC_8 (rtx VAR_6)
{
  bool VAR_7 = 0;
  rtx VAR_8 = ((void*)0);
  int VAR_9;

  if (FUNC_2 (VAR_6)
      && FUNC_0 (FUNC_3 (VAR_6)) == VAR_2)
    {
      VAR_9 = FUNC_5 (FUNC_3 (VAR_6), 0);
      VAR_7 = 1;
    }
  else
    {
      rtx VAR_10 = FUNC_6 (VAR_6, VAR_1, VAR_0);
      if (!VAR_10 || FUNC_1 (FUNC_4 (VAR_10, 0)) <= 0)
 return ((void*)0);
      VAR_9 = FUNC_1 (FUNC_4 (VAR_10, 0));
    }

  FUNC_7 (VAR_9, VAR_7,
        (VAR_5->eh->built_landing_pads
         ? VAR_4
         : VAR_3),
        &VAR_8);

  return VAR_8;
}
