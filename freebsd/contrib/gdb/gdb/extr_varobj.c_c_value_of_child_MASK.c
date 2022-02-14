
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {struct value* value; } ;
struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct type*) ;




 int VAR_0 ;
 int FUNC_1 (struct value*,struct value**) ;
 int FUNC_2 (int *,struct value**,struct value**,int *,char*,int *,char*) ;
 int FUNC_3 (struct value*,struct value*,struct value**) ;
 struct type* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct varobj*) ;
 char* FUNC_6 (struct varobj*,int) ;
 int FUNC_7 (struct value*) ;
 struct value* FUNC_8 (struct value*) ;
 struct value* FUNC_9 (int ,int ) ;
 struct value* FUNC_10 (struct value*,int,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static struct value *
FUNC_12 (struct varobj *VAR_1, int VAR_2)
{
  struct value *VAR_3;
  struct value *VAR_4;
  struct value *VAR_5;
  struct type *VAR_6, *VAR_7;
  char *VAR_8;

  VAR_6 = FUNC_5 (VAR_1);
  VAR_7 = FUNC_4 (VAR_6);
  VAR_8 = FUNC_6 (VAR_1, VAR_2);
  VAR_4 = VAR_1->value;
  VAR_3 = ((void*)0);

  if (VAR_4 != ((void*)0))
    {
      switch (FUNC_0 (VAR_6))
 {
 case 131:






   VAR_5 = FUNC_9 (VAR_0, (LONGEST) VAR_2);
   FUNC_3 (VAR_4, VAR_5, &VAR_3);

   break;

 case 129:
 case 128:
   FUNC_2 (((void*)0), &VAR_3, &VAR_4, ((void*)0), VAR_8, ((void*)0),
    "vstructure");
   break;

 case 130:
   switch (FUNC_0 (VAR_7))
     {
     case 129:
     case 128:
       FUNC_2 (((void*)0), &VAR_3, &VAR_4, ((void*)0), VAR_8, ((void*)0),
        "vstructure");
       break;

     default:
       FUNC_1 (VAR_4, &VAR_3);
       break;
     }
   break;

 default:
   break;
 }
    }

  if (VAR_3 != ((void*)0))
    FUNC_7 (VAR_3);

  FUNC_11 (VAR_8);
  return VAR_3;
}
