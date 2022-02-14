
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*,int) ;
 scalar_t__ FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;
 struct type* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8 (int VAR_4, struct type *VAR_5)
{
  int VAR_6;
  enum type_code VAR_7;

  FUNC_0 (VAR_5);
  if (FUNC_5 (VAR_5) > VAR_0)
    {
      return 1;
    }



  VAR_7 = FUNC_1 (VAR_5);
  if ((VAR_2 != VAR_7) && (VAR_3 != VAR_7))
    {
      return 1;
    }



  VAR_6 = 0;

  if ((VAR_2 == VAR_7) || (VAR_3 == VAR_7))
    {
      int VAR_8;
      for (VAR_8 = 0; VAR_8 < FUNC_6 (VAR_5); VAR_8++)
 {
   enum type_code VAR_9;
   VAR_9 = FUNC_1 (FUNC_7 (FUNC_4 (VAR_5, VAR_8)));


   if (VAR_9 == VAR_1)
     {
       VAR_6 = 1;
       break;
     }


   if (FUNC_2 (VAR_5, VAR_8) != 0)
     {



       if (FUNC_3 (VAR_5, VAR_8) == 0)
  {
    VAR_6 = 1;
    break;
  }
     }
 }
    }

  return VAR_6;
}
