
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int num; } ;
struct TYPE_2__ {int * parray; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct loop*,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct loop*,int ) ;
 int FUNC_7 (scalar_t__) ;
 struct loop* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_12 (tree VAR_6, tree VAR_7)
{
  struct loop *VAR_8;
  tree VAR_9, VAR_10, VAR_11;

  if (VAR_3 == ((void*)0))
    return 1;

  VAR_8 = FUNC_8 (VAR_7);
  if (VAR_8 == ((void*)0))
    return 1;

  VAR_9 = FUNC_6 (VAR_8, FUNC_2 (VAR_8, VAR_6));
  if (FUNC_1 (VAR_9) != VAR_1)
    return 1;

  VAR_10 = FUNC_5 (VAR_9, VAR_8->num);
  VAR_11 = FUNC_3 (VAR_9, VAR_8->num);

  if (VAR_11 == VAR_0
      || !FUNC_7 (VAR_11)
      || !FUNC_11 (VAR_10))
    return 1;




  if (FUNC_10 (VAR_10, VAR_11, VAR_7,
        VAR_3->parray[FUNC_0 (VAR_9)],
        1))
    return 1;

  if (VAR_4 && (VAR_5 & VAR_2) != 0)
    {
      FUNC_9 (VAR_4, VAR_6, 0);
      FUNC_4 (VAR_4, ": loop information indicates does not overflow\n");
    }

  return 0;
}
