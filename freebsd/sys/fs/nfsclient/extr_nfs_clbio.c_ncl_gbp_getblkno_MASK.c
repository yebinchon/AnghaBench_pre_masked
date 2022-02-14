
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_ooffset_t ;
struct TYPE_2__ {int bo_bsize; } ;
struct vnode {TYPE_1__ v_bufobj; } ;
typedef int daddr_t ;



__attribute__((used)) static daddr_t
FUNC_0(struct vnode *VAR_0, vm_ooffset_t VAR_1)
{

 return (VAR_1 / VAR_0->v_bufobj.bo_bsize);
}
