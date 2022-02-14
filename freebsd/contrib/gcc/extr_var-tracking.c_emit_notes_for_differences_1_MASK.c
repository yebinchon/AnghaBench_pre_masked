
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* variable ;
typedef int htab_t ;
struct TYPE_7__ {int refcount; scalar_t__ n_var_parts; int decl; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_5 (void **VAR_1, void *VAR_2)
{
  htab_t VAR_3 = (htab_t) VAR_2;
  variable VAR_4, VAR_5;

  VAR_4 = *(variable *) VAR_1;
  VAR_5 = FUNC_1 (VAR_3, VAR_4->decl,
     FUNC_0 (VAR_4->decl));

  if (!VAR_5)
    {

      variable VAR_6;

      VAR_6 = FUNC_2 (VAR_0);
      VAR_6->decl = VAR_4->decl;
      VAR_6->refcount = 1;
      VAR_6->n_var_parts = 0;
      FUNC_4 (VAR_6, ((void*)0));
    }
  else if (FUNC_3 (VAR_4, VAR_5, 1))
    {
      FUNC_4 (VAR_5, ((void*)0));
    }


  return 1;
}
