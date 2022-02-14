
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 struct type* FUNC_4 (struct value*) ;
 struct type* VAR_4 ;
 struct type* FUNC_5 (struct type*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int *) ;
 struct value* FUNC_8 (struct value*) ;
 scalar_t__ FUNC_9 (struct value*) ;
 scalar_t__ FUNC_10 (struct value*) ;

CORE_ADDR
FUNC_11 (struct value *VAR_7, struct type **VAR_8)
{
  struct type *VAR_9 = FUNC_5 (FUNC_4 (VAR_7));
  enum type_code VAR_10 = FUNC_0 (VAR_9);
  struct type *VAR_11;
  CORE_ADDR VAR_12;





  if (VAR_10 == VAR_0 || VAR_10 == VAR_2)
    {
      VAR_12 = FUNC_3 (VAR_7);
      VAR_11 = FUNC_2 (VAR_9);
    }
  else if (VAR_10 == VAR_3)
    {
      VAR_12 = FUNC_9 (VAR_7);
      VAR_9 = FUNC_5 (FUNC_2 (VAR_9));
      if (FUNC_0 (VAR_9) == VAR_0
   || FUNC_0 (VAR_9) == VAR_2)
 {
   VAR_12 = FUNC_7 (VAR_5,
       VAR_12,
       &VAR_6);
   VAR_11 = FUNC_2 (VAR_9);
 }
      else
 VAR_11 = VAR_4;
    }
  else if (VAR_10 == VAR_1)
    {


      if (FUNC_1 (VAR_9) == 1)
 VAR_12 = FUNC_9 (FUNC_8 (VAR_7));
      else

 VAR_12 = (CORE_ADDR) FUNC_10 (VAR_7);

      VAR_11 = VAR_4;
    }
  else
    FUNC_6 ("Invalid data type for function to be called.");

  *VAR_8 = VAR_11;
  return VAR_12;
}
