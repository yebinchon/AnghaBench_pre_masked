
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_expr {scalar_t__ value; void* original_code; } ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (scalar_t__) ;
 struct c_expr FUNC_3 (int *,struct c_expr*) ;
 int FUNC_4 (int *) ;
 struct c_expr FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct c_expr FUNC_10 (struct c_expr) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static struct c_expr
FUNC_14 (c_parser *VAR_8, struct c_expr *VAR_9)
{
  struct c_expr VAR_10, VAR_11, VAR_12, VAR_13;
  FUNC_11 (!VAR_9 || FUNC_1 ());
  VAR_10 = FUNC_3 (VAR_8, VAR_9);
  if (FUNC_7 (VAR_8, VAR_1))
    return VAR_10;
  VAR_10 = FUNC_10 (VAR_10);
  FUNC_4 (VAR_8);
  if (FUNC_6 (VAR_8, VAR_0))
    {
      if (VAR_4)
 FUNC_12 ("ISO C forbids omitting the middle term of a ?: expression");

      VAR_11 = FUNC_13 (FUNC_9 (VAR_10.value));
      VAR_10.value = FUNC_2 (VAR_11);
      VAR_5 += VAR_10.value == VAR_7;
    }
  else
    {
      VAR_10.value
 = FUNC_2
 (FUNC_9 (VAR_10.value));
      VAR_5 += VAR_10.value == VAR_6;
      VAR_11 = FUNC_5 (VAR_8);
      VAR_5 += ((VAR_10.value == VAR_7)
     - (VAR_10.value == VAR_6));
    }
  if (!FUNC_8 (VAR_8, VAR_0, "expected %<:%>"))
    {
      VAR_5 -= VAR_10.value == VAR_7;
      VAR_13.value = VAR_3;
      VAR_13.original_code = VAR_2;
      return VAR_13;
    }
  VAR_12 = FUNC_14 (VAR_8, ((void*)0));
  VAR_12 = FUNC_10 (VAR_12);
  VAR_5 -= VAR_10.value == VAR_7;
  VAR_13.value = FUNC_0 (VAR_10.value, VAR_11, VAR_12);
  VAR_13.original_code = VAR_2;
  return VAR_13;
}
