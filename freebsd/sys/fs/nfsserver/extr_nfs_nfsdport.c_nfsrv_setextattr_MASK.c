
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct pnfsdsattr {int dsa_mtime; int dsa_atime; int dsa_size; int dsa_filerev; } ;
struct nfsvattr {int na_mtime; int na_atime; int na_size; int na_filerev; } ;
typedef int dsattr ;
typedef int NFSPROC_T ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct vnode*,int ,int ,char*,int,char*,int *) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_2, struct nfsvattr *VAR_3, NFSPROC_T *VAR_4)
{
 struct pnfsdsattr VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, "nfsrv_setextattr vp");
 VAR_5.dsa_filerev = VAR_3->na_filerev;
 VAR_5.dsa_size = VAR_3->na_size;
 VAR_5.dsa_atime = VAR_3->na_atime;
 VAR_5.dsa_mtime = VAR_3->na_mtime;
 VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_0,
     "pnfsd.dsattr", sizeof(VAR_5), (char *)&VAR_5, VAR_4);
 if (VAR_6 != 0)
  FUNC_1("pNFS: setextattr=%d\n", VAR_6);
 return (VAR_6);
}
