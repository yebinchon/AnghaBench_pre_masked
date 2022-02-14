
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct c_type_name {TYPE_3__* declarator; } ;
struct c_expr {int value; int original_code; } ;
typedef int c_parser ;
struct TYPE_4__ {scalar_t__ vla_unspec_p; } ;
struct TYPE_5__ {TYPE_1__ array; } ;
struct TYPE_6__ {scalar_t__ kind; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct c_expr FUNC_3 (struct c_expr) ;
 struct c_expr FUNC_4 (struct c_type_name*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 struct c_expr FUNC_9 (int *,struct c_type_name*) ;
 int FUNC_10 (int *,int ,char*) ;
 struct c_type_name* FUNC_11 (int *) ;
 struct c_expr FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (char*) ;
 int VAR_7 ;
 int FUNC_15 (int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct c_expr
FUNC_16 (c_parser *VAR_10)
{
  struct c_expr VAR_11;
  FUNC_15 (FUNC_7 (VAR_10, VAR_5));
  FUNC_5 (VAR_10);
  VAR_9++;
  VAR_8++;
  if (FUNC_6 (VAR_10, VAR_3)
      && FUNC_13 (FUNC_8 (VAR_10)))
    {


      struct c_type_name *VAR_12;
      FUNC_5 (VAR_10);
      VAR_12 = FUNC_11 (VAR_10);
      FUNC_10 (VAR_10, VAR_1, "expected %<)%>");
      if (VAR_12 == ((void*)0))
 {
   struct c_expr VAR_13;
   VAR_9--;
   VAR_8--;
   VAR_13.value = VAR_7;
   VAR_13.original_code = VAR_4;
   return VAR_13;
 }
      if (FUNC_6 (VAR_10, VAR_2))
 {
   VAR_11 = FUNC_9 (VAR_10,
              VAR_12);
   goto sizeof_expr;
 }

      VAR_9--;
      VAR_8--;
      if (VAR_12->declarator->kind == VAR_6
   && VAR_12->declarator->u.array.vla_unspec_p)
 {

   FUNC_14 ("%<[*]%> not allowed in other than a declaration");
 }
      return FUNC_4 (VAR_12);
    }
  else
    {
      VAR_11 = FUNC_12 (VAR_10);
    sizeof_expr:
      VAR_9--;
      VAR_8--;
      if (FUNC_1 (VAR_11.value) == VAR_0
   && FUNC_0 (FUNC_2 (VAR_11.value, 1)))
 FUNC_14 ("%<sizeof%> applied to a bit-field");
      return FUNC_3 (VAR_11);
    }
}
