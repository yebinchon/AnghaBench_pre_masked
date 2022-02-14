
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xvfsp ;
struct xvfsconf {int * vfc_next; int * vfc_vfsops; int vfc_flags; int vfc_refcount; int vfc_typenum; int vfc_name; } ;
struct vfsconf {int vfc_flags; int vfc_refcount; int vfc_typenum; int vfc_name; } ;
struct sysctl_req {int dummy; } ;


 int FUNC_0 (struct sysctl_req*,struct xvfsconf*,int) ;
 int FUNC_1 (struct xvfsconf*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct sysctl_req *VAR_0, struct vfsconf *VAR_1)
{
 struct xvfsconf VAR_2;

 FUNC_1(&VAR_2, sizeof(VAR_2));
 FUNC_2(VAR_2.vfc_name, VAR_1->vfc_name);
 VAR_2.vfc_typenum = VAR_1->vfc_typenum;
 VAR_2.vfc_refcount = VAR_1->vfc_refcount;
 VAR_2.vfc_flags = VAR_1->vfc_flags;




 VAR_2.vfc_vfsops = ((void*)0);
 VAR_2.vfc_next = ((void*)0);
 return (FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2)));
}
