
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef int ce_info ;
struct TYPE_21__ {int pass; TYPE_3__* test_bb; int else_bb; int then_bb; } ;
typedef TYPE_2__ ce_if_block_t ;
typedef TYPE_3__* basic_block ;
struct TYPE_22__ {int succs; } ;
struct TYPE_20__ {int flags; int dest; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (TYPE_3__*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (TYPE_2__*,char,int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static basic_block
FUNC_9 (basic_block VAR_11, int VAR_12)
{
  ce_if_block_t VAR_13;
  edge VAR_14;
  edge VAR_15;


  if (FUNC_0 (VAR_11->succs) != 2)
    return ((void*)0);

  VAR_14 = FUNC_1 (VAR_11, 0);
  VAR_15 = FUNC_1 (VAR_11, 1);


  if ((VAR_14->flags & VAR_2)
      || (VAR_15->flags & VAR_2))
    return ((void*)0);


  if ((VAR_14->flags & VAR_4)
      || (VAR_15->flags & VAR_4))
    return ((void*)0);


  if (VAR_14->flags & VAR_3)
    ;
  else if (VAR_15->flags & VAR_3)
    {
      edge VAR_16 = VAR_15;
      VAR_15 = VAR_14;
      VAR_14 = VAR_16;
    }
  else

    return ((void*)0);

  FUNC_8 (&VAR_13, '\0', sizeof (VAR_13));
  VAR_13.test_bb = VAR_11;
  VAR_13.then_bb = VAR_14->dest;
  VAR_13.else_bb = VAR_15->dest;
  VAR_13.pass = VAR_12;





  if (FUNC_4 (&VAR_13))
    goto success;

  if (VAR_7 && VAR_6
      && FUNC_3 (VAR_11, VAR_14, VAR_15))
    goto success;

  if (VAR_8[VAR_0] >= VAR_1
      && (! VAR_5 || VAR_10))
    {
      if (FUNC_5 (VAR_11, VAR_14, VAR_15))
 goto success;
      if (FUNC_6 (VAR_11, VAR_14, VAR_15))
 goto success;
    }

  return ((void*)0);

 success:
  if (VAR_9)
    FUNC_7 (VAR_9, "Conversion succeeded on pass %d.\n", VAR_12);
  return VAR_13.test_bb;
}
