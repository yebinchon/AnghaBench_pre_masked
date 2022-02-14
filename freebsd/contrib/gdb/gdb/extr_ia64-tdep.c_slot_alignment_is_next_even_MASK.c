
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
FUNC_6 (struct type *VAR_0)
{
  switch (FUNC_0 (VAR_0))
    {
    case 129:
    case 130:
      if (FUNC_2 (VAR_0) > 8)
 return 1;
      else
 return 0;
    case 131:
      return
 FUNC_6 (FUNC_5 (FUNC_4 (VAR_0)));
    case 128:
      {
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_3 (VAR_0); VAR_1++)
   if (FUNC_6
       (FUNC_5 (FUNC_1 (VAR_0, VAR_1))))
     return 1;
 return 0;
      }
    default:
      return 0;
    }
}
