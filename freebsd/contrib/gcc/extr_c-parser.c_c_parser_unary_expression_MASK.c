
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c_expr {void* original_code; int value; } ;
typedef int c_parser ;
struct TYPE_2__ {int type; int keyword; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;



 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;





 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 struct c_expr FUNC_2 (int *) ;
 struct c_expr FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__* FUNC_7 (int *) ;
 struct c_expr FUNC_8 (int *) ;
 struct c_expr FUNC_9 (int *) ;
 struct c_expr FUNC_10 (struct c_expr) ;
 int FUNC_11 () ;
 int VAR_12 ;
 int FUNC_12 (int ) ;
 int VAR_13 ;
 struct c_expr FUNC_13 (int ,struct c_expr) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static struct c_expr
FUNC_16 (c_parser *VAR_14)
{
  int VAR_15;
  struct c_expr VAR_16, VAR_17;
  switch (FUNC_7 (VAR_14)->type)
    {
    case 133:
      FUNC_4 (VAR_14);
      VAR_17 = FUNC_3 (VAR_14, ((void*)0));
      VAR_17 = FUNC_10 (VAR_17);
      return FUNC_13 (VAR_9, VAR_17);
    case 137:
      FUNC_4 (VAR_14);
      VAR_17 = FUNC_3 (VAR_14, ((void*)0));
      VAR_17 = FUNC_10 (VAR_17);
      return FUNC_13 (VAR_8, VAR_17);
    case 142:
      FUNC_4 (VAR_14);
      return FUNC_13 (VAR_0,
        FUNC_3 (VAR_14, ((void*)0)));
    case 136:
      FUNC_4 (VAR_14);
      VAR_17 = FUNC_3 (VAR_14, ((void*)0));
      VAR_17 = FUNC_10 (VAR_17);
      VAR_16.value = FUNC_0 (VAR_17.value, "unary *");
      VAR_16.original_code = VAR_4;
      return VAR_16;
    case 134:
      FUNC_4 (VAR_14);
      if (!FUNC_1 () && !VAR_13)
 FUNC_15 (VAR_7,
   "traditional C rejects the unary plus operator");
      VAR_17 = FUNC_3 (VAR_14, ((void*)0));
      VAR_17 = FUNC_10 (VAR_17);
      return FUNC_13 (VAR_2, VAR_17);
    case 138:
      FUNC_4 (VAR_14);
      VAR_17 = FUNC_3 (VAR_14, ((void*)0));
      VAR_17 = FUNC_10 (VAR_17);
      return FUNC_13 (VAR_6, VAR_17);
    case 140:
      FUNC_4 (VAR_14);
      VAR_17 = FUNC_3 (VAR_14, ((void*)0));
      VAR_17 = FUNC_10 (VAR_17);
      return FUNC_13 (VAR_1, VAR_17);
    case 135:
      FUNC_4 (VAR_14);
      VAR_17 = FUNC_3 (VAR_14, ((void*)0));
      VAR_17 = FUNC_10 (VAR_17);
      return FUNC_13 (VAR_11, VAR_17);
    case 141:

      FUNC_4 (VAR_14);
      if (FUNC_6 (VAR_14, VAR_3))
 {
   VAR_16.value = FUNC_12
     (FUNC_7 (VAR_14)->value);
   FUNC_4 (VAR_14);
 }
      else
 {
   FUNC_5 (VAR_14, "expected identifier");
   VAR_16.value = VAR_12;
 }
 VAR_16.original_code = VAR_4;
 return VAR_16;
    case 139:
      switch (FUNC_7 (VAR_14)->keyword)
 {
 case 128:
   return FUNC_9 (VAR_14);
 case 132:
   return FUNC_2 (VAR_14);
 case 131:
   FUNC_4 (VAR_14);
   VAR_15 = FUNC_11 ();
   VAR_16 = FUNC_3 (VAR_14, ((void*)0));
   FUNC_14 (VAR_15);
   return VAR_16;
 case 129:
   FUNC_4 (VAR_14);
   VAR_17 = FUNC_3 (VAR_14, ((void*)0));
   VAR_17 = FUNC_10 (VAR_17);
   return FUNC_13 (VAR_10, VAR_17);
 case 130:
   FUNC_4 (VAR_14);
   VAR_17 = FUNC_3 (VAR_14, ((void*)0));
   VAR_17 = FUNC_10 (VAR_17);
   return FUNC_13 (VAR_5, VAR_17);
 default:
   return FUNC_8 (VAR_14);
 }
    default:
      return FUNC_8 (VAR_14);
    }
}
