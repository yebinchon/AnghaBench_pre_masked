
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hashval_t ;
typedef TYPE_1__* decl_t ;
struct TYPE_8__ {scalar_t__ name; } ;
struct TYPE_7__ {scalar_t__ name; } ;
struct TYPE_6__ {scalar_t__ mode; } ;


 TYPE_4__* FUNC_0 (TYPE_1__* const) ;
 TYPE_2__* FUNC_1 (TYPE_1__* const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static hashval_t
FUNC_4 (const void *VAR_2)
{
  const decl_t VAR_3 = (const decl_t) VAR_2;

  FUNC_2 ((VAR_3->mode == VAR_1 && FUNC_1 (VAR_3)->name)
       || (VAR_3->mode == VAR_0 && FUNC_0 (VAR_3)->name));
  return FUNC_3 (VAR_3->mode == VAR_1
        ? FUNC_1 (VAR_3)->name : FUNC_0 (VAR_3)->name);
}
