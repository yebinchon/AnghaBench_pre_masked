
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {struct gcov_node* parent; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct gcov_info*) ;
 struct gcov_node* FUNC_2 (struct gcov_node*,char*) ;
 struct gcov_node* FUNC_3 (struct gcov_node*,struct gcov_info*,char*) ;
 int FUNC_4 (struct gcov_node*) ;
 struct gcov_node VAR_2 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct gcov_info *VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 struct gcov_node *VAR_7;
 struct gcov_node *VAR_8;

 VAR_4 = FUNC_7(FUNC_1(VAR_3), VAR_0, VAR_1);
 if (VAR_4 == ((void*)0))
  return;
 VAR_7 = &VAR_2;

 for (VAR_5 = VAR_4; (VAR_6 = FUNC_5(VAR_5, '/')); VAR_5 = VAR_6 + 1) {
  if (VAR_5 == VAR_6)
   continue;
  *VAR_6 = 0;
  if (FUNC_6(VAR_5, ".") == 0)
   continue;
  if (FUNC_6(VAR_5, "..") == 0) {
   if (!VAR_7->parent)
    goto err_remove;
   VAR_7 = VAR_7->parent;
   continue;
  }
  VAR_8 = FUNC_2(VAR_7, VAR_5);
  if (!VAR_8) {
   VAR_8 = FUNC_3(VAR_7, ((void*)0), VAR_5);
   if (!VAR_8)
    goto err_remove;
  }
  VAR_7 = VAR_8;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_5);
 if (!VAR_8)
  goto err_remove;
out:
 FUNC_0(VAR_4, VAR_0);
 return;

err_remove:
 FUNC_4(VAR_7);
 goto out;
}
