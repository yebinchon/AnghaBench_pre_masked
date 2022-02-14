
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ (* types_compatible_p ) (scalar_t__,scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__,int) ;
 TYPE_1__ VAR_10 ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_17 (tree VAR_11, tree VAR_12, tree VAR_13,
        tree VAR_14, bool VAR_15)
{
  tree VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

  if (FUNC_5 (VAR_11) != VAR_8
      && FUNC_5 (VAR_11) != VAR_9
      && FUNC_5 (VAR_11) != VAR_7)
    return VAR_6;


  if (VAR_10.types_compatible_p (VAR_11, VAR_14))
    return VAR_6;

  VAR_19 = VAR_6;
  for (VAR_16 = FUNC_7 (VAR_11); VAR_16 ; VAR_16 = FUNC_4 (VAR_16))
    {
      int VAR_21;

      if (FUNC_5 (VAR_16) != VAR_2)
 continue;
      if (FUNC_1 (VAR_16))
 continue;

      VAR_20 = FUNC_10 (VAR_16);
      if (FUNC_5 (VAR_20) != VAR_4)
 continue;




      if (!FUNC_2 (VAR_16))
 continue;


      VAR_19 = VAR_6;


      VAR_21 = FUNC_15 (VAR_20, VAR_13);
      if (VAR_21 > 0)
 continue;

      VAR_18 = FUNC_6 (VAR_16);



      if (VAR_21 == 0
   && VAR_10.types_compatible_p (VAR_14, VAR_18))
 {
   if (VAR_15)
     VAR_12 = FUNC_8 (VAR_3, VAR_11, VAR_12);
   VAR_17 = FUNC_9 (VAR_1, VAR_18, VAR_12, VAR_16, VAR_6);
   return VAR_17;
 }


      if (!FUNC_0 (VAR_18))
 continue;




      if (FUNC_5 (VAR_18) == VAR_0)
 VAR_19 = VAR_16;


      if (!FUNC_3 (VAR_16)
   || FUNC_5 (FUNC_3 (VAR_16)) != VAR_4)
 continue;
      VAR_17 = FUNC_11 (VAR_5, VAR_13, VAR_20, 1);
      if (!FUNC_16 (VAR_17, FUNC_3 (VAR_16)))
 continue;



      VAR_13 = VAR_17;
      goto found;
    }

  if (!VAR_19)
    return VAR_6;

  VAR_16 = VAR_19;
  VAR_18 = FUNC_6 (VAR_16);
  VAR_13 = FUNC_11 (VAR_5, VAR_13, FUNC_10 (VAR_16), 1);

 found:


  if (VAR_15)
    VAR_12 = FUNC_8 (VAR_3, VAR_11, VAR_12);
  VAR_12 = FUNC_9 (VAR_1, VAR_18, VAR_12, VAR_16, VAR_6);

  VAR_17 = FUNC_12 (VAR_12, VAR_13, VAR_14);
  if (VAR_17)
    return VAR_17;
  return FUNC_17 (VAR_18, VAR_12, VAR_13,
          VAR_14, 0);
}
