
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_4__ {scalar_t__ mode; } ;


 TYPE_2__* FUNC_0 (TYPE_1__* const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_3 (const void* VAR_1,
       const void* VAR_2)
{
  const decl_t VAR_3 = (decl_t) VAR_1;
  const decl_t VAR_4 = (decl_t) VAR_2;

  FUNC_1 (VAR_3->mode == VAR_0
       && FUNC_0 (VAR_3)->name
       && VAR_4->mode == VAR_0
       && FUNC_0 (VAR_4)->name);
  return FUNC_2 (FUNC_0 (VAR_3)->name,
   FUNC_0 (VAR_4)->name) == 0;
}
