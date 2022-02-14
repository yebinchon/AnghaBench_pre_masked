
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int CORE_ADDR ;







 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct type*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;

int
FUNC_7 (struct type *VAR_5, int *VAR_6)
{
  CORE_ADDR VAR_7 = 0;
  CORE_ADDR VAR_8;

  switch (FUNC_0 (VAR_5))
    {
    case 130:
      VAR_7 = FUNC_4 (VAR_4);
      if (VAR_7 > 0)
 {
   *VAR_6 =
     FUNC_5 (VAR_7 +
     FUNC_1 (VAR_5),
     4);
 }
      else
 {
   *VAR_6 = VAR_2;
   return VAR_0;
 }
      break;

    case 128:
      *VAR_6 = FUNC_1 (VAR_5);
      break;

    case 129:





      FUNC_3 (VAR_5, VAR_6);
      break;

    case 132:
      VAR_7 = FUNC_4 (VAR_4);
      if (VAR_7 > 0)
 {
   VAR_8 =
     FUNC_6 (VAR_7 +
           FUNC_1 (VAR_5),
           VAR_3);
   *VAR_6 = FUNC_5 (VAR_8, 4);
 }
      else
 {
   *VAR_6 = VAR_2;
   return VAR_0;
 }
      break;

    case 133:
    case 131:
    default:
      FUNC_2 ("??? unhandled dynamic array bound type ???");
      break;
    }
  return VAR_1;
}
