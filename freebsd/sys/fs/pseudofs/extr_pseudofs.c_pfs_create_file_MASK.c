
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_node {int pn_flags; int pn_destroy; int pn_vis; int pn_attr; int pn_fill; int pn_info; } ;
typedef int pfs_vis_t ;
typedef int pfs_fill_t ;
typedef int pfs_destroy_t ;
typedef int pfs_attr_t ;


 int FUNC_0 (struct pfs_node*,struct pfs_node*) ;
 struct pfs_node* FUNC_1 (int ,char const*,int ,int) ;
 int VAR_0 ;

struct pfs_node *
FUNC_2(struct pfs_node *VAR_1, const char *VAR_2, pfs_fill_t VAR_3,
  pfs_attr_t VAR_4, pfs_vis_t VAR_5, pfs_destroy_t VAR_6,
  int VAR_7)
{
 struct pfs_node *VAR_8;

 VAR_8 = FUNC_1(VAR_1->pn_info, VAR_2, VAR_0, VAR_7);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_8->pn_fill = VAR_3;
 VAR_8->pn_attr = VAR_4;
 VAR_8->pn_vis = VAR_5;
 VAR_8->pn_destroy = VAR_6;
 VAR_8->pn_flags = VAR_7;
 FUNC_0(VAR_1, VAR_8);

 return (VAR_8);
}
