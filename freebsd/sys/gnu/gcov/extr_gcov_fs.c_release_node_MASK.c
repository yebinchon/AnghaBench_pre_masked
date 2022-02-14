
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {scalar_t__ unloaded_info; struct gcov_node* loaded_info; int dentry; } ;


 int FUNC_0 (struct gcov_node*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gcov_node*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct gcov_node*) ;

__attribute__((used)) static void
FUNC_5(struct gcov_node *VAR_3)
{
 FUNC_0(VAR_3, VAR_2);
 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_3->dentry);
 FUNC_4(VAR_3);
 FUNC_2(VAR_3->loaded_info, VAR_0);
 if (VAR_3->unloaded_info)
  FUNC_3(VAR_3->unloaded_info);
 FUNC_2(VAR_3, VAR_0);
}
