
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c_type_name {TYPE_1__* specs; } ;
struct c_expr {void* original_code; int value; } ;
typedef int c_parser ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct c_type_name*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct c_expr FUNC_5 (int *,struct c_type_name*) ;
 struct c_expr FUNC_6 (int *,struct c_expr) ;
 int FUNC_7 (int *,int ,char*) ;
 struct c_type_name* FUNC_8 (int *) ;
 struct c_expr FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 struct c_expr FUNC_11 (struct c_expr) ;
 int VAR_4 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static struct c_expr
FUNC_14 (c_parser *VAR_5, struct c_expr *VAR_6)
{
  FUNC_12 (!VAR_6 || FUNC_1 ());
  if (VAR_6)
    return FUNC_6 (VAR_5, *VAR_6);




  if (FUNC_3 (VAR_5, VAR_2)
      && FUNC_10 (FUNC_4 (VAR_5)))
    {
      struct c_type_name *VAR_7;
      struct c_expr VAR_8;
      struct c_expr VAR_9;
      FUNC_2 (VAR_5);
      VAR_7 = FUNC_8 (VAR_5);
      FUNC_7 (VAR_5, VAR_0, "expected %<)%>");
      if (VAR_7 == ((void*)0))
 {
   VAR_8.value = VAR_4;
   VAR_8.original_code = VAR_3;
   return VAR_8;
 }


      FUNC_13 (VAR_7->specs->type);

      if (FUNC_3 (VAR_5, VAR_1))
 return FUNC_5 (VAR_5,
            VAR_7);
      VAR_9 = FUNC_14 (VAR_5, ((void*)0));
      VAR_9 = FUNC_11 (VAR_9);
      VAR_8.value = FUNC_0 (VAR_7, VAR_9.value);
      VAR_8.original_code = VAR_3;
      return VAR_8;
    }
  else
    return FUNC_9 (VAR_5);
}
