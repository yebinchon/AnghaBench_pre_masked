
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_node {int pn_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct pfs_node*,struct pfs_node*) ;
 struct pfs_node* FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct pfs_node*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct pfs_node *VAR_3, int VAR_4)
{
 struct pfs_node *VAR_5, *VAR_6;

 VAR_5 = FUNC_1(VAR_3->pn_info, ".", VAR_2, VAR_4);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 VAR_6 = FUNC_1(VAR_3->pn_info, "..", VAR_1, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_5);
  return (VAR_0);
 }
 FUNC_0(VAR_3, VAR_5);
 FUNC_0(VAR_3, VAR_6);
 return (0);
}
