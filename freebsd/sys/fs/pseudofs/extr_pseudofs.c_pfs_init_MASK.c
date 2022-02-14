
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsconf {int dummy; } ;
struct pfs_node {int dummy; } ;
struct pfs_info {int (* pi_init ) (struct pfs_info*,struct vfsconf*) ;char* pi_name; struct pfs_node* pi_root; } ;


 scalar_t__ VAR_0 ;
 struct pfs_node* FUNC_0 (struct pfs_info*,char*,int ) ;
 int FUNC_1 (struct pfs_node*) ;
 int FUNC_2 (struct pfs_node*) ;
 int FUNC_3 (struct pfs_info*) ;
 int FUNC_4 (struct pfs_node*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct pfs_info*,struct vfsconf*) ;

int
FUNC_7(struct pfs_info *VAR_2, struct vfsconf *VAR_3)
{
 struct pfs_node *VAR_4;
 int VAR_5;

 FUNC_3(VAR_2);


 VAR_4 = FUNC_0(VAR_2, "/", VAR_1);
 VAR_2->pi_root = VAR_4;
 FUNC_2(VAR_4);
 FUNC_4(VAR_4);


 VAR_5 = (VAR_2->pi_init)(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_4);
  VAR_2->pi_root = ((void*)0);
  return (VAR_5);
 }

 if (VAR_0)
  FUNC_5("%s registered\n", VAR_2->pi_name);
 return (0);
}
