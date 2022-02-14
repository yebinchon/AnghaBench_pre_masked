
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {struct type* type; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;




 struct type* FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*,char*,int ) ;
 char* FUNC_3 (struct varobj*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct type *
FUNC_6 (struct varobj *VAR_0, int VAR_1)
{
  struct type *VAR_2;
  char *VAR_3 = FUNC_3 (VAR_0, VAR_1);

  switch (FUNC_0 (VAR_0->type))
    {
    case 131:
      VAR_2 = FUNC_1 (VAR_0->type);
      break;

    case 129:
    case 128:
      VAR_2 = FUNC_2 (VAR_0->type, VAR_3, 0);
      break;

    case 130:
      switch (FUNC_0 (FUNC_1 (VAR_0->type)))
 {
 case 129:
 case 128:
   VAR_2 = FUNC_2 (VAR_0->type, VAR_3, 0);
   break;

 default:
   VAR_2 = FUNC_1 (VAR_0->type);
   break;
 }
      break;

    default:

      FUNC_4 ("Child of parent whose type does not allow children");

      VAR_2 = ((void*)0);
      break;
    }

  FUNC_5 (VAR_3);
  return VAR_2;
}
