
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* variable ;
typedef int htab_t ;
struct TYPE_4__ {int decl; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_3 (void **VAR_0, void *VAR_1)
{
  htab_t VAR_2 = (htab_t) VAR_1;
  variable VAR_3, VAR_4;

  VAR_4 = *(variable *) VAR_0;
  VAR_3 = FUNC_1 (VAR_2, VAR_4->decl,
     FUNC_0 (VAR_4->decl));
  if (!VAR_3)
    {

      FUNC_2 (VAR_4, ((void*)0));
    }


  return 1;
}
