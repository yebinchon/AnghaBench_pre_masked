
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* varinfo_t ;
struct constraint_expr {void* type; scalar_t__ offset; int var; } ;
struct TYPE_3__ {int id; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct constraint_expr,struct constraint_expr) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (varinfo_t VAR_2)
{
  struct constraint_expr VAR_3, VAR_4;

  VAR_3.var = VAR_2->id;
  VAR_3.offset = 0;
  VAR_3.type = VAR_0;

  VAR_4.var = VAR_1;
  VAR_4.offset = 0;
  VAR_4.type = VAR_0;
  FUNC_1 (FUNC_0 (VAR_3, VAR_4));
}
