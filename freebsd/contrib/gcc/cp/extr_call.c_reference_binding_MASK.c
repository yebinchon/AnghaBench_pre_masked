
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int cp_lvalue_kind ;
struct TYPE_13__ {TYPE_1__* next; } ;
struct TYPE_14__ {int need_temporary_p; TYPE_2__ u; } ;
typedef TYPE_3__ conversion ;
struct TYPE_12__ {int check_copy_constructor_p; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 TYPE_3__* FUNC_11 (scalar_t__,TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 TYPE_3__* FUNC_12 (scalar_t__,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_17 (scalar_t__) ;

__attribute__((used)) static conversion *
FUNC_18 (tree VAR_12, tree VAR_13, tree VAR_14, bool VAR_15, int VAR_16)
{
  conversion *VAR_17 = ((void*)0);
  tree VAR_18 = FUNC_3 (VAR_12);
  tree VAR_19 = VAR_13;
  bool VAR_20;
  bool VAR_21;
  cp_lvalue_kind VAR_22 = VAR_7;

  if (FUNC_2 (VAR_18) == VAR_0 && VAR_14 && FUNC_17 (VAR_14))
    {
      VAR_14 = FUNC_13 (VAR_18, VAR_14, VAR_11);
      if (VAR_14 == VAR_10)
 return ((void*)0);
      VAR_19 = FUNC_3 (VAR_14);
    }

  if (FUNC_2 (VAR_19) == VAR_4)
    {

      VAR_22 = VAR_8;
      VAR_19 = FUNC_3 (VAR_19);
    }
  else if (VAR_14)
    VAR_22 = FUNC_14 (VAR_14);




  VAR_20 = FUNC_16 (VAR_18, VAR_19);


  if (VAR_20 && VAR_15
      && !FUNC_5 (VAR_18, VAR_19))
    VAR_18 = FUNC_8 (VAR_18, FUNC_10 (VAR_19));
  VAR_21 = FUNC_15 (VAR_18, VAR_19);

  if (VAR_22 && VAR_21)
    {
      VAR_17 = FUNC_7 (VAR_19, VAR_14);
      VAR_17 = FUNC_11 (VAR_12, VAR_17);
      if ((VAR_22 & VAR_6) != 0
   || ((VAR_22 & VAR_9) != 0 && !FUNC_4 (VAR_18)))
 VAR_17->need_temporary_p = 1;

      return VAR_17;
    }
  else if (FUNC_0 (VAR_19) && !(VAR_16 & VAR_2))
    {
      VAR_17 = FUNC_9 (VAR_18, VAR_19, VAR_14);
      if (VAR_17)
 return VAR_17;
    }



  if (VAR_16 & VAR_3)
    return ((void*)0);
  if (!FUNC_1 (VAR_18))
    return ((void*)0);
  if (FUNC_0 (VAR_19) && VAR_21)
    {
      VAR_17 = FUNC_7 (VAR_19, VAR_14);
      VAR_17 = FUNC_11 (VAR_12, VAR_17);
      if (!(VAR_16 & VAR_1))
 VAR_17->u.next->check_copy_constructor_p = 1;
      return VAR_17;
    }
  if (VAR_20 && !FUNC_5 (VAR_18, VAR_19))
    return ((void*)0);

  VAR_17 = FUNC_12 (VAR_18, VAR_19, VAR_14, VAR_15,
         VAR_16);
  if (!VAR_17)
    return ((void*)0);

  VAR_17 = FUNC_6 (VAR_5, VAR_12, VAR_17);


  VAR_17->need_temporary_p = 1;

  return VAR_17;
}
