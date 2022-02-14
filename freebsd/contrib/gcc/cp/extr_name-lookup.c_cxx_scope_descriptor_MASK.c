
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t scope_kind ;
struct TYPE_3__ {size_t kind; scalar_t__ explicit_spec_p; } ;
typedef TYPE_1__ cxx_scope ;


 size_t VAR_0 ;

__attribute__((used)) static const char *
FUNC_0 (cxx_scope *VAR_1)
{


  static const char* VAR_2[] = {
    "block-scope",
    "cleanup-scope",
    "try-scope",
    "catch-scope",
    "for-scope",
    "function-parameter-scope",
    "class-scope",
    "namespace-scope",
    "template-parameter-scope",
    "template-explicit-spec-scope"
  };
  const scope_kind VAR_3 = VAR_1->explicit_spec_p
    ? VAR_0 : VAR_1->kind;

  return VAR_2[VAR_3];
}
