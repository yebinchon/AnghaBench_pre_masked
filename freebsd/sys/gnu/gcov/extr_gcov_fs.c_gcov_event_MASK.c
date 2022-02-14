
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int dummy; } ;
struct gcov_info {int dummy; } ;
typedef enum gcov_action { ____Placeholder_gcov_action } gcov_action ;




 int VAR_0 ;
 int FUNC_0 (struct gcov_node*,struct gcov_info*) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (struct gcov_info*) ;
 struct gcov_node* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (struct gcov_node*,struct gcov_info*) ;

__attribute__((used)) static void
FUNC_8(enum gcov_action VAR_2, struct gcov_info *VAR_3)
{
 struct gcov_node *VAR_4;

 FUNC_5(&VAR_1);
 VAR_4 = FUNC_3(FUNC_2(VAR_3));
 switch (VAR_2) {
 case 129:
  if (VAR_4)
   FUNC_0(VAR_4, VAR_3);
  else
   FUNC_1(VAR_3);
  break;
 case 128:
  if (VAR_4)
   FUNC_7(VAR_4, VAR_3);
  else {
   FUNC_4(VAR_0, "could not remove '%s' (not found)\n",
    FUNC_2(VAR_3));
  }
  break;
 }
 FUNC_6(&VAR_1);
}
