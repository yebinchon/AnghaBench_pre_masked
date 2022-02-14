
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_10__ {void* regexp; } ;
struct TYPE_9__ {void* regexp; } ;
struct TYPE_8__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  decl_t VAR_3;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0->decls_num; VAR_4++)
    {
      VAR_3 = VAR_0->decls [VAR_4];
      if (VAR_3->mode == VAR_2)
 FUNC_1 (VAR_3)->regexp
   = FUNC_2 (FUNC_1 (VAR_3)->regexp);
      else if (VAR_3->mode == VAR_1)
 FUNC_0 (VAR_3)->regexp
   = FUNC_2 (FUNC_0 (VAR_3)->regexp);
    }
}
