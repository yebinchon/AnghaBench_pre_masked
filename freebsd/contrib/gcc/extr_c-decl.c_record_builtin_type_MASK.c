
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_2__ {int (* type_decl ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int FUNC_3 (int ,int) ;

void
FUNC_4 (enum rid VAR_3, const char *VAR_4, tree VAR_5)
{
  tree VAR_6, VAR_7;
  if (VAR_4 == 0)
    VAR_6 = VAR_2[(int) VAR_3];
  else
    VAR_6 = FUNC_1 (VAR_4);
  VAR_7 = FUNC_0 (VAR_0, VAR_6, VAR_5);
  FUNC_2 (VAR_7);
  if (VAR_1->type_decl)
    VAR_1->type_decl (VAR_7, 0);
}
