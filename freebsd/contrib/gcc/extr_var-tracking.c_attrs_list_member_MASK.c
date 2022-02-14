
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* attrs ;
struct TYPE_4__ {scalar_t__ decl; scalar_t__ offset; struct TYPE_4__* next; } ;
typedef scalar_t__ HOST_WIDE_INT ;



__attribute__((used)) static attrs
FUNC_0 (attrs VAR_0, tree VAR_1, HOST_WIDE_INT VAR_2)
{
  for (; VAR_0; VAR_0 = VAR_0->next)
    if (VAR_0->decl == VAR_1 && VAR_0->offset == VAR_2)
      return VAR_0;
  return ((void*)0);
}
