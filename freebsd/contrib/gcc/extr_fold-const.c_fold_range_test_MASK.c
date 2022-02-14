
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_3__ {scalar_t__ (* global_bindings_p ) () ;} ;
struct TYPE_4__ {TYPE_1__ decls; } ;


 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (char const* const,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,int*,scalar_t__*,scalar_t__*,int*) ;
 scalar_t__ FUNC_7 (int*,scalar_t__*,scalar_t__*,int,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static tree
FUNC_12 (enum tree_code VAR_8, tree VAR_9, tree VAR_10, tree VAR_11)
{
  int VAR_12 = (VAR_8 == VAR_3
        || VAR_8 == VAR_4);
  int VAR_13, VAR_14, VAR_15;
  tree VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
  bool VAR_22 = 0;
  tree VAR_23 = FUNC_6 (VAR_10, &VAR_13, &VAR_16, &VAR_19, &VAR_22);
  tree VAR_24 = FUNC_6 (VAR_11, &VAR_14, &VAR_17, &VAR_20, &VAR_22);
  tree VAR_25;
  const char * const VAR_26 = FUNC_1("assuming signed overflow does not occur "
      "when simplifying range test");



  if (VAR_12)
    VAR_13 = ! VAR_13, VAR_14 = ! VAR_14;





  if ((VAR_23 == 0 || VAR_24 == 0 || FUNC_8 (VAR_23, VAR_24, 0))
      && FUNC_7 (&VAR_15, &VAR_18, &VAR_21, VAR_13, VAR_16, VAR_19,
         VAR_14, VAR_17, VAR_20)
      && 0 != (VAR_25 = (FUNC_3 (VAR_9,
      VAR_23 != 0 ? VAR_23
      : VAR_24 != 0 ? VAR_24 : VAR_6,
      VAR_15, VAR_18, VAR_21))))
    {
      if (VAR_22)
 FUNC_4 (VAR_26, VAR_5);
      return VAR_12 ? FUNC_5 (VAR_25) : VAR_25;
    }




  else if (VAR_0
    && VAR_23 != 0 && VAR_24 != 0
    && (VAR_8 == VAR_1
        || VAR_8 == VAR_3)
    && FUNC_8 (VAR_23, VAR_24, 0))
    {



      if (FUNC_10 (VAR_23))
 return FUNC_2 (VAR_8 == VAR_1
         ? VAR_2 : VAR_4,
         VAR_9, VAR_10, VAR_11);

      else if (VAR_7.decls.global_bindings_p () == 0
        && ! FUNC_0 (VAR_23))
 {
   tree VAR_27 = FUNC_9 (VAR_23);

   if (0 != (VAR_23 = FUNC_3 (VAR_9, VAR_27,
          VAR_12 ? ! VAR_13 : VAR_13,
          VAR_16, VAR_19))
       && (0 != (VAR_24 = FUNC_3 (VAR_9, VAR_27,
       VAR_12 ? ! VAR_14 : VAR_14,
       VAR_17, VAR_20))))
     {
       if (VAR_22)
  FUNC_4 (VAR_26,
           VAR_5);
       return FUNC_2 (VAR_8 == VAR_1
        ? VAR_2 : VAR_4,
        VAR_9, VAR_23, VAR_24);
     }
 }
    }

  return 0;
}
