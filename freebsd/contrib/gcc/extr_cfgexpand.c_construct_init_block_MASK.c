
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_18__ {scalar_t__ next_bb; int count; int frequency; int flags; int succs; } ;
struct TYPE_17__ {scalar_t__ dest; int count; int probability; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static basic_block
FUNC_14 (void)
{
  basic_block VAR_5, VAR_6;
  edge VAR_7 = ((void*)0);
  int VAR_8;


  FUNC_5 (FUNC_0 (VAR_2->succs) == 1);
  FUNC_8 (VAR_2);
  FUNC_8 (VAR_3);
  VAR_2->flags |= VAR_0;
  VAR_3->flags |= VAR_0;

  VAR_7 = FUNC_1 (VAR_2, 0);



  if (VAR_7 && VAR_7->dest != VAR_2->next_bb)
    {
      tree VAR_9 = FUNC_12 (VAR_7->dest);

      FUNC_4 (FUNC_9 (VAR_9));
      VAR_8 = 0;
    }
  else
    VAR_8 = VAR_1;

  VAR_5 = FUNC_3 (FUNC_2 (FUNC_6 ()),
       FUNC_7 (),
       VAR_2);
  VAR_5->frequency = VAR_2->frequency;
  VAR_5->count = VAR_2->count;
  if (VAR_7)
    {
      VAR_6 = VAR_7->dest;
      FUNC_11 (VAR_7, VAR_5);
      VAR_7 = FUNC_10 (VAR_5, VAR_6, VAR_8);
    }
  else
    VAR_7 = FUNC_10 (VAR_5, VAR_3, VAR_1);
  VAR_7->probability = VAR_4;
  VAR_7->count = VAR_2->count;

  FUNC_13 (VAR_5);
  return VAR_5;
}
