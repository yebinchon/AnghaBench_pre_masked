
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;



 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 struct type* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (struct type *VAR_0, struct type **VAR_1)
{
  switch (FUNC_0 (VAR_0))
    {
    case 129:
      if (*VAR_1)
 return FUNC_2 (*VAR_1) == FUNC_2 (VAR_0);
      else
 {
   *VAR_1 = VAR_0;
   return 1;
 }
      break;
    case 130:
      return
 FUNC_6 (FUNC_5 (FUNC_4 (VAR_0)),
          VAR_1);
      break;
    case 128:
      {
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_3 (VAR_0); VAR_2++)
   if (!FUNC_6
       (FUNC_5 (FUNC_1 (VAR_0, VAR_2)), VAR_1))
     return 0;
 return 1;
      }
      break;
    default:
      return 0;
      break;
    }
}
