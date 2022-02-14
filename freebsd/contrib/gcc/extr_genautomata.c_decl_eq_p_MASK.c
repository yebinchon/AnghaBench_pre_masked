
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_8__ {scalar_t__ name; } ;
struct TYPE_7__ {scalar_t__ name; } ;
struct TYPE_6__ {scalar_t__ mode; } ;


 TYPE_4__* FUNC_0 (TYPE_1__* const) ;
 TYPE_2__* FUNC_1 (TYPE_1__* const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4 (const void *VAR_2, const void *VAR_3)
{
  const decl_t VAR_4 = (const decl_t) VAR_2;
  const decl_t VAR_5 = (const decl_t) VAR_3;

  FUNC_2 ((VAR_4->mode == VAR_1 && FUNC_1 (VAR_4)->name)
       || (VAR_4->mode == VAR_0 && FUNC_0 (VAR_4)->name));
  FUNC_2 ((VAR_5->mode == VAR_1 && FUNC_1 (VAR_5)->name)
       || (VAR_5->mode == VAR_0 && FUNC_0 (VAR_5)->name));
  return FUNC_3 ((VAR_4->mode == VAR_1
                  ? FUNC_1 (VAR_4)->name : FUNC_0 (VAR_4)->name),
                 (VAR_5->mode == VAR_1
                  ? FUNC_1 (VAR_5)->name : FUNC_0 (VAR_5)->name)) == 0;
}
