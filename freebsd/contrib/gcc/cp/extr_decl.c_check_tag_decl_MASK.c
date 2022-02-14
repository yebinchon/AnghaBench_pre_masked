
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__* specs; scalar_t__ type; scalar_t__ storage_class; scalar_t__ redefined_builtin_type; scalar_t__ multiple_types_p; } ;
typedef TYPE_1__ cp_decl_specifier_seq ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (char*,...) ;

tree
FUNC_9 (cp_decl_specifier_seq *VAR_17)
{
  int VAR_18 = VAR_17->specs[(int)VAR_7] != 0;
  int VAR_19 = VAR_17->specs[(int)VAR_11] != 0;




  tree VAR_20 = VAR_1;
  bool VAR_21 = 0;

  if (VAR_17->multiple_types_p)
    FUNC_7 ("multiple types in one declaration");
  else if (VAR_17->redefined_builtin_type)
    {
      if (!VAR_15)
 FUNC_8 ("redeclaration of C++ built-in type %qT",
   VAR_17->redefined_builtin_type);
      return VAR_1;
    }

  if (VAR_17->type
      && FUNC_5 (VAR_17->type)
      && ((FUNC_3 (VAR_17->type) != VAR_2
    && FUNC_0 (VAR_17->type))
   || FUNC_3 (VAR_17->type) == VAR_0))
    VAR_20 = VAR_17->type;
  else if (VAR_17->type == VAR_14)
    VAR_21 = 1;
  if (VAR_20 == VAR_1 && ! VAR_18 && !VAR_21)
    FUNC_8 ("declaration does not declare anything");

  else if (VAR_20 && FUNC_1 (FUNC_3 (VAR_20))
    && FUNC_4 (VAR_20))
    {
      if (VAR_19)
 {
   FUNC_7 ("missing type-name in typedef-declaration");
   return VAR_1;
 }
                                                                       ;
      FUNC_2 (VAR_20);

      if (FUNC_3 (VAR_20) != VAR_3 && VAR_16
   && !VAR_15)
 FUNC_8 ("ISO C++ prohibits anonymous structs");
    }

  else
    {
      if (VAR_17->specs[(int)VAR_8]
   || VAR_17->specs[(int)VAR_12])
 FUNC_7 ("%qs can only be specified for functions",
        VAR_17->specs[(int)VAR_8]
        ? "inline" : "virtual");
      else if (VAR_18
        && (!VAR_4
     || FUNC_6 () != VAR_4))
 FUNC_7 ("%<friend%> can only be specified inside a class");
      else if (VAR_17->specs[(int)VAR_6])
 FUNC_7 ("%<explicit%> can only be specified for constructors");
      else if (VAR_17->storage_class)
 FUNC_7 ("a storage class can only be specified for objects "
        "and functions");
      else if (VAR_17->specs[(int)VAR_5]
        || VAR_17->specs[(int)VAR_13]
        || VAR_17->specs[(int)VAR_9]
        || VAR_17->specs[(int)VAR_10])
 FUNC_7 ("qualifiers can only be specified for objects "
        "and functions");
    }

  return VAR_20;
}
