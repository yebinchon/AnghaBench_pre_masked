
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hashval_t ;
typedef TYPE_1__* decl_t ;
struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_4__ {scalar_t__ mode; } ;


 TYPE_2__* FUNC_0 (TYPE_1__* const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static hashval_t
FUNC_3 (const void *VAR_1)
{
  const decl_t VAR_2 = (decl_t) VAR_1;

  FUNC_1 (VAR_2->mode == VAR_0
       && FUNC_0 (VAR_2)->name);
  return FUNC_2 (FUNC_0 (VAR_2)->name);
}
