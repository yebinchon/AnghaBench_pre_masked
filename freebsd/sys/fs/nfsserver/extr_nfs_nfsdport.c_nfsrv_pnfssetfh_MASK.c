
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct pnfsdsfile {int dsf_fh; } ;
struct nfsnode {TYPE_1__* n_fhp; } ;
struct TYPE_2__ {int nfh_fh; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int VAR_3 ;
 struct nfsnode* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int ,int ,char*,int,char*,int *) ;

__attribute__((used)) static void
FUNC_5(struct vnode *VAR_4, struct pnfsdsfile *VAR_5, char *VAR_6,
    char *VAR_7, struct vnode *VAR_8, NFSPROC_T *VAR_9)
{
 struct nfsnode *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_8);
 FUNC_0(VAR_10->n_fhp->nfh_fh, &VAR_5->dsf_fh, VAR_3);







 if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0) && FUNC_2(VAR_4) ==
     VAR_2)
  VAR_11 = FUNC_4(VAR_4, VAR_1,
      VAR_0, "pnfsd.dsfile", sizeof(*VAR_5),
      (char *)VAR_5, VAR_9);
 FUNC_1(4, "eo nfsrv_pnfssetfh=%d\n", VAR_11);
}
