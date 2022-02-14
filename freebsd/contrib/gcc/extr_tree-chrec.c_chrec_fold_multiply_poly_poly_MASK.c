
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_11 (int) ;

__attribute__((used)) static inline tree
FUNC_12 (tree VAR_2,
          tree VAR_3,
          tree VAR_4)
{
  tree VAR_5, VAR_6, VAR_7;
  int VAR_8;

  FUNC_11 (VAR_3);
  FUNC_11 (VAR_4);
  FUNC_11 (FUNC_4 (VAR_3) == VAR_0);
  FUNC_11 (FUNC_4 (VAR_4) == VAR_0);
  FUNC_11 (FUNC_10 (VAR_3) == FUNC_10 (VAR_4));
  FUNC_11 (VAR_2 == FUNC_10 (VAR_3));




  if (FUNC_2 (VAR_3) < FUNC_2 (VAR_4))

    return FUNC_6
      (FUNC_2 (VAR_4),
       FUNC_8 (VAR_2, FUNC_0 (VAR_4), VAR_3),
       FUNC_1 (VAR_4));

  if (FUNC_2 (VAR_4) < FUNC_2 (VAR_3))

    return FUNC_6
      (FUNC_2 (VAR_3),
       FUNC_8 (VAR_2, FUNC_0 (VAR_3), VAR_4),
       FUNC_1 (VAR_3));





  VAR_5 = FUNC_8 (VAR_2, FUNC_0 (VAR_3), FUNC_0 (VAR_4));


  VAR_6 = FUNC_8 (VAR_2, FUNC_0 (VAR_3), FUNC_1 (VAR_4));
  VAR_6 = FUNC_9 (VAR_2, VAR_6, FUNC_8 (VAR_2,
             FUNC_1 (VAR_3),
             FUNC_0 (VAR_4)));
  VAR_6 = FUNC_9 (VAR_2, VAR_6, FUNC_8 (VAR_2,
             FUNC_1 (VAR_3),
             FUNC_1 (VAR_4)));

  VAR_7 = FUNC_8 (VAR_2, FUNC_1 (VAR_3), FUNC_1 (VAR_4));
  VAR_7 = FUNC_8 (VAR_2, FUNC_3 (VAR_2)
       ? FUNC_7 (VAR_2, VAR_1)
       : FUNC_5 (VAR_2, 2), VAR_7);

  VAR_8 = FUNC_2 (VAR_3);
  return FUNC_6 (VAR_8, VAR_5,
     FUNC_6 (VAR_8, VAR_6, VAR_7));
}
