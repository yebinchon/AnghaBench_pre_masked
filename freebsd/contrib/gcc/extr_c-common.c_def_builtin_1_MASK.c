
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;
typedef enum built_in_class { ____Placeholder_built_in_class } built_in_class ;
struct TYPE_2__ {scalar_t__ (* builtin_function ) (char const*,scalar_t__,int,int,char const*,scalar_t__) ;} ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,int) ;
 scalar_t__ FUNC_4 (char const*,scalar_t__,int,int,char const*,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,scalar_t__,int,int,char const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (enum built_in_function VAR_6,
        const char *VAR_7,
        enum built_in_class VAR_8,
        tree VAR_9, tree VAR_10,
        bool VAR_11, bool VAR_12, bool VAR_13,
        tree VAR_14, bool VAR_15)
{
  tree VAR_16;
  const char *VAR_17;

  if (VAR_9 == VAR_1)
    return;

  FUNC_1 ((!VAR_11 && !VAR_12)
       || !FUNC_3 (VAR_7, "__builtin_",
      FUNC_2 ("__builtin_")));

  VAR_17 = VAR_7 + FUNC_2 ("__builtin_");
  VAR_16 = VAR_5.builtin_function (VAR_7, VAR_9, VAR_6, VAR_8,
          (VAR_12 ? VAR_17 : ((void*)0)),
          VAR_14);
  if (VAR_11
      && !VAR_2 && !FUNC_0 (VAR_17)
      && !(VAR_13 && VAR_3))
    VAR_5.builtin_function (VAR_17, VAR_10, VAR_6, VAR_8,
     ((void*)0), VAR_14);

  VAR_0[(int) VAR_6] = VAR_16;
  if (VAR_15)
    VAR_4[(int) VAR_6] = VAR_16;
}
