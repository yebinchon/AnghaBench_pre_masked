
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqfs_node {int mn_type; int mn_fileno; struct mqfs_node* mn_parent; } ;
struct mqfs_info {struct mqfs_node* mi_root; int mi_unrhdr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;







__attribute__((used)) static void
FUNC_2(struct mqfs_info *VAR_0, struct mqfs_node *VAR_1)
{

 if (VAR_1->mn_parent && !VAR_1->mn_parent->mn_fileno)
  FUNC_2(VAR_0, VAR_1->mn_parent);

 switch (VAR_1->mn_type) {
 case 130:
 case 133:
 case 132:
 case 129:
  VAR_1->mn_fileno = FUNC_1(VAR_0->mi_unrhdr);
  break;
 case 128:
  FUNC_0(VAR_1->mn_parent != ((void*)0),
      ("mqfstype_this node has no parent"));
  VAR_1->mn_fileno = VAR_1->mn_parent->mn_fileno;
  break;
 case 131:
  FUNC_0(VAR_1->mn_parent != ((void*)0),
      ("mqfstype_parent node has no parent"));
  if (VAR_1->mn_parent == VAR_0->mi_root) {
   VAR_1->mn_fileno = VAR_1->mn_parent->mn_fileno;
   break;
  }
  FUNC_0(VAR_1->mn_parent->mn_parent != ((void*)0),
      ("mqfstype_parent node has no grandparent"));
  VAR_1->mn_fileno = VAR_1->mn_parent->mn_parent->mn_fileno;
  break;
 default:
  FUNC_0(0,
      ("mqfs_fileno_alloc() called for unknown type node: %d",
   VAR_1->mn_type));
  break;
 }
}
