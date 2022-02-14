
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int dummy; } ;
struct gcov_info {int filename; } ;
typedef enum gcov_action { ____Placeholder_gcov_action } gcov_action ;




 int FUNC_0 (struct gcov_info*) ;
 int VAR_0 ;
 struct gcov_node* FUNC_1 (int ) ;
 int FUNC_2 (struct gcov_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct gcov_node*) ;
 int FUNC_7 (struct gcov_node*,struct gcov_info*) ;

void FUNC_8(enum gcov_action VAR_2, struct gcov_info *VAR_3)
{
 struct gcov_node *VAR_4;

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_1(VAR_3->filename);
 switch (VAR_2) {
 case 129:

  if (!VAR_4) {
   FUNC_0(VAR_3);
   break;
  }
  if (VAR_0)
   FUNC_7(VAR_4, VAR_3);
  else {
   FUNC_5("could not add '%s' (already exists)\n",
       VAR_3->filename);
  }
  break;
 case 128:

  if (!VAR_4) {
   FUNC_5("could not remove '%s' (not found)\n",
       VAR_3->filename);
   break;
  }
  if (VAR_0) {
   if (!FUNC_2(VAR_4))
    break;
  }
  FUNC_6(VAR_4);
  break;
 }
 FUNC_4(&VAR_1);
}
