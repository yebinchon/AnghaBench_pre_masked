
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef TYPE_1__* debug_type ;
struct TYPE_5__ {int kind; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (void*,TYPE_1__*,int *) ;

enum debug_type_kind
FUNC_1 (void *VAR_1, debug_type VAR_2)
{
  if (VAR_2 == ((void*)0))
    return VAR_0;
  VAR_2 = FUNC_0 (VAR_1, VAR_2, ((void*)0));
  if (VAR_2 == ((void*)0))
    return VAR_0;
  return VAR_2->kind;
}
