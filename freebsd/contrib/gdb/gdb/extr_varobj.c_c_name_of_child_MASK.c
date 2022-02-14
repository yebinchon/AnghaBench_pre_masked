
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int name; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;




 char* FUNC_1 (struct type*,int) ;
 struct type* FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct varobj*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,char*,int) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static char *
FUNC_8 (struct varobj *VAR_0, int VAR_1)
{
  struct type *VAR_2;
  struct type *VAR_3;
  char *VAR_4;
  char *VAR_5;

  VAR_2 = FUNC_3 (VAR_0);
  VAR_3 = FUNC_2 (VAR_2);

  switch (FUNC_0 (VAR_2))
    {
    case 131:
      FUNC_6 (&VAR_4, "%d", VAR_1);
      break;

    case 129:
    case 128:
      VAR_5 = FUNC_1 (VAR_2, VAR_1);
      VAR_4 = FUNC_4 (VAR_5, FUNC_5 (VAR_5));
      break;

    case 130:
      switch (FUNC_0 (VAR_3))
 {
 case 129:
 case 128:
   VAR_5 = FUNC_1 (VAR_3, VAR_1);
   VAR_4 = FUNC_4 (VAR_5, FUNC_5 (VAR_5));
   break;

 default:
   FUNC_6 (&VAR_4, "*%s", VAR_0->name);
   break;
 }
      break;

    default:

      VAR_4 = FUNC_7 ("???");
    }

  return VAR_4;
}
