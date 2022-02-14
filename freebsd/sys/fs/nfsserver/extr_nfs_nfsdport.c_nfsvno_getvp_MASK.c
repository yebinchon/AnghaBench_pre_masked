
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_3__ {int fh_fid; int fh_fsid; } ;
typedef TYPE_1__ fhandle_t ;


 int VAR_0 ;
 int FUNC_0 (struct mount*,int *,int ,struct vnode**) ;
 struct mount* FUNC_1 (int *) ;
 int FUNC_2 (struct mount*) ;

struct vnode *
FUNC_3(fhandle_t *VAR_1)
{
 struct mount *VAR_2;
 struct vnode *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(&VAR_1->fh_fsid);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_4 = FUNC_0(VAR_2, &VAR_1->fh_fid, VAR_0, &VAR_3);
 FUNC_2(VAR_2);
 if (VAR_4)
  return (((void*)0));
 return (VAR_3);
}
