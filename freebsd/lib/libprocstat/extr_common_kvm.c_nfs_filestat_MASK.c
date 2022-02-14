
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnstat {scalar_t__ vn_mode; int vn_size; int vn_fileid; int vn_fsid; } ;
struct vnode {int v_type; } ;
struct TYPE_2__ {scalar_t__ va_mode; int va_fileid; int va_fsid; } ;
struct nfsnode {TYPE_1__ n_vattr; int n_size; } ;
typedef int nfsnode ;
typedef scalar_t__ mode_t ;
typedef int kvm_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;







 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (int *,unsigned long,struct nfsnode*,int) ;
 int FUNC_2 (char*,void*) ;

int
FUNC_3(kvm_t *VAR_7, struct vnode *VAR_8, struct vnstat *VAR_9)
{
 struct nfsnode VAR_10;
 mode_t VAR_11;

 if (!FUNC_1(VAR_7, (unsigned long)FUNC_0(VAR_8), &VAR_10,
     sizeof(VAR_10))) {
  FUNC_2("can't read nfsnode at %p",
      (void *)FUNC_0(VAR_8));
  return (1);
 }
 VAR_9->vn_fsid = VAR_10.n_vattr.va_fsid;
 VAR_9->vn_fileid = VAR_10.n_vattr.va_fileid;
 VAR_9->vn_size = VAR_10.n_size;
 VAR_11 = (mode_t)VAR_10.n_vattr.va_mode;
 switch (VAR_8->v_type) {
 case 129:
  VAR_11 |= VAR_5;
  break;
 case 132:
  VAR_11 |= VAR_2;
  break;
 case 134:
  VAR_11 |= VAR_0;
  break;
 case 133:
  VAR_11 |= VAR_1;
  break;
 case 130:
  VAR_11 |= VAR_4;
  break;
 case 128:
  VAR_11 |= VAR_6;
  break;
 case 131:
  VAR_11 |= VAR_3;
  break;
 default:
  break;
 };
 VAR_9->vn_mode = VAR_11;
 return (0);
}
