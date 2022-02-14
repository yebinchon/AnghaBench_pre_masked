
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pred_data {char* name; int exp; } ;


 int FUNC_0 (struct pred_data*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pred_data*) ;

__attribute__((used)) static void
FUNC_5 (struct pred_data *VAR_1)
{
  if (!VAR_1->exp)
    return;

  FUNC_4 (VAR_1);
  FUNC_0 (VAR_1);



  FUNC_2 ("int\n%s (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)\n{\n",
   VAR_1->name);
  FUNC_3 (VAR_1->exp);
  FUNC_1 ("}\n\n", VAR_0);
}
