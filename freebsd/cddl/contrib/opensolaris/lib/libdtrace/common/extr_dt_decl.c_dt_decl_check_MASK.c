
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dd_kind; int dd_attr; int * dd_name; } ;
typedef TYPE_1__ dt_decl_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static dt_decl_t *
FUNC_2(dt_decl_t *VAR_12)
{
 if (VAR_12->dd_kind == VAR_2)
  return (VAR_12);

 if (VAR_12->dd_name != ((void*)0) && FUNC_0(VAR_12->dd_name, "char") == 0 &&
     (VAR_12->dd_attr & (VAR_5 | VAR_3 | VAR_4))) {
  FUNC_1(VAR_8, "invalid type declaration: short and "
      "long may not be used with char type\n");
 }

 if (VAR_12->dd_name != ((void*)0) && FUNC_0(VAR_12->dd_name, "void") == 0 &&
     (VAR_12->dd_attr & (VAR_5 | VAR_3 | VAR_4 |
     (VAR_6 | VAR_7)))) {
  FUNC_1(VAR_11, "invalid type declaration: attributes "
      "may not be used with void type\n");
 }

 if (VAR_12->dd_kind != VAR_1 &&
     (VAR_12->dd_attr & (VAR_6 | VAR_7))) {
  FUNC_1(VAR_10, "invalid type declaration: signed and "
      "unsigned may only be used with integer type\n");
 }

 if (VAR_12->dd_kind != VAR_1 && VAR_12->dd_kind != VAR_0 &&
     (VAR_12->dd_attr & (VAR_3 | VAR_4))) {
  FUNC_1(VAR_9, "invalid type declaration: long and "
      "long long may only be used with integer or "
      "floating-point type\n");
 }

 return (VAR_12);
}
