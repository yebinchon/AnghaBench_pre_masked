
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int location_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 char* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,int,int ,int,int *,int *,int *) ;
 int FUNC_18 (int ,char*,int *,int ,char const*,int ,int ,int ,int ,char const*,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_19 (tree VAR_3,
                      tree VAR_4, bool VAR_5,
                      tree VAR_6, bool VAR_7,
        bool VAR_8)
{
  tree VAR_9 = VAR_0;
  tree VAR_10 = VAR_0;
  const char *VAR_11;
  const char *VAR_12;
  location_t VAR_13;
  location_t VAR_14;
  location_t VAR_15;
  FUNC_10 (VAR_4);
  FUNC_10 (VAR_6);

  if (FUNC_7 (VAR_4)
      || FUNC_7 (VAR_6))
    return 0;

  VAR_11 = FUNC_15 (VAR_4);
  VAR_12 = FUNC_15 (VAR_6);

  if (FUNC_16 (FUNC_11 (FUNC_5 (VAR_6))))
    return 0;

  FUNC_17 (VAR_4, VAR_5, VAR_6, VAR_7, &VAR_3,
                            &VAR_9, &VAR_10);

  if (!VAR_3)
    return 0;

  if (FUNC_0 (VAR_3))
    VAR_13 = FUNC_1 (VAR_3);
  else
    return 0;

  if (FUNC_0 (VAR_9))
    VAR_14 = FUNC_1 (VAR_9);
  else
    VAR_14 = VAR_13;

  if (FUNC_0 (VAR_10))
    VAR_15 = FUNC_1 (VAR_10);
  else
    VAR_15 = VAR_13;

  if (FUNC_6 (VAR_3))
    return 0;





  if (VAR_8)
    if ((FUNC_9 (FUNC_14 (VAR_4))
  && FUNC_9 (FUNC_14 (VAR_6)))
 || (FUNC_4 (VAR_4) != VAR_2
     && FUNC_8 (VAR_4, VAR_2))
 || (FUNC_4 (VAR_6) != VAR_2
     && FUNC_8 (VAR_6, VAR_2)))
      return 0;




  FUNC_18 (VAR_1,
    "%Hlikely type-punning may break strict-aliasing rules: "
    "object %<%s%s%> of main type %qT is referenced at or around "
    "%s:%d and may be "
    "aliased to object %<%s%s%> of main type %qT which is referenced "
    "at or around %s:%d.",
    &VAR_13,
    FUNC_12 (VAR_4, VAR_5),
    VAR_11, FUNC_13 (VAR_4, VAR_5),
    FUNC_2 (VAR_14), FUNC_3 (VAR_14),
    FUNC_12 (VAR_6, VAR_7),
    VAR_12, FUNC_13 (VAR_6, VAR_7),
    FUNC_2 (VAR_15), FUNC_3 (VAR_15));

  return 1;
}
