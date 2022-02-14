
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct c_expr {void* original_code; void* value; } ;
typedef int c_parser ;
struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int type; int value; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;



 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,int ) ;
 void* FUNC_2 (void*,int ) ;
 void* FUNC_3 (void*,char*) ;
 void* FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;
 TYPE_2__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,char*) ;
 struct c_expr FUNC_12 (struct c_expr) ;
 void* VAR_7 ;

__attribute__((used)) static struct c_expr
FUNC_13 (c_parser *VAR_8,
        struct c_expr VAR_9)
{
  tree VAR_10, VAR_11, VAR_12;
  while (1)
    {
      switch (FUNC_10 (VAR_8)->type)
 {
 case 129:

   FUNC_5 (VAR_8);
   VAR_11 = FUNC_8 (VAR_8).value;
   FUNC_11 (VAR_8, VAR_1,
         "expected %<]%>");
   VAR_9.value = FUNC_0 (VAR_9.value, VAR_11);
   VAR_9.original_code = VAR_3;
   break;
 case 130:

   FUNC_5 (VAR_8);
   if (FUNC_9 (VAR_8, VAR_0))
     VAR_12 = VAR_4;
   else
     VAR_12 = FUNC_7 (VAR_8, 1);
   FUNC_11 (VAR_8, VAR_0,
         "expected %<)%>");
   VAR_9.value = FUNC_2 (VAR_9.value, VAR_12);
   VAR_9.original_code = VAR_3;
   break;
 case 132:

   FUNC_5 (VAR_8);
   VAR_9 = FUNC_12 (VAR_9);
   if (FUNC_9 (VAR_8, VAR_2))
     VAR_10 = FUNC_10 (VAR_8)->value;
   else
     {
       FUNC_6 (VAR_8, "expected identifier");
       VAR_9.value = VAR_7;
       VAR_9.original_code = VAR_3;
       return VAR_9;
     }
   FUNC_5 (VAR_8);
   VAR_9.value = FUNC_1 (VAR_9.value, VAR_10);
   VAR_9.original_code = VAR_3;
   break;
 case 133:

   FUNC_5 (VAR_8);
   VAR_9 = FUNC_12 (VAR_9);
   if (FUNC_9 (VAR_8, VAR_2))
     VAR_10 = FUNC_10 (VAR_8)->value;
   else
     {
       FUNC_6 (VAR_8, "expected identifier");
       VAR_9.value = VAR_7;
       VAR_9.original_code = VAR_3;
       return VAR_9;
     }
   FUNC_5 (VAR_8);
   VAR_9.value = FUNC_1 (FUNC_3 (VAR_9.value,
        "->"), VAR_10);
   VAR_9.original_code = VAR_3;
   break;
 case 128:

   FUNC_5 (VAR_8);
   VAR_9 = FUNC_12 (VAR_9);
   VAR_9.value = FUNC_4 (VAR_6, VAR_9.value, 0);
   VAR_9.original_code = VAR_3;
   break;
 case 131:

   FUNC_5 (VAR_8);
   VAR_9 = FUNC_12 (VAR_9);
   VAR_9.value = FUNC_4 (VAR_5, VAR_9.value, 0);
   VAR_9.original_code = VAR_3;
   break;
 default:
   return VAR_9;
 }
    }
}
