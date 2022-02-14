
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {scalar_t__ bad_p; } ;
typedef TYPE_1__ conversion ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,int ,int ,int,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_1__* FUNC_8 (scalar_t__,int ,scalar_t__,int,int ) ;
 int FUNC_9 (int *,void*) ;

tree
FUNC_10 (tree VAR_5,
        tree VAR_6,
        bool VAR_7)
{
  conversion *VAR_8;
  void *VAR_9;

  if (VAR_5 == VAR_4 || FUNC_7 (VAR_6))
    return VAR_4;
  if (FUNC_0 (VAR_5))
    {
      VAR_6 = FUNC_3 (VAR_1, VAR_2,
     FUNC_4 (VAR_1, VAR_6),
     VAR_5, VAR_0);
      return FUNC_2 (VAR_5, VAR_6);
    }


  VAR_9 = FUNC_5 (0);

  VAR_8 = FUNC_8 (VAR_5, FUNC_1 (VAR_6), VAR_6,
         VAR_7,
         VAR_0);
  if (!VAR_8 || VAR_8->bad_p)
    VAR_6 = VAR_1;
  else
    VAR_6 = FUNC_6 (VAR_8, VAR_6, VAR_1, 0, 0,
                                       0,
         VAR_7);


  FUNC_9 (&VAR_3, VAR_9);

  return VAR_6;
}
