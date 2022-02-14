
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* tree ;
typedef int special_function_kind ;
struct TYPE_7__ {int sfk; void* unqualified_name; void* qualifying_scope; } ;
struct TYPE_6__ {TYPE_2__ id; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_3__ cp_declarator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (int ) ;

__attribute__((used)) static cp_declarator *
FUNC_5 (tree VAR_4, tree VAR_5,
      special_function_kind VAR_6)
{
  cp_declarator *VAR_7;
  if (VAR_4 && FUNC_2 (VAR_4))
    VAR_4 = FUNC_1 (VAR_4);

  FUNC_3 (FUNC_0 (VAR_5) == VAR_1
       || FUNC_0 (VAR_5) == VAR_0
       || FUNC_0 (VAR_5) == VAR_2);

  VAR_7 = FUNC_4 (VAR_3);
  VAR_7->u.id.qualifying_scope = VAR_4;
  VAR_7->u.id.unqualified_name = VAR_5;
  VAR_7->u.id.sfk = VAR_6;

  return VAR_7;
}
