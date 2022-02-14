
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__ (* type_for_size ) (int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 TYPE_2__ VAR_4 ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ) ;

tree
FUNC_14 (tree VAR_5, tree VAR_6)
{
  if (FUNC_3 (VAR_6) == VAR_5)
      return VAR_6;

  if (FUNC_11 (VAR_6))
    {
      tree VAR_7 = FUNC_7 (VAR_5, 0);
      if (FUNC_2 (VAR_6) || FUNC_1 (VAR_6))
 VAR_7 = FUNC_10 (VAR_7, 0, FUNC_2 (VAR_6),
      FUNC_1 (VAR_6));
      return VAR_7;
    }

  switch (FUNC_0 (FUNC_3 (VAR_6)))
    {
    case 130:
 return FUNC_9 (VAR_1, VAR_5, VAR_6);

    case 129:
 if (FUNC_4 (FUNC_3 (VAR_6)) != VAR_2)
  VAR_6 = FUNC_9 (VAR_1,
     VAR_4.types.type_for_size (VAR_2, 0),
     VAR_6);
 return FUNC_9 (VAR_0, VAR_5, VAR_6);

    case 128:

 if (FUNC_12 (FUNC_3 (VAR_6)) || FUNC_5 (FUNC_3 (FUNC_3 (VAR_6))))
  return FUNC_6 (VAR_1, VAR_5, VAR_6);


      default:
 FUNC_8 ("cannot convert to a block pointer type");
 return FUNC_14 (VAR_5, VAR_3);
    }
}
