
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {struct gcov_node* parent; } ;
struct gcov_info {int filename; } ;


 int VAR_0 ;
 struct gcov_node* FUNC_0 (struct gcov_node*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 struct gcov_node* FUNC_3 (struct gcov_node*,struct gcov_info*,char*) ;
 int FUNC_4 (struct gcov_node*) ;
 struct gcov_node VAR_1 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(struct gcov_info *VAR_2)
{
 char *VAR_3;
 char *VAR_4;
 char *VAR_5;
 struct gcov_node *VAR_6;
 struct gcov_node *VAR_7;

 VAR_3 = FUNC_2(VAR_2->filename, VAR_0);
 if (!VAR_3)
  return;
 VAR_6 = &VAR_1;

 for (VAR_4 = VAR_3; (VAR_5 = FUNC_5(VAR_4, '/')); VAR_4 = VAR_5 + 1) {
  if (VAR_4 == VAR_5)
   continue;
  *VAR_5 = 0;
  if (FUNC_6(VAR_4, ".") == 0)
   continue;
  if (FUNC_6(VAR_4, "..") == 0) {
   if (!VAR_6->parent)
    goto err_remove;
   VAR_6 = VAR_6->parent;
   continue;
  }
  VAR_7 = FUNC_0(VAR_6, VAR_4);
  if (!VAR_7) {
   VAR_7 = FUNC_3(VAR_6, ((void*)0), VAR_4);
   if (!VAR_7)
    goto err_remove;
  }
  VAR_6 = VAR_7;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_4);
 if (!VAR_7)
  goto err_remove;
out:
 FUNC_1(VAR_3);
 return;

err_remove:
 FUNC_4(VAR_6);
 goto out;
}
