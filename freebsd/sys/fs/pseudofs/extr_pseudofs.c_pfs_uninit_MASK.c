
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsconf {int dummy; } ;
struct pfs_info {char* pi_name; int (* pi_uninit ) (struct pfs_info*,struct vfsconf*) ;int * pi_root; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pfs_info*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct pfs_info*,struct vfsconf*) ;

int
FUNC_4(struct pfs_info *VAR_1, struct vfsconf *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->pi_root);
 VAR_1->pi_root = ((void*)0);
 FUNC_1(VAR_1);
 if (VAR_0)
  FUNC_2("%s unregistered\n", VAR_1->pi_name);
 VAR_3 = (VAR_1->pi_uninit)(VAR_1, VAR_2);
 return (VAR_3);
}
