
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct vattr {int va_mode; int va_type; scalar_t__ va_size; int va_gid; int va_uid; } ;
struct ucred {int dummy; } ;
struct pnfsdsfile {int dsf_filename; } ;
struct nfsdevice {int dummy; } ;
typedef int fhandle_t ;
typedef int NFSPROC_T ;


 int FUNC_0 (int,char*,int ,struct pnfsdsfile*) ;
 int FUNC_1 (struct vattr*) ;
 int FUNC_2 (int ,struct vattr*,struct ucred*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct vattr*,struct vattr*,int *,struct pnfsdsfile*,int *,int ,struct ucred*,int *,int *) ;

__attribute__((used)) static int
FUNC_4(vnode_t VAR_1, fhandle_t *VAR_2, struct pnfsdsfile *VAR_3,
    vnode_t VAR_4, struct nfsdevice *VAR_5, struct ucred *VAR_6, NFSPROC_T *VAR_7,
    vnode_t *VAR_8)
{
 struct vattr VAR_9, VAR_10;
 int VAR_11;


 VAR_11 = FUNC_2(VAR_1, &VAR_9, VAR_6);
 if (VAR_11 == 0) {

  FUNC_1(&VAR_10);
  VAR_10.va_uid = VAR_9.va_uid;
  VAR_10.va_gid = VAR_9.va_gid;
  VAR_10.va_mode = VAR_9.va_mode;
  VAR_10.va_size = 0;
  FUNC_1(&VAR_9);
  VAR_9.va_type = VAR_0;
  VAR_9.va_mode = VAR_10.va_mode;
  FUNC_0(4, "nfsrv_dscreatefile: dvp=%p pf=%p\n", VAR_4, VAR_3);
  VAR_11 = FUNC_3(VAR_4, &VAR_9, &VAR_10, VAR_2, VAR_3, ((void*)0),
      VAR_3->dsf_filename, VAR_6, VAR_7, VAR_8);
 }
 return (VAR_11);
}
