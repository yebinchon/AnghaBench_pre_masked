
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_node {int pn_flags; int pn_destroy; int pn_vis; int pn_attr; int pn_info; } ;
typedef int pfs_vis_t ;
typedef int pfs_destroy_t ;
typedef int pfs_attr_t ;


 int VAR_0 ;
 int FUNC_0 (struct pfs_node*,struct pfs_node*) ;
 struct pfs_node* FUNC_1 (int ,char const*,int ,int) ;
 int FUNC_2 (struct pfs_node*) ;
 int FUNC_3 (struct pfs_node*,int) ;
 int VAR_1 ;
 int VAR_2 ;

struct pfs_node *
FUNC_4(struct pfs_node *VAR_3, const char *VAR_4,
        pfs_attr_t VAR_5, pfs_vis_t VAR_6, pfs_destroy_t VAR_7,
        int VAR_8)
{
 struct pfs_node *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_3->pn_info, VAR_4,
    (VAR_8 & VAR_0) ? VAR_2 : VAR_1, VAR_8);
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 VAR_9->pn_attr = VAR_5;
 VAR_9->pn_vis = VAR_6;
 VAR_9->pn_destroy = VAR_7;
 VAR_9->pn_flags = VAR_8;
 FUNC_0(VAR_3, VAR_9);
 VAR_10 = FUNC_3(VAR_9, VAR_8);
 if (VAR_10) {
  FUNC_2(VAR_9);
  return (((void*)0));
 }
 return (VAR_9);
}
