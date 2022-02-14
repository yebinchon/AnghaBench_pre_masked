
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_node {int an_name; int an_vnode_lock; int an_children; struct autofs_node* an_parent; int an_callout; int an_mount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,struct autofs_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct autofs_node*) ;

void
FUNC_8(struct autofs_node *VAR_3)
{
 struct autofs_node *VAR_4;

 FUNC_0(VAR_3->an_mount);
 FUNC_1(FUNC_2(&VAR_3->an_children), ("have children"));

 FUNC_4(&VAR_3->an_callout);

 VAR_4 = VAR_3->an_parent;
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_1, &VAR_4->an_children, VAR_3);
 FUNC_6(&VAR_3->an_vnode_lock);
 FUNC_5(VAR_3->an_name, VAR_0);
 FUNC_7(VAR_2, VAR_3);
}
