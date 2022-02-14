
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_type_name {int dummy; } ;
struct c_expr {void* original_code; int value; } ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 struct c_expr FUNC_6 (int *,struct c_type_name*) ;
 int FUNC_7 (int *,int ,char*) ;
 struct c_type_name* FUNC_8 (int *) ;
 struct c_expr FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct c_type_name*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct c_expr
FUNC_13 (c_parser *VAR_8)
{
  struct c_expr VAR_9;
  FUNC_11 (FUNC_4 (VAR_8, VAR_4));
  FUNC_2 (VAR_8);
  VAR_7++;
  VAR_6++;
  if (FUNC_3 (VAR_8, VAR_2)
      && FUNC_10 (FUNC_5 (VAR_8)))
    {


      struct c_type_name *VAR_10;
      struct c_expr VAR_11;
      FUNC_2 (VAR_8);
      VAR_10 = FUNC_8 (VAR_8);
      FUNC_7 (VAR_8, VAR_0, "expected %<)%>");
      if (VAR_10 == ((void*)0))
 {
   struct c_expr VAR_12;
   VAR_7--;
   VAR_6--;
   VAR_12.value = VAR_5;
   VAR_12.original_code = VAR_3;
   return VAR_12;
 }
      if (FUNC_3 (VAR_8, VAR_1))
 {
   VAR_9 = FUNC_6 (VAR_8,
              VAR_10);
   goto alignof_expr;
 }

      VAR_7--;
      VAR_6--;
      VAR_11.value = FUNC_0 (FUNC_12 (VAR_10));
      VAR_11.original_code = VAR_3;
      return VAR_11;
    }
  else
    {
      struct c_expr VAR_13;
      VAR_9 = FUNC_9 (VAR_8);
    alignof_expr:
      VAR_7--;
      VAR_6--;
      VAR_13.value = FUNC_1 (VAR_9.value);
      VAR_13.original_code = VAR_3;
      return VAR_13;
    }
}
