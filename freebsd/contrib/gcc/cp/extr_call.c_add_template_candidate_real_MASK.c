
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unification_kind_t ;
typedef scalar_t__ tree ;
struct z_candidate {int template_decl; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 struct z_candidate* FUNC_13 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct z_candidate* FUNC_14 (struct z_candidate**,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,int ) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct z_candidate*
FUNC_21 (struct z_candidate **VAR_3, tree VAR_4,
        tree VAR_5, tree VAR_6, tree VAR_7,
        tree VAR_8, tree VAR_9,
        tree VAR_10, int VAR_11, tree VAR_12,
        unification_kind_t VAR_13)
{
  int VAR_14 = FUNC_6 (VAR_4);
  tree VAR_15 = FUNC_18 (VAR_14);
  tree VAR_16 = VAR_7;
  struct z_candidate *VAR_17;
  int VAR_18;
  tree VAR_19;



  if (FUNC_5 (VAR_4))
    VAR_16 = FUNC_10 (VAR_16);

  if ((FUNC_4 (VAR_4)
       || FUNC_1 (VAR_4))
      && FUNC_0 (FUNC_3 (VAR_4)))
    VAR_16 = FUNC_10 (VAR_16);

  VAR_18 = FUNC_15 (VAR_4, VAR_6, VAR_15,
      VAR_16,
      VAR_8, VAR_13, VAR_11);

  if (VAR_18 != 0)
    return ((void*)0);

  VAR_19 = FUNC_16 (VAR_4, VAR_15, VAR_2);
  if (VAR_19 == VAR_1)
    return ((void*)0);
  if (FUNC_2 (VAR_19) && FUNC_17 (VAR_7) == 2)
    {
      tree VAR_20 = FUNC_9 (VAR_19);
      if (VAR_20 && FUNC_19 (FUNC_12 (FUNC_11 (VAR_20)),
        VAR_5))
 return ((void*)0);
    }

  if (VAR_12 != VAR_0)

    VAR_17 = FUNC_13 (VAR_3, VAR_19, VAR_12, VAR_9,
          VAR_10, VAR_7);
  else
    VAR_17 = FUNC_14 (VAR_3, VAR_19, VAR_5,
       VAR_7, VAR_9,
       VAR_10, VAR_11);
  if (FUNC_8 (VAR_19) != VAR_4)
    VAR_17->template_decl = FUNC_20 (VAR_4, VAR_15, VAR_0);
  else
    VAR_17->template_decl = FUNC_7 (VAR_19);

  return VAR_17;
}
