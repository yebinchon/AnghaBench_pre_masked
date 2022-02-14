
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_print_args {struct vnode* a_vp; } ;
struct vnode {struct autofs_node* v_data; } ;
struct autofs_node {char* an_name; int an_fileno; int an_cached; int an_wildcards; } ;


 int FUNC_0 (char*,char*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct vop_print_args *VAR_0)
{
 struct vnode *VAR_1;
 struct autofs_node *VAR_2;

 VAR_1 = VAR_0->a_vp;
 VAR_2 = VAR_1->v_data;

 FUNC_0("    name \"%s\", fileno %d, cached %d, wildcards %d\n",
     VAR_2->an_name, VAR_2->an_fileno, VAR_2->an_cached, VAR_2->an_wildcards);

 return (0);
}
