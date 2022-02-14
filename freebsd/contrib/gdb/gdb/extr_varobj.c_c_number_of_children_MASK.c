
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;






 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct varobj*) ;

__attribute__((used)) static int
FUNC_6 (struct varobj *VAR_1)
{
  struct type *VAR_2;
  struct type *VAR_3;
  int VAR_4;

  VAR_2 = FUNC_5 (VAR_1);
  VAR_3 = FUNC_4 (VAR_2);
  VAR_4 = 0;

  switch (FUNC_1 (VAR_2))
    {
    case 133:
      if (FUNC_2 (VAR_2) > 0 && FUNC_2 (VAR_3) > 0
   && FUNC_0 (VAR_2) != VAR_0)
 VAR_4 = FUNC_2 (VAR_2) / FUNC_2 (VAR_3);
      else
 VAR_4 = -1;
      break;

    case 130:
    case 129:
      VAR_4 = FUNC_3 (VAR_2);
      break;

    case 131:
      switch (FUNC_1 (VAR_3))
 {
 case 130:
 case 129:
   VAR_4 = FUNC_3 (VAR_3);
   break;

 case 132:
 case 128:
   VAR_4 = 0;
   break;

 default:
   VAR_4 = 1;
 }
      break;

    default:

      break;
    }

  return VAR_4;
}
